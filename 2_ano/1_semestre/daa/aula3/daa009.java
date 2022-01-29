import java.util.*;

class Letras implements Comparable<Letras> {
  public int ocr;
  public int first;
  public char ch;

  Letras(int o, int f, char c) {
    ocr = o;
    first = f;
    ch = c;
  }

  @Override
  public int compareTo(Letras l) {
    if(ocr > l.ocr) return -1;
    if(ocr < l.ocr) return +1;
    if(first > l.first) return +1;
    else return -1;
  }
}

public class daa009 {

  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);
    Letras[] letters = new Letras[26];  //letras possiveis de encontrar
    String dna = stdin.next();  //letras recebidas do input

    for(int i = 0; i < 26; i++)
      letters[i] = new Letras(0, 0, (char)(65+i));

    int size = dna.length();
    for(int i = 0; i < size; i++) {
      letters[dna.charAt(i) - 'A'].ocr += 1;
      if(letters[dna.charAt(i) - 'A'].ocr == 1) letters[dna.charAt(i) - 'A'].first = i;
    }

    Arrays.sort(letters);

    for(int i = 0; i < 26; i++)
      if(letters[i].ocr > 0)
        System.out.println(letters[i].ch + " " + letters[i].ocr);

  }
}
