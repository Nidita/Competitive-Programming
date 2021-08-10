#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,sum=0;
        cin>>a>>b>>c;
        vector<int>v;
        v.push_back(a);
          v.push_back(b);
            v.push_back(c);
            sort(v.begin(),v.end());

        sum=(a+b+c);
        if(sum%9==0 && sum/9<=v[0])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
