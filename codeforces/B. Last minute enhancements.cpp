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
        int cnt=0;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            m[x]+=1;
            if(m[x]==1)
            {
                cnt++;
            }
            else if(m[x]==2)
            {
                m[x+1]+=1;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
