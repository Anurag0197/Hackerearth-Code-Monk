#include<bits/stdc++.h>
#include <cmath>  

using namespace std;

int main()
{
    long long int f,g,c,s=0;
    int n,q;
    cin>>n>>q;
    
    vector <long long int> v;
    vector <pair<long long int,long long int>> b;
    
    vector <long long int> a;
    
    for(int i = 0;i<n;i++){
        cin>>f>>g;
        v.push_back((g-f)+1);
        b.push_back( make_pair(f,g) ); 
    }
    
    for(int i = 0;i<n;i++){
        s =s+v[i];
    }
    
    for(int i = n-1;i>=0;i--)
    {
        a.push_back(s);
        s=s-v[i];
    }
    
    reverse(a.begin(), a.end()); 
    long long int j;

    for(int i = 0;i<q;i++)
    {
        cin>>c;
        j = lower_bound(a.begin(),a.end(),c)-a.begin();
 
        if(j != 0)
        cout<<(b[j].first+abs((a[j-1]-c))-1)<<"\n";
        
        else
        cout<<(b[j].first+c)-1<<"\n";
    }
    return 0;    
}
