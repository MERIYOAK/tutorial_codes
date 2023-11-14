public class casting {
    public static void main(String[] args) {
        // implicit casting
        double x = 1.1;
        double y= x+2;
        System.out.println(y);

        short xx= 1;
        int yy = xx + 2;
        System.out.println(yy); 

        // explicit casting
        double xxx = 1.1;
        int yyy = (int)xxx + 2;
        System.out.println(yyy);

        String t = "1";
        int R = Integer.parseInt(t) + 2;
        System.out.println(R);
    }
}
