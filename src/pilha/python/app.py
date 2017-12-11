'''
Main para teste das classes de pilha
'''
from pilha import Stack

def main():
    pilha = Stack()

    pilha.push(1)
    pilha.push(2)
    pilha.push(3)
    pilha.push(4)
    pilha.push(5)

    while(not pilha.isEmpty()):
        print(pilha.pop())

    # Forçando um pop. Para testar controle
    pilha.pop()

if __name__ == '__main__':
    main()
