/*
  Nome: Ana Sofia de Castro Teixeira
  Número: 201906031
  Ajudas: Acedi ao site https://www.java67.com/2015/10/how-to-convert-float-to-int-in-java-example.html para perceber como converter um float para int sem arredondar.
  Explicação:
    Fiz um array de floats para os casos diários e outro para os novos casos de dia para dia para facilitar nos cálculos necessários mais à frente.
    Para Flag1 usei um ciclo for para determinar o valor máximo e mínimo do meu array de novos casos.
      Complexidade: O(N)
    Para Flaf2 criei um array de floats para guardar as subidas percentuais diárias.
      De seguida, criei um if() para verificar se a primeira posição estava dentro do intervalo dado, pelo que se estiver, o número de períodos aumenta e o tamanho do período também.
      Por fim, utilizei um ciclo for() para verificar se o valor da posição anterior estava no intervalo e o valor da posição atual não, se assim for, significa que é o fim de um período.
      Complexidade: O(N)
    Para Flag3 criei um array de floats para guardar os números de casos / 100 e um array de inteiros que guarda a parte inteira dos valores do primeiro array.
      De seguida criei uma variável size que guarda o valor mais alto do array de inteiros e como o último valor é sempre o mais alto, a variável size vai ser sempre igual ao valor do array na sua ultima posição.
      Por último, criei dois ciclos for() (sendo i as linhas e j as colunas) que imprimem o gráfico referente aos casos.
      Complexidade: O(M*N), onde M é o ultimo elemento a dividir por 100.
*/

import java.util.Scanner;

public class ED231 {

  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);

    int n = stdin.nextInt();
    float[] cases = new float[n];
    float[] newcases = new float[n-1];

    for(int i = 0; i < n; i++)
      cases[i] = stdin.nextInt();

    int flag = stdin.nextInt();

    for(int i = 0; i < n-1; i++)
      newcases[i] = cases[i+1] - cases[i];


    if(flag == 1) {

      float max = 0; float min = newcases[0];
      for(int i = 0; i < n-1; i++) {
        if(newcases[i] > max)
          max = newcases[i];
        if(newcases[i] < min)
          min = newcases[i];
      }
      int max_int = (int) max;
      int min_int = (int) min;
      System.out.println(min_int + " " + max_int);

    } else if(flag == 2) {

      float[] percentage = new float[n-1];
      int periods = 0, size = 0, max_period = 0;

      for(int i = 0; i < n-1; i++)
        percentage[i] = (newcases[i] / cases[i]) * 100;

      if(percentage[0] <= 5) {
        periods++;
        max_period++;
      }

      for(int i = 1; i < n-1; i++) {
        if(i == n-2 && percentage[i] <= 5.00) {
          periods++;
          size++;
        } else if(percentage[i] <= 5) {
          periods++;
        } else if(percentage[i-1] <= 5 && percentage[i] > 5) {
          periods = 0;
          size++;
        }
        if(periods > max_period)
          max_period = periods;
      }

      System.out.println(size + " " + max_period);

    } else if(flag == 3) {

      float[] graphic_cases = new float[n];
      int[] graphic = new int[n];

      for(int i = 0; i < n; i++) {
        graphic_cases[i] = cases[i] / 100;
        graphic[i] = (int) graphic_cases[i];
      }

      int size = graphic[n-1];

      for(int i = size; i >= 1; i--) {
        for(int j = 0; j < n; j++) {
          if(graphic[j] < i)
            System.out.print(".");
            else
            System.out.print("#");
        }
        System.out.println();
      }
    }

  }
}
