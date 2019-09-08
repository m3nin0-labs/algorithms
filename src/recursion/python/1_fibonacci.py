from functools import lru_cache


def fibonacci(n: int) -> int:
    """Função para o cálculo recursivo da sequência de fibonacci

    Args:
        n (int): Quantidade de elementos que a sequência gerada deve ter
    Returns:
        int: Valor calculado da sequência
    """

    if n <= 2:
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)


lru_cache(maxsize=None)
def fibonacci_lru(n: int) -> int:
    """Função otimizada para o cálculo da sequência de fibonacci

    Args:
        n (int): Quantidade de elementos que a sequência gerada deve ter
    Returns:
        int: Valor calculado da sequência
    See:
        O algoritmo de fibonacci é muito problemático quando trabalha com recursão,
        uma vez que diversos cálculos repetidos são feitos. Esta função, através
        de um cache (lru_cache) evita estes calculos repetidos, tornando a função mais rápida 
    """

    if n <= 2:
        return 1
    return fibonacci_lru(n - 1) + fibonacci_lru(n - 2)


print("Fibonacci sequence (N = 20)")
print(fibonacci(20))

print("Fibonacci sequence (N = 20) - LRU Cache")
print(fibonacci_lru(20))
