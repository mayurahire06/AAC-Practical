import java.util.Scanner;

class MagicSquare {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter odd Number: ");
        n = sc.nextInt();

        if (n % 2 == 1)
            magicSquare(n);
        else
            System.out.println("Only Odd Numbers!!!");
        sc.close();
    }

    public static void magicSquare(int n) {
        int arr[][] = new int[n][n];

        int i = 0;
        int j = n / 2;

        for (int num = 1; num <= n * n; num++) {
            arr[i][j] = num;

            int nextRow = (i - 1 + n) % n;
            int nextCol = (j - 1 + n) % n;

            if (arr[nextRow][nextCol] != 0) {
                i = (i + 1) % n;
            } 
            else {
                i = nextRow;
                j = nextCol;
            }
        }
      
        for (i=0; i<n; i++) {
            for (j=0; j<n; j++) { 
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }

    }
    
}