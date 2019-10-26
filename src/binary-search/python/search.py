def binary_search(el, elements: list) -> tuple:
    """Busca binária iterativa

    Args:
        el: Elemento pesquisado na lista
        elements (list): Lista de elementos que será pesquisada
    Returns:
        tuple: Tupla com dois elementos, sendo a posição um o índice do elemento encontrado
        e a seguinda posição o elemento encontrado.
    """

    start_index = 0
    end_index = len(elements)

    while(start_index < end_index):
        actual_middle = (start_index + end_index) // 2

        if elements[actual_middle] == el:
            return (actual_middle, elements[actual_middle])

        if elements[actual_middle] > el:
            end_index = actual_middle - 1
        else:
            start_index = actual_middle + 1
    return (-1, None)


def binary_search_recursive(el, elements: list) -> tuple:
    """Busca binária iterativo

    Args:
        el: Elemento pesquisado na lista
        elements (list): Lista de elementos que será pesquisada
    Returns:
        tuple: Tupla com dois elementos, sendo a posição um o índice do elemento encontrado
        e a seguinda posição o elemento encontrado.
    """

    def processor(el, elements, start_index, end_index):
        actual_middle = (start_index + end_index) // 2

        if start_index >= end_index: # Ponto de parada (Parte mais importante da recursão - F. Masanori)
            return (-1, None)

        if elements[actual_middle] == el:
            return (actual_middle, elements[actual_middle])

        if elements[actual_middle] > el:
            return processor(el, elements, start_index, actual_middle - 1)
        return processor(el, elements, actual_middle + 1, end_index)
    return processor(el, elements, 0, len(elements))
