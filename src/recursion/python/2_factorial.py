

def factorial(n: int) -> int:
    """Função recursiva para o cálculo fatorial

    Args:
        n (int): Valor que terá o fatorial calculado
    Returns:
        int: Fatorial calculado
    """

    if n > 1:
        return factorial(n - 1) * n
    return 1


def show_factorial_sequence(n: int) -> None:
    """Apresenta toda a sequência de calculos fatoriais até 0 n-ésimo valor
    
    Args:
        n (int): n-ésimo valor da sequência
    Returns:
        None
    """

    for i in range(1, n + 1):
        print(f"Factorial ({str(i)}) = {str(factorial(i))}")

show_factorial_sequence(15)
