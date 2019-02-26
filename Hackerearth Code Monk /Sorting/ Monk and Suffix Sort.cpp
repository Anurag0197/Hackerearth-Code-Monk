#include <bits/stdc++.h> 
#include<algorithm>
using namespace std; 

int main()
{
    string s;
    int k,l;
    
    cin>>s>>k;
    l = s.size();
    
    string s1[l];
    s1[0]=s;
    
    for(int i = 1; i<l; i++)
    {
        s1[i] = s.substr(i,l-1);
    }
    
    for(int i = 0; i < l-1; i++)
    {
        for(int j = 0; j<l-i-1; j++)
        {
            if( !lexicographical_compare(s1[j].begin(), s1[j].end(),s1[j+1].begin() ,s1[j+1].end())) 
            {
                string g = s1[j];
                s1[j]=s1[j+1];
                s1[j+1]=g;
            }
        }
    }
    cout<<s1[k-1];
}
