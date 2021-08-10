#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int j=1;

    while(t--)
    {

        int pos = 0;
   int index;
        string s,s1="http://";
        cin>>s;
         cout<<"Case "<<j++<<": ";
        if((index = s.find(s1, pos)) != string::npos) {
            cout<<"https://";
            for(int i=7;i<s.size();i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
    }
}
