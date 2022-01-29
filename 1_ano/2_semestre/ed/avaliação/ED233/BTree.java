/*
  Nome: Ana Sofia de Castro Teixeira
  Número: 201906031
  Ajudas: Falei com um colega que me ajudou a compreender melhor como implementar o maxLevel e corrigir alguns erros.
  Explicação:
    Para internal() fiz uma função recursiva que verifica caso o nó seja null ou caso não tenha filho esquerdo nem direito, incrementa 0 já que não é um nó interno. Se tiver
  um filho esquerdo ou direito ou os dois, incrementa 1. A função continua até chegar a uma linha em que todos os nós sejam null.
      Complexidade: O(N)
    Para cut() fiz uma função recursiva que quando chega ao nível de profundidade anterior à pedida(pois começa em 0), define os filhos esquerdo e direito como null cortando
  assim a àrvore no nível pedido.
      Complexidade: O(N)
    Para maxLevel() criei uma Queue q que contem os nós de uma linha da árvore. A variável count conta o número de nós que a linha atual tem (se count = 0, estamos numa linha de nulls
  o que significa que chegamos à ultima linha da àrvore). No ciclo while(count > 0): definimos cur como o primeiro valor de q pois este valor vai ser um dos nós da linha anterior; de
  seguida retiramos esse nó e acrescentamos os seus filhos esquerdo e direito diferentes de null; decrementamos count por termos retirado o primeiro elemento de q; quando count for
  >= 0, o ciclo while(true) acaba. Assim a[] contem o numero máximo de nós de um nível e o número de níveis com essa quantidade.
      Complexidade: O(N)

*/

public class BTree<T> {
   private BTNode<T> root; // raiz da arvore

   // Construtor
   BTree() {
      root = null;
   }

   // Getter e Setter para a raiz
   public BTNode<T> getRoot() {return root;}
   public void setRoot(BTNode<T> r) {root = r;}

   // Verificar se arvore esta vazia
   public boolean isEmpty() {
      return root == null;
   }

   // --------------------------------------------------------

   // Numero de nos da arvore
   public int numberNodes() {
      return numberNodes(root);
   }

   private int numberNodes(BTNode<T> n) {
      if (n == null) return 0;
      return 1 + numberNodes(n.getLeft()) + numberNodes(n.getRight());
   }

   // --------------------------------------------------------

   // Altura da arvore
   public int depth() {
      return depth(root);
   }

   private int depth(BTNode<T> n) {
      if (n == null) return -1;
      return 1 + Math.max(depth(n.getLeft()), depth(n.getRight()));
   }

   // --------------------------------------------------------

   // O elemento value esta contido na arvore?
   public boolean contains(T value) {
      return contains(root, value);
   }

   private boolean contains(BTNode<T> n, T value) {
      if (n==null) return false;
      if (n.getValue().equals(value)) return true;
      return contains(n.getLeft(), value) || contains(n.getRight(), value);
   }

   // --------------------------------------------------------

   public int internal() {
     return internal(root);
   }

   private int internal(BTNode<T> n) {
     if(n == null) return 0;
     if(n.getLeft() == null && n.getRight() == null) return 0;
     return 1 + internal(n.getLeft()) + internal(n.getRight());
   }

   public void cut(int d) {
     if(d <= 0) {
       root = null;
     } else if(d > depth(root)) {
       return;
     } else {
       cut(root, d, 0);
     }
   }

   private void cut(BTNode<T> n, int d, int l) {
     if(n == null) return;
     if(l+1 == d) {
       n.setLeft(null);
       n.setRight(null);
     } else {
       cut(n.getLeft(), d, l+1);
       cut(n.getRight(), d, l+1);
     }
   }

   public int[] maxLevel() {
     return maxLevel(root);
   }

   public int[] maxLevel(BTNode<T> n) {
     MyQueue<BTNode<T>> q = new LinkedListQueue<BTNode<T>>();
     int a[] = {1, 0};
     q.enqueue(root);
     while(true) {
       int count = q.size();
       if(count == 0) break;
       if(count > a[0]) {
         a[0] = count;
         a[1] = 1;
       } else if (count == a[0]) {
         a[1]++;
       }
       while (count > 0) {
         BTNode<T> cur = q.first();
         q.dequeue();
         if(cur.getLeft() != null) q.enqueue(cur.getLeft());
         if(cur.getRight() != null) q.enqueue(cur.getRight());
         count--;
       }
     }
     return a;
   }

   // --------------------------------------------------------

   // Imprimir arvore em PreOrder
   public void printPreOrder() {
      System.out.print("PreOrder:");
      printPreOrder(root);
      System.out.println();
   }

   private void printPreOrder(BTNode<T> n) {
      if (n==null) return;
      System.out.print(" " + n.getValue() );
      printPreOrder(n.getLeft());
      printPreOrder(n.getRight());
   }

   // --------------------------------------------------------

   // Imprimir arvore em InOrder
   public void printInOrder() {
      System.out.print("InOrder:");
      printInOrder(root);
      System.out.println();
   }

   private void printInOrder(BTNode<T> n) {
      if (n==null) return;
      printInOrder(n.getLeft());
      System.out.print(" " + n.getValue());
      printInOrder(n.getRight());
   }

   // --------------------------------------------------------

   // Imprimir arvore em PostOrder
   public void printPostOrder() {
      System.out.print("PostOrder:");
      printPostOrder(root);
      System.out.println();
   }

   private void printPostOrder(BTNode<T> n) {
      if (n==null) return;
      printPostOrder(n.getLeft());
      printPostOrder(n.getRight());
      System.out.print(" " + n.getValue());
   }

   // --------------------------------------------------------

   // Imprimir arvore numa visita em largura (usando TAD Fila)
   public void printBFS() {
      System.out.print("BFS:");

      MyQueue<BTNode<T>> q = new LinkedListQueue<BTNode<T>>();
      q.enqueue(root);
      while (!q.isEmpty()) {
         BTNode<T> cur = q.dequeue();
         if (cur != null) {
            System.out.print(" " + cur.getValue());
            q.enqueue(cur.getLeft());
            q.enqueue(cur.getRight());
         }
      }
      System.out.println();
   }

   // --------------------------------------------------------

   // Imprimir arvore numa visita em profundidade (usando TAD Pilha)
   public void printDFS() {
      System.out.print("DFS:");

      MyStack<BTNode<T>> q = new LinkedListStack<BTNode<T>>();
      q.push(root);
      while (!q.isEmpty()) {
         BTNode<T> cur = q.pop();
         if (cur != null) {
            System.out.print(" " + cur.getValue());
            q.push(cur.getLeft());
            q.push(cur.getRight());
         }
      }
      System.out.println();
   }

}
