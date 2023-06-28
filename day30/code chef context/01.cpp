#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,m,k;
	    cin >> n>> m >>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    
	    int temp = arr[n-1] ;
	    temp += k-1;
	    if(temp > m) cout << "NO" << endl;
	    else cout << "YES" << endl;
	    
	    
	    
	    
	}
	return 0;
}
