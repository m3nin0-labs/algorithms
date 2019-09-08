
function fibonacci(n)
    if (n <= 2) then
        return 1
    else 
        return fibonacci(n - 1) + fibonacci(n - 2)
    end
end

local n = 25

print( fibonacci( n ) )
