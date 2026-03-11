import java.util.*;

public class TwoDArrays {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // Take number of rows and columns
        int rows = sc.nextInt();
        int cols = sc.nextInt();

        // Create 2D array
        int[][] numbers = new int[rows][cols];

        // Input elements into the array
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                numbers[i][j] j= sc.nextInt();
            }
        }

        // Print the array
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print(numbers[i][j] + " ");
            }
            System.out.println(); // Move to next line
        }

        sc.close(); // Close scanner
    }
}