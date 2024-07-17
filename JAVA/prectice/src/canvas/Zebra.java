package canvas;

public class Zebra {
  public static final int ON = 1;
  public static final int OFF = 0;
  String model = "Zebra";
  boolean use;

  public void rotate(int direction){
    if (direction == ON){
      this.use = true;
    } else if (direction == OFF){
      this.use = false;
    }
  }
}
