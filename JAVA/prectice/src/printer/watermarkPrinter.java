package printer;

public class watermarkPrinter implements Printer2{
  @Override
  public void print(String text){
    System.out.println(text);
  }

  @Override
  public void watermark(String title){
    System.out.println(title);
  }
}
