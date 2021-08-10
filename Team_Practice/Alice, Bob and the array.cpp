#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t,j=1;
    cin>>t;
    while(t--)
    {
        int n;
        ll sum=0,po=-1,no=-1,zo=-1,mv=0;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        if(arr[i]==0)
        {
            zo=1;

        }
        if(arr[i]<0)
        {
            no=1;

        }
        if(arr[i]>0)
        {
            po=1;

        }

        }
        if(po==-1)
        {

            sort(arr,arr+n);
            sum=arr[n-1];
            mv=0;
        }
        else
        {
            vector<ll>vec;
            int s=0,e=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]>0)
                {
                    s=i;
                    break;
                }
            }
             for(int i=n-1;i>=0;i--)
            {
                if(arr[i]>0)
                {
                    e=i;
                    break;
                }
            }
           // cout<<s<<' '<<e<<endl;

            for(int i=s;i<=e;i++)
            {
                if(arr[i]!=0)
                {
                    vec.push_back(arr[i]);
                }
            }
            ll pos=0,neg=0;
            string s1;
            for(int i=0;i<vec.size();i++)
            {
                //cout<<vec[i]<<' ';
                if(vec[i]>=0)
                {
                    sum+=vec[i];
                    s1+='+';
                }
                else
                {
                    s1+='-';
                }


            }
            pos=1;

            for(int i=1;i<s1.size();i++)
            {
                //cout<<s1[i];
                if(s1[i-1]!=s1[i])
                {
                    if(s1[i]=='+')
                    {
                        pos++;
                    }
                    else
                    {
                        neg++;
                    }
                }
            }
            mv=neg;

        }
        //cout<<endl;
        cout<<"Case "<<j++<<": ";
        cout<<sum<<' ';
        cout<<mv<<endl;
    }
}
