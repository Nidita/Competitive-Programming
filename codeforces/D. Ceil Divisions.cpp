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
    int temp=n;
    int sum=n-2;
    map<int,int>m;
    while(temp!=2)
    {
        m[temp]++;
        temp=sqrt(temp)+1;
        sum++;
    }
    cout<<sum<<endl;
    for(int i=3;i<=n;i++)
    {
        if(m[i]==0)
        {
            cout<<i<<' '<<n<<endl;
        }
    }
    temp=n;
    while(temp!=2)
    {
        cout<<temp<<' '<<(int)sqrt(temp)+1<<endl;
          cout<<temp<<' '<<sqrt(temp)+1<<endl;
          temp=sqrt(temp)+1;
    }
    }
}
