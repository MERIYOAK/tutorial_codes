import java.util.Scanner;

public class do_while_loop {
    public static void main(String[] args) {
       Scanner scanner = new Scanner(System.in);
       String input = "";
       do {
           System.out.println("input: ");
           input = scanner.next().toLowerCase();
           System.out.println(input);
       } 
       while (!input.equals("quit"));


       scanner.close();
     }
}
