package canvas;

public class MultiPen extends Zebra implements Pen{
  @Override
  public void write(String text){
    if (this.use) {
      System.out.println("지브라 펜을 사용중");
      System.out.println(text);
    }
  }
}
