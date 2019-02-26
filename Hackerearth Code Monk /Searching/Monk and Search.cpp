#include<bits/stdc++.h>
#include <algorithm> 

using namespace std;

int main()
{
    int n,input;
    cin>>n;
   
   vector<int> a;

       
  for(int i = 0;i<n;i++){
    cin>>input;
    a.push_back(input);}
    
    int q,c,b,m,z;

    cin>>q;
    sort(a.begin(),a.end());
    
    while(q--)
    {
        cin>>c>>b;
        
        if(c == 0)
        {
         
            m = upper_bound(a.begin(), a.end(), b) - a.begin();
            z=1;
            
            if( m > 0 &&  a[m-2] == b)
            {
                m = lower_bound(a.begin(), a.end(), b) - a.begin(); 
                z=0;
            }
            
            
            
            if(m == n && a[0] == b)
            {
                cout<<n<<"\n";
            }
     
            else{
                if(z==0)
                cout<<(n-m)<<"\n";
                
                else if(z==1 && a[m-1] != b)
                cout<<(n-m)<<"\n";
                
                else
                cout<<(n-m)+1<<"\n";
               
            }
            
        }
        else{

            int m = upper_bound(a.begin(), a.end(), b) - a.begin(); 
            
            if(m == n)
            {
                cout<<0<<"\n";
            }
            
            else{
                cout<<(n-m)<<"\n";
            }
        }
    }
    return 0;
}
