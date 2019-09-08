
-- Função para o cálculo fatorial (Recursivo)
function factorial( n )
    if n > 1 then
        return factorial( n - 1 ) * n
    else
        return 1
    end
end

-- Função auxiliar para a exibição do valor fatorial
function showFactorial( n )
    print( "Factorial(" .. n .. ") = " .. factorial(n) )
end

-- Exibe fatorial de 1 à 20
for i=1,20 do
    showFactorial( i )
end
