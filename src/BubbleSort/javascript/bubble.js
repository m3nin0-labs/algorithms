// bubbleSort implementado em javascript

function bubbleSort(lista){
  for (var i = lista.length - 1; i > 0; i --){
    for (var j = 0; j < i; j++){
      if (lista[j] > lista[j + 1]){
        var temp = lista[j + 1];
        lista[j + 1] = lista[j];
        lista[j] = temp;
      }
    }
  }
  return lista;
}
