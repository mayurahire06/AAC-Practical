import java.util.Scanner;

public class MenuDrivenProgram {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int choice;
        do {
            System.out.println("\nMenu:");
            System.out.println("1. Factorial");
            System.out.println("2. Fibonacci");
            System.out.println("3. Palindrome");
            System.out.println("4. Perfect Number");
            System.out.println("5. Exit");
            System.out.print("Enter your choice: ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter a number to find factorial: ");
                    int num1 = sc.nextInt();
                    System.out.println("Factorial of " + num1 + " is: " + factorial(num1));
                    break;

                case 2:
                    System.out.print("Enter the number of terms in Fibonacci sequence: ");
                    int num2 = sc.nextInt();
                    System.out.print("Fibonacci sequence: ");
                    for (int i = 0; i < num2; i++) 
                        System.out.print(fibonacci(i) + " ");
                    System.out.println();
                    break;

                case 3:
                    System.out.print("Enter a number to check palindrome: ");
                    int num3 = sc.nextInt();
                    if (isPalindrome(num3)) {
                        System.out.println(num3 + " is a palindrome.");
                    } else {
                        System.out.println(num3 + " is not a palindrome.");
                    }
                    break;

                case 4:
                    System.out.print("Enter a number to check if it's a perfect number: ");
                    int num4 = sc.nextInt();
                    if (isPerfectNumber(num4)) {
                        System.out.println(num4 + " is a perfect number.");
                    } else {
                        System.out.println(num4 + " is not a perfect number.");
                    }
                    break;

                case 5:
                    System.out.println("Exit");
                    break;

                default:
                    System.out.println("Invalid choice. Please choose again.");
            }
        } while (choice != 5);

        sc.close();
    }

    public static int factorial(int n) {
        if (n == 0) {
            return 1;
        }
        return n * factorial(n - 1);
    }

    public static int fibonacci(int n) {
        if (n == 0) {
            return 0;
        } else if (n == 1) {
            return 1;
        } else {
            return fibonacci(n - 1) + fibonacci(n - 2);
        }
    }

    public static boolean isPalindrome(int n) {
        int original = n;
        int reverse = 0;
        while (n > 0) {
            int digit = n % 10;
            reverse = reverse * 10 + digit;
            n /= 10;
        }
        return original == reverse;
    }

    public static boolean isPerfectNumber(int n) {
        int sum = 0;
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }
        return sum == n;
    }
}
