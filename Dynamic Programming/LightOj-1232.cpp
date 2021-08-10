#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t,l=1;
    cin>>t;
    while(t--){
            long long  n,a;
    cin>>n>>a;
    long long  changeTypes[n],ways[a+1];
    for(int j=0;j<n;j++)
    {
        cin>>changeTypes[j];
    }
memset(ways,0,sizeof(ways));

    ways[0] = 1;
    for (long long c = 0; c < n; ++c)
    {
        //cout<<changeTypes[c]<<" ";

        for (long long  i = changeTypes[c]; i < a+1; ++i)
        {


          ways[i]=( ways[i] +(ways[i - changeTypes[c]]))%100000007;

 //cout<<ways[i]<<" ";
        }
    }
    cout<<"Case "<<l++<<": "<<ways[a]<<endl;
    }


}
