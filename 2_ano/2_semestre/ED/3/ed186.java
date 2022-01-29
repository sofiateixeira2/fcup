class Rectangle {
  int c;
  int h;
  Point pc = new Point();
  Point ph = new Point();

  Rectangle(Point p1, Point p2) {
    c = p2.x - p1.x;
    h = p2.y - p1.y;
    pc.x = p1.x;
    pc.y = p2.x;
    //System.out.println(pc);
    ph.x = p1.y;
    ph.y = p2.y;
    //System.out.println(ph);*/
  }

  Rectangle(int x1, int y1, int x2, int y2) {
    c = x2 - x1;
    h = y2 - y1;
    pc.x = x1;
    pc.y = x2;
    ph.x = y1;
    ph.y = y2;
  }

  public int area() {
    return c*h;
  }

  public int perimeter() {
    return 2*c + 2*h;
  }

  public boolean pointInside(Point p) {
    if(p.x >= pc.x && p.x <= pc.y)
      if(p.y >= ph.x && p.y <= ph.y)
        return true;
    return false;
  }

  public boolean rectangleInside(Rectangle r) {
    if(r.c <= c && r.h <= h)
      if(r.pc.x >= pc.x && r.pc.y <= pc.y)
        if(r.ph.x >= ph.x && r.ph.y <= ph.y)
          return true;
    return false;
  }
}



class ed186 {
  public static void main(String[] args) {
    Point a = new Point(1,1);
    Point b = new Point(2,2);
    Point c = new Point(3,4);
    Point d = new Point(8,2);

    Rectangle amarelo  = new Rectangle(a, c);
    Rectangle laranja  = new Rectangle(2, 3, 9, 6);
    Rectangle verde    = new Rectangle(3, 4, 4, 5);
    Rectangle azul     = new Rectangle(5, 1, 6, 5);
    Rectangle vermelho = new Rectangle(7, 3, 9, 5);

    System.out.println("Perimetro do retangulo amarelo = " + amarelo.perimeter()); // 10
    System.out.println("Perimetro do retangulo laranja = " + laranja.perimeter()); // 20

    System.out.println("Area do retangulo amarelo = " + amarelo.area()); // 6
    System.out.println("Area do retangulo laranja = " + laranja.area()); // 21

    System.out.println("Ponto B dentro rectangulo amarelo? " + amarelo.pointInside(b)); // true
    System.out.println("Ponto D dentro rectangulo amarelo? " + amarelo.pointInside(d)); // false

    System.out.println("Retangulo verde dentro do laranja? " + laranja.rectangleInside(verde));       // true
    System.out.println("Retangulo azul dentro do laranja? " + laranja.rectangleInside(azul));         // false
    System.out.println("Retangulo vermelho dentro do laranja? " + laranja.rectangleInside(vermelho)); // true
  }
}
