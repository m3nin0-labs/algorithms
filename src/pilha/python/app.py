'''
Main para teste das classes de pilha
'''

from pilha import Pilha

def main():
    pilha = Pilha()

    pilha.push(1)
    pilha.push(2)
    pilha.push(3)
    pilha.push(4)
    pilha.push(5)

    while(not pilha.isEmpty()):
        print(pilha.pop())

if __name__ == '__main__':
    main()
