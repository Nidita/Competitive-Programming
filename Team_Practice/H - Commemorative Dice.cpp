#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[6],b[6];
    for(int i=0;i<6;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<6;i++)
    {
        cin>>b[i];
    }
    int cnt=0;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(b[j]<a[i])
            {
                cnt++;
            }
        }
    }
    int g=__gcd(36,cnt);
    cout<<cnt/g<<'/'<<36/g<<endl;
}
