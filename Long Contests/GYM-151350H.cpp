#include <bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    vector<char>v;
    v.push_back('A');
     v.push_back('H');
      v.push_back('I');
       v.push_back('M');
        v.push_back('O');
         v.push_back('T');
          v.push_back('U');
           v.push_back('V');
           v.push_back('W');
            v.push_back('X');
             v.push_back('Y');
             sort(v.begin(),v.end());
             cin>>t;
             while(t--)
             {
                 string a,b;
                 cin>>a;
                 b=a;
                 reverse(b.begin(),b.end());
                 if(b==a)

                 {
                     int j=0;
                   for(int i=0;i<b.size();i++)
                   {
                       if(!binary_search(v.begin(),v.end(),b[i]))
                       {
                         j=1;
                 break;
                       }
                   }
                   if(j==0)
                   {
                       cout<<"yes"<<endl;
                   }
                   else
                   {
                       cout<<"no"<<endl;
                   }
                 }
                 else
                   {
                       cout<<"no"<<endl;
                   }


             }

}
