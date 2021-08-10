#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int arr[s.size()-1];
    int sum=0;
    int cnt=0;
    if(s.size()==1)
    {
        cout<<0<<endl;
    }
    else{

    for(int i=0;i<s.size();i++)
    {
        arr[i]=(int)s[i]-'0';
        sum+=arr[i];

    }
    int d=0;
    while(sum>=10)
    {

        cnt++;

        d=0;
        while(sum>0)
        {
           d+=sum%10;
           sum/=10;

        }

        sum=d;


    }
      cout<<cnt+1<<endl;
    }





}
