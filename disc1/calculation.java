import java.util.Scanner;

/**
 * calculation
 *
 * Calculation wrapper class
 *
 * Ian Nelson
 * CMIS315
 * Discussion 1 - Java
 * Jeff H. Sanford
 */
public class calculation {

    /**
     * Main accessor method
     * 
     * @param args Array of string arguments
     */
    public static void main(String[] args) {
        // Create the scanner for input.
        Scanner in = new Scanner(System.in);

        // Ask for the first whole number and retrieve first integer.
        System.out.println("Enter the first whole number: ");
        int num1 = in.nextInt();

        // Ask for the second whole number and retrieve second integer.
        System.out.println("Enter the second whole number: ");
        int num2 = in.nextInt();
        
        // Print the product of the two integers.
        System.out.println("The product of these numbers is " + (num1 * num2));
    }
}
