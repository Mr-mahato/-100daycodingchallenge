
// in this problem you are gonna print the matrix in the form of diagonal 
/*
 *
 * i/p-->
 *  1     2     3     4
5     6     7     8
9    10    11    12
13    14    15    16
17    18    19    20
o/p
1
5 2
9 6 3
13 10 7 4
17 14 11 8
18 15 12
19 16
20
 */
public class diagonal {
     public static void printMat(int[][] mat , int row , int col)
    {
        
        {
            for(int q = 0;q<row;q++)
            {
                for(int w = 0;w<col;w++)
                {
                    System.out.print(mat[q][w] + " ");
                }
                System.out.println();
            }
        }
    }
    public static void main(String[] args){
        // int[][] arr = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20},{1,1,1,1}};
       int[][] arr = {{1,2,3},{3,2,1}};
        int row = arr.length;
        int col = arr[0].length;
        printMat(arr,row,col);
        printDiagonal(arr,row,col);
        
    }
    public static void printDiagonal(int[][] mat , int r , int c)
    {
        int k =0;
        for( int i = 0;i<r;i++)
        {
            k = i;
            for( int j =0;j<=i;j++)
            {
                if(j<mat[0].length)
                System.out.print(mat[k--][j] + " ");
            }
            System.out.println();
        }
        k =1;
       int m ,n=1;
        for(int j = mat.length-1;j>=k;)
        {
            m = j;
             for(int i = n;i<mat[0].length;i++)
            {
                System.out.print(mat[m--][i] + " ");
            }
            System.out.println();
            k++;n++;
        }
    }
}