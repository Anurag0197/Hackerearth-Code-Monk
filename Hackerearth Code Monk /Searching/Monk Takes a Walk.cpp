#include<iostream>

using namespace std;

int main()
{
    int t,count =0;
    string s;
    cin>>t;
    
    while(t--)
    {
        count = 0;
        cin>>s;
        
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u'|| s[i] == 'A'|| s[i] == 'E'|| s[i] == 'I'|| s[i] == 'O'|| s[i] == 'U')
            {
                count++;
            }
            
        }
        cout<<count<<"\n";
    }
    return 0;
}
