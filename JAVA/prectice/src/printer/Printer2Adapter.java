package printer;

public class Printer2Adapter implements Printer2{
  Printer originalPrinter;

  public Printer2Adapter(Printer original){
    this.originalPrinter = original;
  }
  @Override
  public void print(String text){
    originalPrinter.print(text);
  }

  @Override
  public void watermark(String title){
    System.out.println(title);
  }

}
