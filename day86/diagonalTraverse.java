// here in this program you will learn about traversing the diagonal of any matrix
import java.util.*;
public class diagonalTraverse {
    public static void print(int[][] mat)
    {
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                System.out.print(mat[i][j] + " ");
            }
            System.out.println();
        }
    }
    public static void printArray(int[] arr){
        for(int i = 0;i<arr.length;i++)
        {
            System.out.print(arr[i] + " ");
        }

    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        /*
        1 2 3
        4 5 6
        7 8 9
        output--> 1 2 4 7 5 3 6 8 9
        */
        // lets take a matrix as input
//        int[][] matrix = new int[3][3];
        // this is one way of taking matrix input
//        for(int i = 0;i<3;i++)
//        {
//            for(int j = 0;j<3;j++)
//            {
//                matrix[i][j] = sc.nextInt();
//            }
//        }

        // lets take another way of taking matrix as input
        int[][] matrix = {{1,2,3},{4,5,6},{7,8,9}};
        print(matrix);


        // lets apply the transpose algorithm
        int[][] transposeMat = new int[3][3];
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                transposeMat[i][j] = matrix[j][i];
            }
        }
    System.out.println("The transpose of the matrix is: ");
        print(transposeMat);

        // lets try different variation of traversing the matrix and traverse from top to bottom and bottom to top
        /*
        * 1,2,3,8,6,4,5,7,9
        */

        int[] traverseToptoBottom = new int[9];
            int k =0;
        for(int i = 0;i<3;i++)
        {
            if(i%2==0){
            for(int j = 0;j<3;j++)
            {
                traverseToptoBottom[k++] = matrix[j][i];
            }
            }
            else
            {
                for(int j = 2;j>=0;j--)
                {
                    traverseToptoBottom[k++] = matrix[j][i];
                }
            }
        }
        System.out.println("The traverse of matrix from top to bottom is : ");
        printArray(traverseToptoBottom);


    }
}
