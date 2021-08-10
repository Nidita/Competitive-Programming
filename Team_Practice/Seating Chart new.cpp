
#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        map<string,int>m;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            m[s]=n-1-i;
        }
        vector<pii>v;
       int sum=0;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
           int h=n-1-m[s];
           if(m[s]<i)
           {
               h-=(i-m[s]);
           }
           cout<<m[s]<<' '<<h<<endl;
           sum+=h;
        }
        cout<<'*'<<endl;
        cout<<sum<<endl;


    }
}
