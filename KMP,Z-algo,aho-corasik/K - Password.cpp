///in the name of ALLAH
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> z_array(string s)
{
    int n=s.size();
    vector<int>z(n,0);
    int l=0,r=0;
    for(int i=1; i<n; i++)
    {
        if(i<=r)
        {
            z[i]=min(r-i+1,z[i-l]);
        }
        while(i+z[i]<n && s[z[i]]==s[i+z[i]])
        {
            z[i]++;
        }
        if(i+z[i]-1>r)
        {
            l=i;
            r=i+z[i]-1;
        }
    }
    return z;
}
int main()
{
    string s;
    cin>>s;
    vector<int>z=z_array(s);
    vector<int>v;
    //map<int,string>m;
    int n=s.size();
    for(int i=0; i<n; i++)
    {
        //cout<<z[i]<<" ";
        v.push_back(z[i]);
    }
    //cout<<endl;
    sort(v.begin(),v.end());
    int p=-1;
    for(int i=1; i<n; i++)
    {
        if(i+z[i]==n)
        {
            int l=lower_bound(v.begin(),v.end(),z[i])-v.begin();
            //int u=upper_bound(v.begin(),v.end(),z[i])-v.begin();
            if((n-l)>1)
            {
                //m[z[i]]=s.substr(i,z[i]);
                p=max(p,z[i]);
            }
        }
    }
    if(p==-1)
        cout<<"Just a legend"<<endl;
    else
    {
        for(int i=1; i<n; i++)
        {
            if(i+z[i]==n)
            {
                int l=lower_bound(v.begin(),v.end(),z[i])-v.begin();
                //int u=upper_bound(v.begin(),v.end(),z[i])-v.begin();
                if((n-l)>1 && z[i]==p)
                {
                    //m[z[i]]=s.substr(i,z[i]);
                    cout<<s.substr(i,z[i])<<endl;
                    break;
                }
            }
        }
    }

}
 
