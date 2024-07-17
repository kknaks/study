import java.util.Scanner;

public class Case {
    public static void main(String[] args) {
        Scanner keyScan = new Scanner(System.in);

        int num = keyScan.nextInt();

        switch (num){
            case 1:
                System.out.println("1번입니다.");
            case 2 :
                System.out.println("2번입니다.");
                break;
            default :
                System.out.println("둘중하나를 골라라라");
        }
        keyScan.close();
    }
}
