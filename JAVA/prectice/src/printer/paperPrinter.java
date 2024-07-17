package printer;

public class paperPrinter implements Printer{
  @Override
  public void print(String text){
    System.out.println(text);
  }
}
