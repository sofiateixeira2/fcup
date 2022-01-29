/*
  Nome: Ana Sofia de Castro Teixeira
  Número: 201906031
  Ajudas: Falei com um colega que me ajudou a compreender melhor como implementar o remove.
  Explicação:
    Para o reverse utilizei o cur.getValue para obter o valor do Node atual e o addFirst para adicionar os novos valores sempre na cabeça da lista fazendo com que esta fique
      invertida. Isto enquanto o cur != null, isto é, enquanto o cur não atingisse o fim da lista.
      Complexidade: O(N)
    Para o occurrences criei um array occurrence para guardar as ocorrências do/s valor/es pedidos com o tamanho size (já que este não pode ser maior que o tamanho da lista).
      De seguida, criei uma variável count que conta o número de ocorrências que existiram e uma variável position que conta as posições que vão avançando até atingir o fim da lista.
      Por fim, criei um novo array occurrences_final para guardar os valores de occurrences mas com o size ajustado.
      Complexidade: O(N)
    Para o remove criei uma nova estrutura HashSet e coloco os elementos a remover já que existe um método chamado .contains(elemento) que retorna se um dado número existe ou não em tempo instantaneo.
      Este método permite percorrer a lista apenas uma vez.
      Complexidade: O(N+M) onde M é o número de vezes em que se percorre HashSet.
*/


import java.util.*;

public class SinglyLinkedList<T> {

  private Node<T> first;
  private int size;

  SinglyLinkedList() {
    first = null;
    size = 0;
  }

  public int size() {
    return size;
  }

  public boolean isEmpty() {
    return (size == 0);
  }

  public void addFirst(T v) {
    Node<T> newNode = new Node<T>(v, first);
    first = newNode;
    size++;
  }

  public void addLast(T v) {
    Node<T> newNode = new Node<T>(v, null);
    if(isEmpty()) {
      first = newNode;
    } else {
      Node<T> cur = first;
      while (cur.getNext() != null)
        cur = cur.getNext();
      cur.setNext(newNode);
    }
    size++;
  }

  public T getFirst() {
    if(isEmpty()) return null;
    return first.getValue();
  }

  public T getLast() {
    if(isEmpty()) return null;
    Node<T> cur = first;
    while(cur.getNext() != null)
      cur = cur.getNext();
    return cur.getValue();
  }

  public void removeFirst() {
    if(isEmpty()) return;
    first = first.getNext();
    size--;
  }

  public void removeLast() {
    if(isEmpty()) return;
    if(size == 1) {
      first = null;
    } else {
      Node<T> cur = first;
      for(int i=0; i<size-2; i++)
        cur = cur.getNext();
      cur.setNext(cur.getNext().getNext());
    }
    size--;
  }

  public SinglyLinkedList<T> reverse() {
    SinglyLinkedList<T> reverse = new SinglyLinkedList<T>();
    Node<T> cur = first;
    while(cur != null) {
      reverse.addFirst(cur.getValue());
      cur = cur.getNext();
    }
    return reverse;
  }

  public int[] occurrences(T elem) {
    int[] occurrences = new int[size];
    Node<T> cur = first;
    int count = 0;
    int position = 0;
    while(cur != null) {
      if(cur.getValue().equals(elem)) {
        occurrences[count] = position;
        count++;
      }
      cur = cur.getNext();
      position++;
    }
    if(count == 0) return null;
    int[] occurrences_final = new int[count];
    for(int i = 0; i < count; i++)
      occurrences_final[i] = occurrences[i];

    return occurrences_final;
  }

  public void remove(SinglyLinkedList<T> toRemove) {
    HashSet<T> hash = new HashSet<>();
    while(toRemove.size() != 0) {
      hash.add(toRemove.getFirst());
      toRemove.removeFirst();
    }
    Node<T> cur = first;
    Node<T> prev = null;
    while(cur != null) {
      if(hash.contains(cur.getValue())) {
        if(size == 1) {
          first = null;
          size--;
          break;
        } else if(prev == null) {
          first = cur.getNext();
        } else {
          prev.setNext(cur.getNext());
        }
        size--;
      } else {
        prev = cur;
      }
      cur = cur.getNext();
    }
  }


  public String toString() {
    String str = "{";
    Node<T> cur = first;
    while(cur != null) {
      str += cur.getValue();
      cur = cur.getNext();
      if(cur != null) str += ",";
    }
    str += "}";
    return str;
  }
}
