package computer;

public class ThirdComputer implements Computer{
  @Override
  public void compute(){
    System.out.println("3세대 컴퓨터 : ");
  }
  @Override
  public void touch(){
    System.out.println("3세대 컴퓨터 : 터치기능추가 ");
  }

}
