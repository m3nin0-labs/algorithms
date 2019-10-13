--[[
    Exemplo de algoritmo de busca binária (Iterativa) implementado em Lua.
]]

function binarySearch( list, elementToSearch )
    halfIndex = 0
    startIndex = 1
    endIndex = #list

    while (startIndex <= endIndex) do
        halfIndex = (startIndex + endIndex) // 2

        if (list[halfIndex] == elementToSearch) then
            return halfIndex
        end

        if (list[halfIndex] > elementToSearch) then
            endIndex = halfIndex - 1
        else
            startIndex = halfIndex + 1
        end
    end
    return -1;
end

elements = {
    5, 6, 7, 8, 9, 10, 11, 12
}

print('Buscando um valor existente')
print(binarySearch(elements, 12))

print('Buscando um valor não existente')
print(binarySearch(elements, 45))
