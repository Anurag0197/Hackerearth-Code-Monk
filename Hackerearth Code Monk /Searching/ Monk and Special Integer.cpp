#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    long long x, n,s=0,q,k;
    cin>>n>>x;
    k = n;
    vector<int> a;
    
    for(int i =0;i<n;i++)
    {
        cin>>q;
        a.push_back(q);
    }
    
    for(int i =0;i<n;i++)
    s += a[i]; 
    
    if(s < x){
    cout<<k;
    return 0;
    }

    for(int i =0;i<n;i++)
    {
        
        if(s = "n"){
            
            s -= a[];
        }
        s -= a[k];
        k--;
        i--;
        
    }
}
