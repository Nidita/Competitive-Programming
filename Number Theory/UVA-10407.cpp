#include <bits/stdc++.h>
using namespace std;
vector<int>v;
void Numbersinstring(string str)
{
    // breaking input into word using string stream
    stringstream s(str); // Used for breaking words
    int  word; // to store individual words


    while (s >> word)
        v.push_back(word);

}
int main()
{
    while(1){
    string s;
    getline(cin, s);
    Numbersinstring(s);

   v.pop_back();
    if(v.size()==0)
    {
       break;
    }
    else
    {
        vector<int>vec;
        for(int i=1;i<v.size();i++)
        {
           vec.push_back(v[i]-v[i-1]);
        }
    int d=vec[0];
    for(int i=1;i<vec.size();i++)
    {
        d=__gcd(d,vec[i]);
    }
    cout<<abs(d)<<endl;
    }
    v.clear();
    }
}
