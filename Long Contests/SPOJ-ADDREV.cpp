#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,cnt=0,e=0,f=0,g,p,l=1;
        vector<int >v;
        cin>>a>>b;
        c=a;
        d=b;

        while(a!=0)
        {

            a=a/10;
            cnt++;
        }
        cnt--;

         p=1;
         while(cnt!=0)
         {
             p*=10;
             cnt--;
         }

        while(c!=0)
        {
            e+=((c%10)*p);
            p/=10;
            c/=10;

        }

        cnt=0;
         while(b!=0)
        {

            b=b/10;
            cnt++;
        }
        cnt--;

     p=1;
         while(cnt!=0)
         {
             p*=10;
             cnt--;
         }

        while(d!=0)
        {
            f+=((d%10)*p);
            p/=10;
            d/=10;

        }

    g=e+f;
     while(g!=0)
     {
         v.push_back(g%10);
         g/=10;
     }
     for(int i=0;i<v.size();i++)
     {
         if(l==1)
         {
             if(v[i]!=0)
             {
                 l=0;

             }
         }
         if(l==0)
         {
             cout<<v[i];
         }
     }
     cout<<endl;

    }
}
