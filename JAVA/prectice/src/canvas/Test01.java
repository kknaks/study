package canvas;

public class Test01 {
  public static void main(String[] args) {
    BallPen153 t1 = new BallPen153();
    Canvas c1 = new Canvas(t1);
    c1.render("Hello world");
    t1.press(true);
    c1.render("Hello world");

    MultiPen t2 = new MultiPen();
    c1.setPen(t2);
    c1.render("Hello world");
    t2.rotate(Zebra.ON);
    c1.render("Hello world");

  }
}
