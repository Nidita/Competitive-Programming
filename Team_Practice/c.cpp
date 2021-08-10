
#include <bits/stdc++.h>
#define ll long long
#define pii pair<long,long>

using namespace std;
int main()
{
    int n,p;
    cin>>n;
   vector< pii > v;
   ll ceach[n];
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
        ceach[i]=0;
    }
    cin>>p;

    ll clip[p];
    for(int i=0;i<p;i++)
    {
        cin>>clip[i];
    }
    for(int j=0;j<p;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(clip[j]>=v[i].first &&clip[j]<=v[i].second )
            {
                ceach[i]++;
            }
        }
    }
    int o=1;

    vector<ll>newclip;
    for(int i=0;i<n-1;i++)
    {
        if(ceach[i]>2)
        {
            o=0;
            break;
        }
        else if(ceach[i]==2)
        {
            continue;
        }
        else if(ceach[i]==1)
        {
            if(v[i].second==v[i+1].first)
            {
                if(!(binary_search(clip,clip+p,v[i].second)))
                {


                if(ceach[i+1]<2)
                {
                    ceach[i+1]++;
                    ceach[i]++;
                    newclip.push_back(v[i].second);

                }
                else
                {

                    if(binary_search(clip,clip+p,v[i].second-1))
                    {
                         newclip.push_back(v[i].second-2);
                    }
                    else
                    {
                         newclip.push_back(v[i].second-1);
                    }

                    ceach[i]++;

                }
                }
                else
                {
                  newclip.push_back(v[i].second-1);
                  ceach[i]++;
                }
            }
            else
            {
                if(binary_search(clip,clip+p,v[i].second))
                    {
                         newclip.push_back(v[i].second-1);
                    }
                    else
                    {
                         newclip.push_back(v[i].second);
                    }
                 ceach[i]++;
            }
        }
        else if(ceach[i]==0)
        {
            newclip.push_back(v[i].second-1);
            ceach[i]++;
            if(v[i].second==v[i+1].first)
            {



                if(ceach[i+1]<2)
                {
                    ceach[i+1]++;
                    ceach[i]++;
                    newclip.push_back(v[i].second);

                }
                else
                {

                         newclip.push_back(v[i].second-2);


                    ceach[i]++;
                }
                }
                else
                {
                  newclip.push_back(v[i].second);
                  ceach[i]++;
                }
            }


    }
    if(ceach[n-1]>2)
    {
        o=0;
    }
    else if(ceach[n-1]==1)
    {
        if(!(binary_search(clip,clip+p,v[n-1].second)))
        {
            newclip.push_back(v[n-1].second);
        }
        else
        {

            newclip.push_back(v[n-1].second-1);
        }
         ceach[n-1]+=1;
    }
     else if(ceach[n-1]==0)
    {
         newclip.push_back(v[n-1].second);
          newclip.push_back(v[n-1].second-1);
          ceach[n-1]+=2;
    }
    if(o==0)
    {
        cout<<"impossible"<<endl;
    }
    else
    {
        cout<<newclip.size()<<endl;
        for(int i=0;i<newclip.size();i++)
        {
            cout<<newclip[i]<<' ';
        }
        cout<<endl;
    }

}
