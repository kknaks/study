public class Casting {
    public static void main(String[] args) {
        int x ;
        char c = 97;

        x = c;
        System.out.println(x);
        System.out.println(c);

        int y = 100;
        long l;
        double d;

        l = y;
        System.out.println(l);

        d = y;
        System.out.println(d);

        double pi = 3.14159265358979;
        int n ;

        n = (int)pi;
        System.out.println(n);

        int x1 = 10;
        int y1 = 20;

        System.out.println(x1 == y1);
        System.out.println(x1 > y1);
        System.out.println(x1 < y1);
        System.out.println(x1 != y1);


        String s = "CodePresso";
        String r = new String("CodePresso");
        System.out.println(s);
        System.out.println(r);
        System.out.println(s == r);
        System.out.println(s.equals(r));
    }
}
