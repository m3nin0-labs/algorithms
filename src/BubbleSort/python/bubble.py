class Sort():
    def bubbleSort(self, lista):
        fim = len(lista)

        # Começo do fim, vou até o inicio
        for i in range(fim -1, 0, -1):
            # O j vai de 0 até o número de i
            for j in range(i):
                # Comparando os pares
                if lista[j] > lista[j + 1]:
                    # Fazendo a troca dos itens
                    lista[j], lista[j + 1] = lista[j + 1], lista[j]
        return lista

sort = Sort()
lista = [12,21,123,123123,33223,2356,123,1,2,3]
final = sort.bubbleSort(lista)

print(final)
