import java.text.NumberFormat;
import java.util.Scanner;

public class mortgage {
    public static void main(String[] args) {
        final byte month_in_year = 12;
        final byte percent  = 100;
        int principal = 0;
        float monthly_interest = 0;
        int number_of_payments = 0;
             
        Scanner scanner = new Scanner(System.in);
             
        while(true) {
            System.out.print("principal: ");
            principal = scanner.nextInt();
            if (principal >= 1000 && principal <= 1_000_000){
               break;
            }System.out.println("enter a number between 1000 and 1 000 000");
             
        }
        while (true) {
            System.out.print("anual interest rate: ");
            float annual_interest = scanner.nextFloat();
            if (annual_interest >= 1 && annual_interest <= 30){
               monthly_interest = annual_interest / percent/ month_in_year;
               break;
            }
            System.out.println("enter a valid interest rate between 1 and 30");
        }
        
        while (true) {
             System.out.print("period in (years): ");
            byte years = scanner.nextByte();
            if (years >= 1 && years <= 30) {
               number_of_payments = years* month_in_year;
               break;
            }
            System.out.println("enter a value between 1 and 30.");
        }
        double mortgage = principal
                * (monthly_interest * Math.pow(1 + monthly_interest, number_of_payments ) - 1) / (Math.pow(1 + monthly_interest, number_of_payments) - 1);

        String mortgageformatted = NumberFormat.getCurrencyInstance().format(mortgage);
        System.out.println("mortgage: "+ mortgageformatted);


        scanner.close();
    }
}           
    

