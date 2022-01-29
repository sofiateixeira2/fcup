/*
  Nome: Ana Sofia de Castro Teixeira
  Número: 201906031
  Explicação:
    Para flag 1, criei um array de strings para guardar os valores da linha. De seguida introduzi os
  nomes dos filmes numa BSTMap e como esta ignora os valores repetidos, o seu tamanho representa
  a diversidade de filmes.
      Complexidade: O(n)
    Para flag 2 e flag 3, criei uma BSTMap t1 para guardar o número de ocorrencias de cada filme, e uma
  BSTMap t2 para guardar a soma das avaliaçoes dos respetivos filmes.
    Para flag 2 defini um int max = 1 (pois para estar na BSTMap tem que ocorrer pelo menos uma vez) para
  comparar com o número das outras ocorrencias e assim devolver a maior, e uma string movie_name para
  guardar o nome do filme a que corresponde esse valor máximo.
      Complexidade: O(n)
    Para flag 3 percorri ambas as BSTMap (t1 e t2) e fiz a média de avaliaçao de cada filme (já que t1
  corresponde às ocorrencias dos filmes e t2 à soma das suas avaliaçoes). Se a média for positiva,
  dou print desse filme.
      Complexidade: O(n)

*/

import java.util.*;
import java.lang.*;

public class ED234 {

  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);
    BSTMap<String,Integer> t1 = new BSTMap<>();
    BSTMap<String,Integer> t2 = new BSTMap<>();

    int flag = stdin.nextInt();
    int n = stdin.nextInt();
    stdin.nextLine();

    String line;
    String[] movie = new String[n];
    for(int i = 0; i < n; i++) {
      line = stdin.nextLine();
      movie = line.split(" ");
      if(t1.get(movie[0]) != null) {
        t1.put(movie[0], t1.get(movie[0]) + 1);
      } else if(t1.get(movie[0]) == null) {
        t1.put(movie[0], 1);
      }
      int ava = Integer.parseInt(movie[1]);
      if(t2.get(movie[0]) == null) {
        t2.put(movie[0], ava);
      } else if(t2.get(movie[0]) != null) {
        t2.put(movie[0], t2.get(movie[0]) + ava);
      }
    }

    if(flag == 1) {
      System.out.println(t1.size());
    }

    if(flag == 2) {
      int max = 1;
      String movie_name = movie[0];
      for(String k : t1.keys()) {
        if(max < t1.get(k)) {
          max = t1.get(k);
          movie_name = k;
        }
      }
      System.out.println(movie_name + " " + max);
    }

    if(flag == 3) {
      for(String k : t2.keys()) {
        if(t2.get(k) / t1.get(k) >= 5) System.out.println(k);
      }
    }

  }
}
