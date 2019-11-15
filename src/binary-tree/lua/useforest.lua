require("forest")

tree = forest.tree(forest.node(6))

-- Inserção de valores (Ordem crescente da esquerda para a direita)
forest.insert(tree, forest.node(7))
forest.insert(tree, forest.node(3))
forest.insert(tree, forest.node(99))
forest.insert(tree, forest.node(1))


-- Visualização em pré-ordem
forest.sweeper.sweep(tree, forest.sweeper.preorder)

