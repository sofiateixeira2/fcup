// -----------------------------------------------------------
// Estruturas de Dados 2019/2020 (CC1007) - DCC/FCUP
// http://www.dcc.fc.up.pt/~pribeiro/aulas/edados1920/
// -----------------------------------------------------------
// Exemplo de utilizacao da lista duplamente ligada
// Ultima alteracao: 03/04/2018
// -----------------------------------------------------------

public class TestCircularLinkedList {
   public static void main(String[] args) {

      // Simulando processos (A,B,C,D) e escalonamento round-robin      
      // Criacao de lista de caracteres
      CircularLinkedList<Character> list = new CircularLinkedList<Character>();

      // Adicionando letras de 'A' a 'E'
      list.addLast('A');
      list.addLast('B');
      list.addLast('C');
      list.addLast('D');

      // Mostrando rotacao a funcionar
      System.out.println("8 rondas round-robin");
      for (int i=1; i<=8; i++) {
         System.out.println(i + ": " + list);
         list.rotate();
      }

      // Inserir e retirar elemento no final
      list.addLast('E');
      System.out.println("addLast('E'): " + list);
      list.removeLast();
      System.out.println("removeLast(): " + list);

      // Inserir retirar elemento no inicio
      list.addFirst('F');
      System.out.println("addFirst('F'): " + list);
      list.removeFirst();
      System.out.println("removeFirst(): " + list);

   }
}
