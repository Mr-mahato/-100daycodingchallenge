class Solution{
    static int minJumps(int[] arr){
        // your code here
        int jumps = 0;
        int maxReachTotal = 0;
        int maxReachCurrent = 0;
        for(int i=0;i<arr.length;i++){
            maxReachCurrent = Math.max(maxReachCurrent,arr[i]+i);
            
            // We reached the maximum from last point
            if(i == maxReachTotal){
                maxReachTotal = maxReachCurrent;
                jumps++;
                if(maxReachTotal>=arr.length-1){
                    return jumps;
                }
            }
        }
        return -1;
    }
}