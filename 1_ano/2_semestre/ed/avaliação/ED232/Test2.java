import java.util.Arrays;

public class Test2{
    public static void main(String[] args){
        SinglyLinkedList<Integer> list = new SinglyLinkedList<Integer>();
        list.addFirst(8);
        list.addFirst(6);
        list.addFirst(4);
        list.addFirst(2);
        System.out.println(list.reverse());
        System.out.println(list);

        SinglyLinkedList<Character> list_char = new SinglyLinkedList<Character>();
        list_char.addFirst('c');
        list_char.addFirst('b');
        list_char.addFirst('a');
        System.out.println(list_char.reverse());
        System.out.println(list_char);

        SinglyLinkedList<String> list_string = new SinglyLinkedList<String>();
        list_string.addFirst("edados");
        System.out.println(list_string.reverse());
        System.out.println(list_string);

        SinglyLinkedList<Integer> list1 = new SinglyLinkedList<Integer>();
        System.out.println(list1.reverse());
        System.out.println(list1);

        //-------------------------------------

        SinglyLinkedList<Integer> list2 = new SinglyLinkedList<>();
        list2.addFirst(1);
        list2.addFirst(2);
        list2.addFirst(1);
        list2.addFirst(1);
        list2.addFirst(5);
        list2.addFirst(2);

        System.out.println(Arrays.toString(list2.occurrences(1)));
        System.out.println(Arrays.toString(list2.occurrences(2)));
        System.out.println(Arrays.toString(list2.occurrences(3)));

        SinglyLinkedList<Character> listchar = new SinglyLinkedList<>();
        listchar.addFirst('a');
        listchar.addFirst('a');
        listchar.addFirst('a');
        listchar.addFirst('a');
        System.out.println(Arrays.toString(listchar.occurrences('a')));

        SinglyLinkedList<String> liststring = new SinglyLinkedList<>();
        liststring.addFirst("dados");
        liststring.addFirst("de");
        liststring.addFirst("estruturas");
        System.out.println(Arrays.toString(liststring.occurrences("dados")));

        SinglyLinkedList<Character> listchar1 = new SinglyLinkedList<>();
        listchar1.addFirst('s');
        listchar1.addFirst('a');
        listchar1.addFirst('n');
        listchar1.addFirst('a');
        listchar1.addFirst('n');
        listchar1.addFirst('a');
        System.out.println(Arrays.toString(listchar1.occurrences('a')));

        SinglyLinkedList<Integer> listint = new SinglyLinkedList<>();
        System.out.println(Arrays.toString(listint.occurrences(1)));

        //----------------------------------------------

        SinglyLinkedList<Character> charList = new SinglyLinkedList<>();
        SinglyLinkedList<Character> aux = new SinglyLinkedList<>();
        charList.addFirst('c');
        charList.addFirst('a');
        charList.addFirst('d');
        charList.addFirst('b');
        charList.addFirst('a');
        aux.addFirst('e');
        aux.addFirst('d');
        aux.addFirst('c');
        aux.addFirst('b');
        aux.addFirst('a');
        charList.remove(aux);
        System.out.println(charList);

        SinglyLinkedList<Integer> yet = new SinglyLinkedList<>();
        SinglyLinkedList<Integer> aux1 = new SinglyLinkedList<>();
        yet.addFirst(42);
        yet.addFirst(42);
        yet.addFirst(42);
        yet.addFirst(42);
        yet.addFirst(42);
        yet.addFirst(42);
        aux1.addFirst(1);
        aux1.addFirst(42);
        yet.remove(aux1);
        System.out.println(yet);

        SinglyLinkedList<String> teste = new SinglyLinkedList<>();
        SinglyLinkedList<String> aux2 = new SinglyLinkedList<>();
        teste.remove(aux2);
        System.out.println(teste);
    }
}
