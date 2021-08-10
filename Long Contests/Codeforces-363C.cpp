#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int cnt=0;
    cin>>s;
    s1="0";
    s+=s1;
    vector<char>v;
    vector<int>d;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            if(cnt<=1)
            {
                v.push_back(s[i]);

            }
            cnt++;
        }
        else
        {
          if(cnt<=1)
           {

                v.push_back(s[i]);

            }

            cnt=0;
        }
    }

  //  cout<<endl;
    cnt=0;
for(int i=0;i<v.size()-1;i++)
{
    if(v[i]==v[i+1])
    {
        d.push_back(i);
    }

}

for(int i=0;i<d.size();i++)
{
    if(d[i]+2==d[i+1])
    {

        v[d[i+1]]='1';
        //cout<<d[i+1]<<" ";
       i++;
    }
}

    for(int i=0;i<v.size();i++)
    {
        if(v[i]!='1'){
        cout<<v[i];
        }
    }
}
