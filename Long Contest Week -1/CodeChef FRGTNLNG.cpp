#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        string c,s;
        string arr[a];
        for(j=0;j<a;j++)
        {
            cin>>arr[j];
        }
        int g;
        for(j=0;j<b;j++)
        {
            cin>>g;
         getline(cin,s);
            c+=s;
        }
        for(j=0;j<a;j++)
        {
             size_t found = c.find(arr[j]);
    if (found != string::npos)
    {
        cout<<"YES ";
    }
    else
    {
        cout<<"NO ";
    }


    }
    cout<<endl;
}
}
