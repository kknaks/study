import java.util.Scanner;
public class stdin {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 3; i++) {
            Byte bb = sc.nextByte();
        }

        int i = sc.nextInt();
        float f = sc.nextFloat();
        boolean b = sc.nextBoolean();

        System.out.printf("%d,%f,%b\n",i,f,b);
        }
    }
