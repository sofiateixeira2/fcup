import java.util.*;

public class Test {
   public static void main(String[] args) {

      // Criacao de lista de inteiros
      SinglyLinkedList<Integer> list = new SinglyLinkedList<Integer>();
      // Escrevendo lista (no inicio esta vazia)
      System.out.println(list);

      list.addLast(2); list.addLast(4); list.addLast(6); list.addLast(8);
      System.out.println(list);
      System.out.println(list.reverse());

      SinglyLinkedList<Character> list1 = new SinglyLinkedList<Character>();

      list1.addLast('a'); list1.addLast('b'); list1.addLast('c');
      System.out.println(list1);
      System.out.println(list1.reverse());

      SinglyLinkedList<String> list2 = new SinglyLinkedList<String>();

      list2.addLast("edados");
      System.out.println(list2);
      System.out.println(list2.reverse());

      SinglyLinkedList<Integer> list3 = new SinglyLinkedList<Integer>();
      System.out.println(list3);
      System.out.println(list3.reverse());

      SinglyLinkedList<Integer> list4 = new SinglyLinkedList<Integer>();
      list4.addLast(2); list4.addLast(5); list4.addLast(1); list4.addLast(1); list4.addLast(2); list4.addLast(1);
      System.out.println(list4);
      System.out.println(Arrays.toString(list4.occurrences(1))); System.out.println(Arrays.toString(list4.occurrences(2))); System.out.println(Arrays.toString(list4.occurrences(3)));

      SinglyLinkedList<Character> list5 = new SinglyLinkedList<Character>();
      list5.addLast('a'); list5.addLast('b'); list5.addLast('d'); list5.addLast('a'); list5.addLast('c');
      System.out.println(list5.remove({'c', 'a'})); System.out.println(list5.remove({'a'})); System.out.println(list5.remove({'a', 'b', 'c', 'd', 'e'}));

      SinglyLinkedList<Integer> list6 = new SinglyLinkedList<Integer>();
      SinglyLinkedList<Integer> remove1 = new SinglyLinkedList<Integer>();
      remove1.addLast(42); remove1.addLast(1);
      list6.addLast(42); list6.addLast(22); list6.addLast(42); list6.addLast(42); list6.addLast(22); list6.addLast(42);
      System.out.println(list6.remove(remove1));

      SinglyLinkedList<String> list7 = new SinglyLinkedList<String>();
      SinglyLinkedList<String> remove2 = new SinglyLinkedList<String>();
      remove2.addLast("ola");
      list7.addLast("ola"); list7.addLast("ola"); list7.addLast("mundo"); list7.addLast("ola");
      System.out.println(list7.remove(remove2));

      SinglyLinkedList<Integer> list8 = new SinglyLinkedList<Integer>();
      SinglyLinkedList<Integer> remove3 = new SinglyLinkedList<Integer>();
      remove3.addLast(3);
      list8.addLast(1); list8.addLast(2); list8.addLast(3); list8.addLast(3); list8.addLast(2); list8.addLast(1);
      System.out.println(list8.remove(remove3));


   }
}
