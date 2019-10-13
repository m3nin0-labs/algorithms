--[[
    Exemplo de algoritmo de busca binária (Recursivo) implementado em Lua
]]

function binarySearchFunction( list, elementToSearch, startIndex, endIndex )
    halfIndex = (startIndex + endIndex) // 2

    if (startIndex > endIndex) then
        return -1
    end

    if (list[halfIndex] == elementToSearch) then
        return halfIndex
    end
    
    if (list[halfIndex] > elementToSearch) then
        -- O -1 é utilizado para 'remover' o meio que já foi verificado
        return binarySearchFunction(list, elementToSearch, startIndex, halfIndex - 1)
    else
        -- A mesma ideia utiliza acima tem aplicação aqui, com o diferencial de ser +1
        -- Já que a ideia é eliminar o lado já verificado
        return binarySearchFunction(list, elementToSearch, halfIndex + 1, endIndex)
    end
end

function recursiveBinarySearch( list, elementToSearch )
    startIndex = 1
    endIndex = #list

    return binarySearchFunction(list, elementToSearch, startIndex, endIndex)
end

elements = {
    5, 7, 8, 9, 11, 12, 15, 77, 88, 99, 101
}

print('Buscando elemento existente na lista')
print(recursiveBinarySearch(elements, 88))

print('Buscando elemento que não existe na lista')
print(recursiveBinarySearch(elements, 999))
