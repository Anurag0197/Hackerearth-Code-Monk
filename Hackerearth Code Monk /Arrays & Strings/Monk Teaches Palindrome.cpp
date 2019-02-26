#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int l,t,b,c=0,k,v,j=0;
    
    cin>>t;
    string str;
    
    
    for(int i = 0;i < t;i++)
    {
        j=0;
        c=0;
        cin>>str;
         l = str.size();
        
        if (l %2 ==0)
        v = 1;
        else
        v = 0;
        
        k = l-1;
     
        while(j <= k)
        {
            if(str[j] == str[k])
            {
                k -= 1;
                j += 1;
                if(( str[k] == str[j]) && ((k == j+1) || (k == j)))
                {
                 b =  1;
                 break;
                }
            }
            
            else{
            c = 1;
            break;
                
            }
    
        }
        if (c == 1)
        cout<<"NO\n";
        else if(v == 1)
        cout<<"YES"<<" "<<"EVEN\n";
        else
        cout<<"YES"<<" "<<"ODD\n";
        }
        return 0;
}
