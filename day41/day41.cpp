//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
    //  cout << s << endl;   
    // return 0;
    int reqlen = 7;
    int strnlen = s.length();
    if(strnlen<7) return 0;
    
    char str[] = "balon";
    int temp[5] = {0};
    // cout << str << endl;
    int c=0;
    for(int i=0;i<5;i++)
    {
        c=0;
        for(int j=0;j<strnlen;j++)
        {
            if(str[i]==s[j])
            {
                c++;
            }
        }
        temp[i] = c;
    }
    int min1 = 1000000,min2 =100000;
    for(int i=0;i<5;i++)
    {
        // cout << temp[i] << " " ;
        if(i==2 || i==3)
        {
            continue;
        }
        if(temp[i]<min1)
        {
            min1 = temp[i];
        }
    }
    if(temp[2]<temp[3]) min2 = temp[2];
    else min2 = temp[3];
    
    min1 = min1;
    min2 = min2/2;
    if(min1<=min2) return min1;
    else return min2;
    
    
    }
};