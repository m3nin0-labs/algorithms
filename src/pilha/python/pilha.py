'''
A implementação da pilha em Python não terá o método isFull()
Simplesmente por utilizar estrutura dinâmica, o que faz este método perder o sentido
'''

class Stack():

    def __init__(self):
        self.elementos = []

    # Empilha elementos
    def push(self, e):
        self.elementos.append(e)

    # Desempilha elementos
    def pop(self):
        # Verifica se a pilha está vazia
        if not self.isEmpty():
            e = self.elementos[-1]
            del self.elementos[-1]
            return e
        else:
            print('A pilha está vazia!')
            return -1

    def top(self):
        return self.elementos[-1]

    def isEmpty(self):
        return len(self.elementos) == 0
