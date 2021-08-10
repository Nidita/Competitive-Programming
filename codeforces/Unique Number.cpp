#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n>45)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int z=9;
            string s;
            while(n>z)
            {
                n-=z;
                if(n==z)
                {
                    n+=z;
                   s+=(char)(z-1)+'0';
                    s+=(char)(z)+'0';
                   s+="1";

                   n-=z-1;
                   n-=1;
                   n-=z;


                }
                else{
                s+=(char)(z)+'0';
                }
                z--;
            }
            if(n!=0)
            {
               s+=(char)(n)+'0';
            }
            sort(s.begin(),s.end());
            cout<<s<<endl;
        }
    }
}
