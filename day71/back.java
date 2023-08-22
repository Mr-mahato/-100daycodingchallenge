// its a simple program that will show how backtracking is working with simple program
 public class back{
    public static void printArray(int[] ar){
        for(int i =0;i<ar.length;i++)
        {
            System.out.print(ar[i] + " ");
        }
    }
    public static void track(int[] a , int i)
    {
        if(a.length==i) return;
        else{
            a[i] = i+1;
            track(a, i+1);
            a[i] -=2;
        }
    }
    public static void main(String[] args){
        // System.out.println("hello world");
        int[] arr = new int[5];
        track(arr,0);
        printArray(arr);

    }
}