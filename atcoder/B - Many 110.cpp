#include <bits/stdc++.h>
#define mx 10000000000
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int flag=1;
    if(n>=3)
    {
        if(s[0]=='1' &&s[1]=='1' &&s[2]=='0')
        {

            for(int i=0;i<(n/3)*3;i+=3)
            {
                if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0')
                {

                }
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {


            if(n%3==0)
            {
                cout<<mx-n/3+1<<endl;
            }
            else if(n%3==2)
            {
                if(s[n-1]=='1' && s[n-2]=='1')
                {
                     cout<<mx-n/3<<endl;
                }
                else
                {
                    cout<<0<<endl;
                }
            }
            else if(n%3==1)
            {
                if(s[n-1]=='1')
                {
                     cout<<mx-n/3<<endl;
                }
                else
                {
                    cout<<0<<endl;
                }
            }
        }
        else
        {
            cout<<0<<endl;
        }
        }
        else if(s[0]=='1' &&s[1]=='0' &&s[2]=='1')
        {

            for(int i=0;i<(n/3)*3;i+=3)
            {
                if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')
                {

                }
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {


            if(n%3==0)
            {
                cout<<mx-n/3<<endl;
            }
            else if(n%3==2)
            {
                if(s[n-1]=='0' && s[n-2]=='1')
                {
                     cout<<mx-n/3<<endl;
                }
                else
                {
                    cout<<0<<endl;
                }
            }
            else if(n%3==1)
            {
                if(s[n-1]=='1')
                {
                     cout<<mx-n/3<<endl;
                }
                else
                {
                    cout<<0<<endl;
                }
            }
        }
        else
        {
            cout<<0<<endl;
        }
        }
        else if(s[0]=='0' &&s[1]=='1' &&s[2]=='1')
        {

            for(int i=0;i<(n/3)*3;i+=3)
            {
                if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='1')
                {

                }
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {


            if(n%3==0)
            {
                cout<<mx-n/3<<endl;
            }
            else if(n%3==2)
            {
                if(s[n-1]=='1' && s[n-2]=='0')
                {
                     cout<<mx-n/3-1<<endl;
                }
                else
                {
                    cout<<0<<endl;
                }
            }
            else if(n%3==1)
            {
                if(s[n-1]=='0')
                {
                     cout<<mx-n/3<<endl;
                }
                else
                {
                    cout<<0<<endl;
                }
            }
        }
        else
        {
            cout<<0<<endl;
        }
        }
        else
        {
            cout<<0<<endl;
        }
    }

    else if(n==1)
    {
        if(s[0]=='1')
        {
            cout<<(mx*2)<<endl;
        }
        else
        {
            cout<<(mx)<<endl;
        }
    }
    else if(n==2)
    {
        if((s[0]=='1'&&s[1]=='1')||(s[0]=='1'&&s[1]=='0'))
        {
            cout<<mx<<endl;
        }
        else if(s[0]='0' && s[1]=='1')
        {
            cout<<mx-1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}
