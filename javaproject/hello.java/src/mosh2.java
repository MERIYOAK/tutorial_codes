import java.util.Scanner;

public class mosh2 {
    public static void main(String[] args) {
    
        Scanner scanner = new Scanner(System.in);
        System.out.print("Age: ");
        byte age = scanner.nextByte();
        System.out.println("you are "+ age);


        Scanner scanner1 = new Scanner(System.in);
        System.out.print("Name: ");
        String name = scanner1.nextLine().trim();
        System.out.println("you are "+ name);


        scanner.close();
        scanner1.close();

    }
}
