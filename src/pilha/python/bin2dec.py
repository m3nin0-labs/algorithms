from pilha import Stack

def app():
    pilha = Stack()

    dec = int(input('Insira um número decimal: '))

    while (True):
        if ((dec % 2) == 0):
            pilha.push(0)
        else:
            pilha.push(1)

        dec = dec // 2

        if dec == 0:
            break

    print('O número binário é: ', end='')

    while not pilha.isEmpty():
        print(str(pilha.pop()), end='')

    print('\n')

if __name__ == '__main__':
    app()
