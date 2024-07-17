package computer;

public class Test01 {
  public static void main(String[] args) {
    Computer com = new FirstComputer();
    Computer com2 = new SecondComputer();

    print(com);
    print(com2);
    print(new ThirdComputer());
  }

  static void print(Computer computer){
    computer.compute();
    computer.touch();
  }
}
