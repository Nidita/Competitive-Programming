#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool Comparataor( pair<string,string> a, pair<string,string> b)
{
     if(a.first<b.first)
        {
            return false;
        }
         if(a.first>b.first)
        {
            return true;
        }

   if(a.second<b.second)
   {
        return true;
   }
    if(a.second>b.second)
   {
        return false;
   }


}
int main()
{
  int t;
  cin>>t;
  getchar();
  vector<pair<string,string>>vec;
    int mx=0;
 while(t--)
 {   vector<string>v;
     string s;
     getline(cin,s);
     stringstream ss(s);
     string str;
     while(ss >> str)
     {
         v.push_back(str);
     }
      string str2,str3;

     for(int i=v.size()-2;i>=1;i--)
     {
         //cout<<v[i]<<' ';
         if(v[i]=="upper")
         {
             str2+='3';
         }
         else if(v[i]=="middle")
         {
             str2+='2';
         }
         else
         {
             str2+='1';
         }
     }
     int d=str2.size();
     mx=max(d,mx);
     for(int i=0;i<v[0].size()-1;i++)
     {
         str3+=v[0][i];
     }
     vec.push_back(make_pair(str2,str3));






 }

 for(int i=0;i<vec.size();i++)
 {
   int d=mx-vec[i].first.size();
     for(int j=1;j<=d;j++)
     {
         vec[i].first+='2';
     }
 }

 sort(vec.begin(),vec.end(),Comparataor);
 /*for(int i=0;i<vec.size();i++)
 {
     cout<<vec[i].first<<' '<<vec[i].second<<endl;
 }
*/
 for(int i=0;i<vec.size();i++)
 {
     cout<<vec[i].second<<endl;
 }



}
