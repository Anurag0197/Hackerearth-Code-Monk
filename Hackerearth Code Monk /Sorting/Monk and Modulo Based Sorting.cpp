#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n,k,j;
    
    cin>>n>>k;
    
    int a[n],b[n];
    
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i =0;i<n;i++)
    {
        b[i] = a[i]%k;
        
        j =i-1;
        
        int m = i;
            while (b[i] < b[j] && i>0)
            {
                int t = a[i];
                a[i] = a[i-1];
                a[i-1] = t;
                
                if(b[i] < b[i-1]){
                t = b[i];
                b[i] = b[i-1];
                b[i-1] = t;}
                
                i--;
                j--;
            }
         i = m;   
    }
    
    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
}
