#include<iostream>

using namespace std;

int main()
{
    int t,n,count = 0;
    
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        count = 0;
        
        int a[n][n];
        
        for(int i = 0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        
        for(int i = 0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int p = 0;p<n;p++)
                {
                    for(int q = 0;q<n;q++)
                    {
                        if((a[i][j] > a[p][q]) && (i<=p && j <= q))
                        {
                            count++;
                        }
                    }
                }
            }
        }
        
        cout<<count<<"\n";
    }
    return 0;
}
