'''
E 1.1 - Faça uma lista de todos os grafos que tenham {a, b ,c} por conjunto
de vértices,. Faça a lista de modo que cada grafo apareça ao lado do seu complemento
'''

G = set(['a', 'b', 'c']) # Conjunto inicial

a = set(['a', 'b', 'c']) # Conjunto sem ligações
b = set(['ab'])
c = set(['cb'])
d = set(['ab', 'bc'])
e = set(['ac'])
f = set(['ac', 'bc'])
g = set(['ab', 'ac'])
h = set(['ab', 'ac', 'bc'])

conjuntos = [a, b, c, d, e ,f , g, h]

print('Os grafos são:')
for graph in conjuntos:
    print(graph)
