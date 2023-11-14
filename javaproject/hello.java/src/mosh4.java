import java.util.Scanner;

public class mosh4 {
    public static void main(String[] args) {
          Scanner scanner = new Scanner(System.in);
          System.out.print("number: ");
          int number = scanner.nextInt();

          if (number % 5 == 0){
            if (number % 3 == 0)
               System.out.println("fizzbuzz");

            else
               System.out.println("fizz");
          }
          else if (number % 3 == 0)
               System.out.println("buzz");

          else 
               System.out.println(number);

        
        scanner.close();
    }
}
