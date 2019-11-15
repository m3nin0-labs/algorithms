forest = {}

forest.sweeper = {}

function forest.node( value )
    return {
        left = nil,
        right = nil,
        value = value
    }
end

function forest.tree( root )
    return {
        root = root
    }
end

function forest.insert( root, node )    
    if root == nil then
        return node
    end
    
    -- Verificação para permitir que a árvore toda
    -- seja inserida
    if root.root ~= nil then
        root = root.root
    end

    if root.value > node.value then
        root.left = forest.insert(root.left, node)
    else
        root.right = forest.insert(root.right, node)
    end

    --[[ Retorna o nó inserido, evitando problemas de ligação
    entre os nós da árvore ]]
    return root
end

function forest.sweeper.sweep(root, sweeper)
    sweeper(root.root, sweeper)
end

-- deep-first
function forest.sweeper.preorder(root) 
    print( root.value )

    if root.left ~= nil then
        forest.sweeper.preorder(root.left)
    end

    if root.right ~= nil then
        forest.sweeper.preorder(root.right)
    end
end

-- in-order (Simétrico)
function forest.sweeper.inorder(root)
    
end

function forest.sweeper.posorder(root)
    
end

return forest
