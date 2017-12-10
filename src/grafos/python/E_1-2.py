'''
E 1.2 - Faça a representação de um K5 e outra de um complemento de K5 (Complemento). Quantas arestas tem Kn ?
'''

K5 = set(['a', 'b', 'c', 'd', 'e']) # Vértices de K5

# Representação das arestas de K5
arestas = []

# Criando os vértices
for vertice_atual in K5:
    l = []
    for vertices in K5:
        if vertices != vertice_atual:
            l.append(vertice_atual + vertices)
    arestas.append({vertice_atual: l})

# Exibindo os vértices
for aresta in arestas:
    print(aresta)

# Número de arestas = n * (n - 1)
num_arestas = (len(K5) * (len(K5) - 1)) / 2

print('O número de arestas é ' + str(num_arestas))

'''
Esta foi uma representação simples de ser realizada, principalmente por conta das
propriedades que o grafo K5 tem, este é completo, ou seja, cada um dos vértices,
está ligado a todos os outros vértices, e possui emparelhamento máximo, ou seja,
o "casamento" (Ligações entre arestas) engloba todas os vértices
'''
