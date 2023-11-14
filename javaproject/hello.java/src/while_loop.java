import java.util.Scanner;

public class while_loop {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String input = "";

        while (!input.equals("quit")) {
            System.out.println("input: ");
            input = scanner.next().toLowerCase();
            if (input.equals("pass"))
               continue;
            if (input.equals("quit"))
               break;
            System.out.println(input);
            
        }
        scanner.close();
    }
}
