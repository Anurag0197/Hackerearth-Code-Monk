#include<bits/stdc++.h>
#include <algorithm> 

using namespace std;

int main()
{
    long int n;
     unsigned long long int g,h;
    cin>>n;
    // n is size of vector
    //g and h are coordinates 
    vector<  unsigned long long int> a;
    
    for (int i=0; i<n; i++) {
        cin>>g>>h;                  //filling vector witg (x^2 + y^2)
        a.push_back(ceil(sqrt(g*g + h*h)));} 
  
    sort(a.begin(),a.end());
    
    long long int q,d;
    cin>>q;
     unsigned long long int r;
    // r is radius of circle
    //q is no test cases
    
    while(q--)
    {
        cin>>r;
        //r=r*r;
        
        d = lower_bound(a.begin(),a.end(),r) - a.begin();
        
        if(a[d] == r && d == n-1)
        cout<<d+1<<"\n";
        
        else if(a[d] == r && a[d+1] != r)
        cout<<d+1<<"\n";
        
        else if(d != n-1 && a[d] == r && a[d+1] == r){
        d = upper_bound(a.begin(),a.end(),r) - a.begin();

        cout<<d<<"\n";}
        
        else
        cout<<d<<"\n";
        
    }       
    return 0;
}
