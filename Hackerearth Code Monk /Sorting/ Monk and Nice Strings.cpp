#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,count = 0;
    cin>>n;
    string s[n+1];
    int a[n+1] = {0};

    for(int i = 1; i<= n ;i++)
    cin>>s[i];

    for(int i = n; i >= 1; i--)
    {count = 0;

        for(int j = i-1; j>=1; j--)
        {

            if( s[i] > s[j])
            {
              count += 1;
            }
        }
        a[i] = count;
    }

    for(int i = 1; i<= n ;i++)
    cout<<a[i]<<"\n";
}

