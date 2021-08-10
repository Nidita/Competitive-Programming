#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    vector<int>voc;
    for(int i=1;i<=3000;i++)
    {
        int sum=0;
        for(int j=1;j*j<=i;j++)
        {
            if(i%j==0)
            {
                if(i/j==j)
                {
                    sum+=j;
                }
                else
                {
                    sum+=j;
                    sum+=(i/j);
                }
            }
        }
       v.push_back(sum);
       voc.push_back(i);
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size()-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
                swap(voc[j],voc[j+1]);
            }
        }
    }
    for(int i=0;i<v.size()-1;i++)
    {
        for(int j=0;j<v.size()-i-1;j++)
        {
            if(v[j]==v[j+1])
            {
                if(voc[j+1]<voc[j]){
                swap(v[j],v[j+1]);
                swap(voc[j],voc[j+1]);
                }
            }
        }
    }
   /* for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<voc[i]<<endl;
    }*/
    int p=1;
   while(1)
   {
       long long n;
       cin>>n;
       if(n==0) break;

       if(binary_search(v.begin(),v.end(),n))
       {
           int l=upper_bound(v.begin(),v.end(),n)-v.begin();
             cout<<"Case "<<p<<": "<<voc[l-1]<<endl;
           //cout<<"Case "<<p<<": "<<"-1"<<endl;
       }
       else{
       cout<<"Case "<<p<<": "<<"-1"<<endl;
       }
       p++;
   }

}
