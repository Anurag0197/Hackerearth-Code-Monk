#include <bits/stdc++.h>
#include<algorithm>
#include<stdio.h>

using namespace std;

int main()
{
    int t,n;
    
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        int a[n];
        
        for(int i = 0;i<n;i++)
        cin>>a[i];
        
        map<int, int> m; 
	    for (int i = 0; i < n; i++) 
		m[a[i]]++; 
		
		int max = 0,min = 1000000000;
		
		for (auto i : m){ 
          if(i.second > max)
          max = i.second;}
              
             
        for (auto i : m) {
          if(i.second < min)
          min = i.second;
              }
             
        if((max - min) > 0)
        cout<<max-min<<"\n";
        else
        cout<<-1<<"\n";
    }
}
