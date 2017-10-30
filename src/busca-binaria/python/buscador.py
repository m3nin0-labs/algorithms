class Buscador():
    def buscaBinaria(self, lista, x):
        primeiro = 0
        ultimo = len(lista)

        while primeiro <= ultimo:
            meio = (primeiro + ultimo) // 2
            if lista[meio] == x:
                return meio
            else:
                if x < lista[meio]:
                    ultimo = meio - 1
                else:
                    primeiro = meio + 1
        return -1

buscador = Buscador()

retorno = buscador.buscaBinaria([0, 10, 20, 30, 40, 54, 65, 79, 123, 212, 1234], 212)

if retorno != -1:
    print('Encontrado na posição: ' + str(retorno))
else:
    print('Nada foi encontrado')