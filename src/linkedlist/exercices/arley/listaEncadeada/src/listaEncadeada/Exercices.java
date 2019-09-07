package listaEncadeada;

public class Exercices {
	public static void main(String[] args) {
		Lista lista = new Lista();
		
		for (int i = 0; i <= 10; i++) {
			lista.inserir(i);
		}
		
		lista.exibir();
		
		System.out.println("Ordenando elementos");
		lista.ordena();	
		
		Integer[] arr = lista.toArray();
		
		for (int i = 0; i < arr.length; i++) { 
			System.out.println(arr[i].intValue());
		}
	}
}
