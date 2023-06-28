
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,x,k,p;
	    cin >> n>> x>>k>>p;
	   int res =0;
	   if(n==k) res +=20;
	   while(x!=0 &&k>0)
	   {
	       res +=10;
	       x--;
	       k--;
	   }
	   res += k*5;
	   res = res+p;
	   cout << res << endl;
	}
	return 0;
}
