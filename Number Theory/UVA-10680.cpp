
#include<bits/stdc++.h>
using namespace std;
#define SIZE 1000000
long long i,j,status[1000010]={0};
vector<long long >vec;
void check()
{
    long long sq=sqrt(SIZE);
    for(i=3;i*i<=SIZE;i+=2)
        {
            for(j=i*i;j<=SIZE;j+=2*i)
             status[j]=1;
        }
    status[1] = 1,status[0]=1;
    for(i=1;i<=SIZE;i++)
        {
            if(i%2==0&&i!=2)
                continue;
            if(status[i]==0)
                vec.push_back(i);
        }
        swap(vec[1], vec[2]);
}
int main()
{
    check();
    long long n;
    while(cin>>n)
    {
        if(n==0)
            break;
        long long cnt=0,cnt1=0,ans=1,i1;
        for(i=2;i<=n;i*=2)
        {
            cnt++;
        }
        for(i=5;i<=n;i*=5)
        {
            cnt1++;
        }
        for(i=1;i<=cnt-cnt1;i++)
        {
            ans=(ans*2)%10;
        }
        for(i=2;i<vec.size();i++)
        {
            if(vec[i]>n)
                break;
            for(i1=vec[i];i1<=n;i1*=vec[i])
            {
                ans = (ans * vec[i]) % 10;
            }
        }
        cout<<ans<<endl;
    }
}
