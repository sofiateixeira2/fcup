import java.util.*;
import java.lang.*;

public class ED115 {

  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);

    int flag = stdin.nextInt();
    System.out.println("flag = " + flag);
    int caixas = stdin.nextInt();
    System.out.println("num caixas = " + caixas);
    stdin.nextLine();
    String k_line = stdin.nextLine();
    String[] k_split = k_line.split(" ");
    int size_k_split = k_split.length;
    int k = Integer.parseInt(k_split[size_k_split - 1]);
    System.out.println("k = " + k);
    int num_clientes = stdin.nextInt();
    System.out.println("num clientes = " + num_clientes);
    stdin.nextLine();
    int tempo_demorado, tempo_chegada, tempo_saida, num_prod, tempo_espera = 0;
    System.out.println();

    if(flag == 1) {
      String cliente1 = stdin.nextLine();
      String[] cliente_split1 = cliente1.split(" ");
      tempo_chegada = Integer.parseInt(cliente_split1[1]);
      num_prod = Integer.parseInt(cliente_split1[2]);
      tempo_demorado = 10 + num_prod * k;
      tempo_saida = tempo_chegada + tempo_demorado + tempo_espera;
      System.out.println(cliente_split1[0] + " " + tempo_chegada + " " + tempo_saida);

      for(int i = 1; i < num_clientes; i++) {
        String cliente = stdin.nextLine();
        String[] cliente_split = cliente.split(" ");
        tempo_chegada = Integer.parseInt(cliente_split[1]);
        tempo_espera = tempo_saida - tempo_chegada;
        if(tempo_espera < 0) tempo_espera = 0;
        num_prod = Integer.parseInt(cliente_split[2]);
        tempo_demorado = 10 + num_prod * k;
        tempo_saida = tempo_chegada + tempo_demorado + tempo_espera;
        System.out.println(cliente_split[0] + " " + tempo_chegada + " " + tempo_saida);

      }
    }

    if(flag == 2) {
      int total_prod, total_clientes;

      for(int i = 0; i < num_clientes; i++) {
        MyQueue<Integer> caixa[i] = new LinkedListQueue<Integer>();
      }
      for(int j = 0; j < num_clientes; j++) {
        String cliente = stdin.nextLine();
        String[] cliente_split = cliente.split(" ");
        num_prod = Integer.parseInt(cliente_split[2]);

      }

    }
  }
}
