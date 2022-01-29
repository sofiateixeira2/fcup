// -----------------------------------------------------------
// Estruturas de Dados 2020/2021 (CC1007) - DCC/FCUP
// http://www.dcc.fc.up.pt/~pribeiro/aulas/edados2021/
// -----------------------------------------------------------
// Lista ligada simples
// Ultima alteracao: 03/04/2018
// -----------------------------------------------------------

public class SinglyLinkedList<T> {
   private Node<T> first;    // Primeiro no da lista
   private int size;         // Tamanho da lista

   // Construtor (cria lista vazia)
   SinglyLinkedList() {
      first = null;
      size = 0;
   }

   // Retorna o tamanho da lista
   public int size() {
      return size;
   }

   // Devolve true se a lista estiver vazia ou falso caso contrario
   public boolean isEmpty() {
      return (size == 0);
   }

   // Adiciona v ao inicio da lista
   public void addFirst(T v) {
      Node<T> newNode = new Node<T>(v, first);
      first = newNode;
      size++;
   }

   // Adiciona v ao final da lista
   public void addLast(T v) {
      Node<T> newNode = new Node<T>(v, null);
      if (isEmpty()) {
         first = newNode;
      } else {
         Node<T> cur = first;
         while (cur.getNext() != null)
            cur = cur.getNext();
         cur.setNext(newNode);
      }
      size++;
   }

   // Retorna o primeiro valor da lista (ou null se a lista for vazia)
   public T getFirst() {
      if (isEmpty()) return null;
      return first.getValue();
   }

   // Retorna o ultimo valor da lista (ou null se a lista for vazia)
   public T getLast() {
      if (isEmpty()) return null;
      Node<T> cur = first;
      while (cur.getNext() != null)
         cur = cur.getNext();
      return cur.getValue();
   }

   // Remove o primeiro elemento da lista (se for vazia nao faz nada)
   public void removeFirst() {
      if (isEmpty()) return;
      first = first.getNext();
      size--;
   }

   // Remove o ultimo elemento da lista (se for vazia nao faz nada)
   public void removeLast() {
      if (isEmpty()) return;
      if (size == 1) {
         first = null;
      } else {
         // Ciclo com for e uso de de size para mostrar alternativa ao while
         Node<T> cur = first;
         for (int i=0; i<size-2; i++)
            cur = cur.getNext();
         cur.setNext(cur.getNext().getNext());
      }
      size--;
   }

   /*public T get(int pos) {
     Node<T> cur = first;
     if(pos==0) return cur.getValue();
     for(int i = 1; i<size; i++) {
       cur = cur.getNext();
       if(i==pos) return cur.getValue();
     }
     return null;
   }*/

   /*public T remove(int pos) {
     Node<T> cur = first;
     for(int i = 0; i < size; i++) {
       if(i == pos-1) {
         cur.setNext(cur.getNext().getNext());
         size--;
         return cur.getValue();
       }
       cur = cur.getNext();
     }
     return null;
   }*/

   /*public SinglyLinkedList<T> copy() {
     SinglyLinkedList ans = new SinglyLinkedList<>();
     Node<T> cur = first;
     for(int i = 0; i < size; i++) {
       ans.addLast(cur.getValue());
       cur = cur.getNext();
     }
     return ans;
   }*/

   /*public void duplicate() {
     Node<T> cur = first;
     while(cur != null) {
       Node<T> newn = new Node<T>(cur.getValue(), cur.getNext());
       cur.setNext(newn);
       size++;
       cur = cur.getNext().getNext();
     }
   }*/

   /*public int count(T value) {
     Node<T> cur = first;
     int count = 0;
     for(int i = 0; i < size; i++) {
       if(cur.getValue().equals(value)) count++;
       cur = cur.getNext();
     }
     return count;
   }*/

   public void removeAll(T value) {
     while(!isEmpty() && first.getValue().equals(value)) removeFirst();
     Node<T> cur = first;
     while(cur != null && cur.getNext() != null) {
       if(cur.getNext() != null && cur.getNext().getValue().equals(value)) {
         cur.setNext(cur.getNext().getNext());
         size--;
       }
       cur = cur.getNext();
     }
   }

   // Converte a lista para uma String
   public String toString() {
      String str = "{";
      Node<T> cur = first;
      while (cur != null) {
         str += cur.getValue();
         cur = cur.getNext();
         if (cur != null) str += ",";
      }
      str += "}";
      return str;
   }
}
