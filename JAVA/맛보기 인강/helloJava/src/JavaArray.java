import java.util.ArrayList;
public class JavaArray {
    public static void main(String[] args) {
        ArrayList list = new ArrayList();
        list.add("Hello");
        list.add(3.14f);
        list.add(55);
        list.add(true);

        for (Object l : list){
            System.out.println(l);
        }

        ArrayList<String> list_str = new ArrayList<>();
        list_str.add("Hello");
        list_str.add("World");
        list_str.add("Java");

        for(String s : list_str){
            System.out.println(s);
        }
    }
}
