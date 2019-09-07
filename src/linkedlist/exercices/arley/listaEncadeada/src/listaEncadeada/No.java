package listaEncadeada;

public class No implements Comparable {
	protected int conteudo;
	protected No proximo;

	// Exercício 6
//	 @Override
//	 public int compareTo(Object o) {
//	
//	 No p = (No) o;
//	
//	 if (p.conteudo > this.conteudo) {
//	 return 1;
//	 }
//	 if (p.conteudo == this.conteudo) {
//	 return 0;
//	 }
//	 return 1;
//	 }
	
	// Exercício 7
	@Override
	public int compareTo(Object o) {
		
		No p = (No) o;
		
		if (p.conteudo > this.conteudo) return -1;
		if (p.conteudo == this.conteudo) return 0;
		
		return 1;
	}
}
