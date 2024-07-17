package printer;

public class Test01 {
  public static void main(String[] args) {
    display(new watermarkPrinter(),"Hello","nak");
    display(new Printer2Adapter(new paperPrinter()),"Hello2","nak2");
  }
  static void display(Printer2 printer2, String text,String title){
    printer2.print(text);
    printer2.watermark(title);
  }
}
