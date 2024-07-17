package canvas;

public class BallPen153 extends Monami implements Pen{
  @Override
  public void write(String content) {
    if (this.use) {
      System.out.println("모나미 펜을 사용중");
      System.out.println(content);
    }
  }
}
