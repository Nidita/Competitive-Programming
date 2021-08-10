#include<bits/stdc++.h>
using namespace std;


const int N=100000005;

vector<int>prime;
bool flag[N+2];

void seive()
{
    for(int i=3; i*i<=N; i+=2)
    {
        if(!flag[i])
        {
            for(int j=i*i; j<N; j+=i)
                flag[j]=1;
        }
    }
    prime.push_back(2);
    for(int i=3; i<=N; i+=2)
        if(!flag[i])
            prime.push_back(i);
}
main()
{
    seive();
    int tc;
    cin>>tc;
    while(tc--)
    {

        long long n;
        cin>>n;
        long long z=n;
        long long sum=1;
        for(int i=0; i<prime.size()&&prime[i]*prime[i]<=n; i++)
        {
            long long sum2=0;
            if(n%prime[i]==0)
            {
                sum2=prime[i];
                while(n%prime[i]==0)
                {
                    n/=prime[i];
                    sum2*=prime[i];
                }
                sum*=(sum2-1)/(prime[i]-1);
            }
        }

        if(n>1)
        {

            sum*=n+1;
        }
        cout<< sum-z<<endl;
    }

}
