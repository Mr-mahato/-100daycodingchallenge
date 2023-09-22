class GFG
{
    ArrayList<Integer> find(int arr[], int a, int b)
    {
        ArrayList<Integer> list = new ArrayList<>();
        int left = 0, right = a-1;
        list.add(-1);
        list.add(-1);

        while(left <= right) {
            if(arr[left] == b && arr[right] == b) {
                list.add(0,left);
                list.add(1,right);
                break;
            }
            if(arr[left] != b ) left++;

            if(arr[right] != b ) right--;
        }
        return list;
    }
}