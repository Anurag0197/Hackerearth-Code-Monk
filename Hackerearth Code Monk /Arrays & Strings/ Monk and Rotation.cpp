#include<iostream>

using namespace std;

int main()
{
    int t,i,j,k,h=1,g;
    long int r,n;
    int *a,*b;
    cin>>t;
    
    while(t--){
    
    cin>>n>>r;
    
   a = new int[n];
   b = new int[n];
    
    
    
    for(int i = 0;i<n;i++)
    cin>>a[i];
    
    j = 1;
    h=1;
    while(r>=n){
        r = r-n;
    }
    
    if(r == 0){
    for(int i = 0;i<n;i++)
    cout<<a[i]<<" ";}
    
    else{
    g = r;
    
    while(g>0){
      
      b[0+r-j] = a[n-h];
      j++;
      g--;
      h++;
  } 
  
    for(int i = 0 ; i<n-r && r >0 ; i++)
    {
      b[i+r] = a[i];
    }
    
    for(int i = 0;i<n;i++)
    cout<<b[i]<<" ";
    }
    delete a;
    delete b;
    
    cout<<"\n";
}
    return 0;
}
