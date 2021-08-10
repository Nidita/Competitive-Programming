#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=1;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int o=s.size(),n=o-1;
        int l=0,r=o-1,c=0,g=0;
        char p,target;
        while(l<=r){
        if(c%2==0)
        {
            p='I';
        }
        else
        {
            p='O';
        }
        c++;
      //  cout<<s[l]<<' '<<s[r]<<' '<<p<<' '<<'*';
        if(s[l]==p && s[r]==p)
        {
            if(l!=o-1)
            {
                if(s[l]==s[l+1])
                {
                    l++;
                    n--;

                }
                else
                {
                    r--;
                    n--;
                }
            }
            else
            {
                r--;
                n--;

            }

        }
        else if(s[l]==p)
        {
            l++;
            n--;
        }
        else if(s[r]==p)
        {
            r--;
            n--;
        }
        else
        {
            if(p=='O')
            {
                target='I';
            }
            else
            {
                target='O';
            }
            g=1;
            break;
        }
        }
        if(g==0)
        {
            if(o%2==0)
            {
                target='O';
            }
            else
            {
                target='I';
            }
        }
        cout<<"Case #"<<j++<<": ";
        cout<<target<<' ';
        cout<<n+2<<endl;

    }
}
