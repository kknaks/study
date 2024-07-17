public class Loop {
    public static void main(String[] args) {
//        for (int i = 0; i < 5; i++){
//            System.out.println("Hello World");
//        int sum = 0;
//        for (int i = 0; i < 10; i++) {
//            System.out.println(sum + "+" + i + "=" + (sum + i));
//            sum += i;
//        }
        String s = "Hello World";
        for (int i = 0; i < s.length(); i++) {
            System.out.println(s.charAt(i));
        }
    }
}
