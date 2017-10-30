function buscaBinaria(lista, x){

    var primeiro = 0;
    var ultimo = lista.length;

    while (primeiro <= ultimo) {
        meio = parseInt((primeiro + ultimo) / 2)
        if (lista[meio] == x){
            return meio
        } else {
            if (x < lista[meio]){
                ultimo = meio - 1;
            } else {
                primeiro = meio + 1;
            }
        }
    }
    return -1;
}
