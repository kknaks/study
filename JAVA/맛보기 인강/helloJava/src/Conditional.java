public class Conditional {
    public static void main(String[] args) {
        double discountRate =0.0;
        int coupons = 0;
        String membership = "VIP";

        if (membership.equals("VVIP")) {
            discountRate = 0.2;
            coupons = 5;
        } else if (membership.equals("VIP")) {
            discountRate = 0.1;
            coupons = 4;
        } else if (membership.equals("Gold")) {
            discountRate = 0.0;
            coupons = 3;
        } else {
            discountRate = 0.0;
            coupons = 2;
        }

        System.out.println("Discount Rate : " + discountRate + ", Coupons : " + coupons);

//        String grade;
//        int score = 90;
//
//        if (score >= 90) {
//            grade = "A";
//        } else if (score >= 80) {
//            grade = "B";
//        } else if (score >= 70) {
//            grade = "C";
//        } else {
//            grade = "F";
//        }
//        System.out.println("Grade : "+grade);
//        String membership = "VVIP";
//        double discount = 0.0;
//        double price = 10000.0;
//
//        if ("VVIP".equals(membership)) {
//            discount = 0.2;
//        } else {
//            discount = 0.1;
//        }
//
//        price *= (1-discount);
//        System.out.println(price);
//        int errorCode = 500;
//
//        if (errorCode >= 500) {
//            System.out.println("sever error!");
//        }else {
//            System.out.println("client error!");
//        }

//        int age = 18;
//        int price = 10000;
//        if (age < 19) {
//            price -= 2000;
//        }
//        System.out.println(price);
//
//        int x = 10;
//        String ret = "odd num";
//
//        if (x%2 == 0) {
//            ret = "even num";
//        }
//        System.out.println(ret);
//
//        String password = "1234";
//        String loginState = "Failed";
//
//        if (password.equals("1234")) {
//            loginState = "Successed";
//        }
//        System.out.println(loginState);
//
//        boolean isSystemReady = true;
//
//        if(isSystemReady) {
//            System.out.println("System is ready for use");
//        }
    }
}
