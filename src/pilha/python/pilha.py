'''
A implementação da pilha em Python não terá o método isFull()
Simplesmente por utilizar
'''

class Pilha():
    def __init__(self):
        self.elementos = []

    # Empilha
    def push(self, e):
        self.elementos.append(e)

    # Desempilha
    def pop(self):
        topo = self.elementos[-1]
        self.elementos.pop()
        return topo

    def top(self):
        return self.elementos[-1]

    def isEmpty(self):
        return (len(self.elementos) == 0)
