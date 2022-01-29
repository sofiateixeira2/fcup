// -----------------------------------------------------------
// Estruturas de Dados 2019/2020 (CC1007) - DCC/FCUP
// http://www.dcc.fc.up.pt/~pribeiro/aulas/edados1920/
// -----------------------------------------------------------
// Exemplo de utilizacao da lista ligada simples
// Ultima alteracao: 01/04/2018
// -----------------------------------------------------------

public class TestSinglyLinkedList {
   public static void main(String[] args) {

      // Criacao de lista de inteiros
      SinglyLinkedList<Integer> s = new SinglyLinkedList<Integer>();

      s.addLast(2); s.addLast(4); s.addLast(6);  s.addLast(8);  s.addLast(10);
      System.out.println(s);

      s.cut(1, 5);
    }
}
