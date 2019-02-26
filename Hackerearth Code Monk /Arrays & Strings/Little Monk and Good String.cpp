#include<iostream>

using namespace std;

int main()
{
    string a;
    cin>>a;
    int count = 0,max,l = 0;
    
    for(int i = 0;i < a.size();i++)
    {
        if(a[i] == 'a'||a[i] == 'e'||a[i] == 'i'||a[i] == 'o'||a[i] == 'u')
        {
            count++;
            max = count;
        }
        
        else{
            
            count = 0;
            
            }
            if(max > l)
            l = max;
        
    }
    cout<<l;
    return 0;
}
