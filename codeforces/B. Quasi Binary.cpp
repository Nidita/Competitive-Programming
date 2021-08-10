#include <bits/stdc++.h>

using namespace std;
int arr[11][7];

int main()
{
    int n;
    cin>>n;
    memset(arr,0,sizeof(arr));
    int m=-1;
    vector<int>v;
    while(n!=0)
    {
        v.push_back(n%10);
        m=max(m,n%10);
        n/=10;

    }
    int j=0;
    for(int i=0;i<v.size();i++)
    {
        int u=v[i];
        j=0;
        while(u>0)
        {


        arr[j++][i]=1;
        u--;
        }
    }
    int p=0;
    cout<<m<<endl;
    for(int i=0;i<m;i++)
    {
        p=0;

        for(int j=v.size()-1;j>=0;j--)
        {
            if(arr[i][j]==1)
            {
                p=1;
            }
            if(p==1)
            {


            cout<<arr[i][j];
            }
        }
        cout<<' ';
    }

}
