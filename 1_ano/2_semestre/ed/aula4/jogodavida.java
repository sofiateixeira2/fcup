import java.util.Scanner;

// Classe para representar um jogo
class Game {
    final char DEAD  = '.';  // Constante que indica uma celula morta
    final char ALIVE = 'O';  // Constante que indica uma celula viva
    private int rows, cols;  // Numero de linhas e colunas
    private char m[][];      // Matriz para representar o estado do jogo
    private int REP_NUMBER = 3; //reproduz se = 3
    private int OVERPOP = 3;  //morre de overpopulation se > 3
    private int UNDERPOP = 2; //morre de solidão < 2
    // Construtor: inicializa as variaveis tendo em conta a dimensao dada
    Game(int r, int c) {
      rows = r;
      cols = c;
      m = new char[r][c];
    }

    // Metodo para ler o estado inicial para a matriz m[][]
    public void read(Scanner in) {
	    for (int i=0; i<rows; i++)
          m[i] = in.next().toCharArray();
    }

    // Metodo para escrever a matriz m[][]
    public void write() {
      for(int r=0; r<rows; r++) {
        for(int c=0; c<cols; c++) {
          System.out.print(m[r][c]);
        }
        System.out.println();
      }
    }

    // Deve devolver o numero de celulas vivas que sao vizinhas de (y,x)
    private int countAlive(int y, int x) {
	     int count = 0;
       for (int r=y-1; r<=y+1; r++) {
         for (int c=x-1; c<=x+1; c++) {
           if(r >= 0 && c >= 0 && r < rows && c < cols)
             if(m[r][c]== ALIVE)
               count++;
         }
       }
       if(m[y][x] != DEAD)
         count--;

	     return count;
    }

    // Deve fazer uma iteracao: cria nova geracao a partir da actual
    public void iterate() {

      int m2[][] = new int[rows][cols];

      for(int r=0; r<rows; r++)
        for(int c=0; c<cols; c++)
          m2[r][c] = countAlive(r,c);

      for(int r=0; r<rows; r++) {
        for(int c=0; c<cols; c++) {
          if(m2[r][c] < UNDERPOP || m2[r][c] > OVERPOP) {
              m[r][c] = DEAD;
          } else if(m2[r][c] == REP_NUMBER) {
            m[r][c] = ALIVE;
          }
        }
      }
    }

}

// Classe principal com o main()
public class jogodavida {
    public static void main(String[] args) {
	     Scanner in = new Scanner(System.in);

	      // Ler linhas, colunas e numero de iteracoes
	      int rows = in.nextInt();
	      int cols = in.nextInt();
        int n    = in.nextInt();

	      // Criar objecto para conter o jogo e ler estado inicial
	      Game g = new Game(rows, cols);
	      g.read(in);
        for(int i=0; i<n; i++) {
          g.iterate();
        }
        g.write();
	//... por completar
    }
}
