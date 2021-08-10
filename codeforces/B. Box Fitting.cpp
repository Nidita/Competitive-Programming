#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s=1;
    vector<int>pow2;
    pow2.push_back(s);
    while(s<=1000000)
    {
        pow2.push_back(s*2);
        s*=2;
    }

 cout<< pow2.size()<<endl;
   /* int t;
    cin>>t;
    while(t--)
    {

    }
    */
}
