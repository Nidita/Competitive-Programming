#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<double>s;
    for(int i=0;i<5;i++)
    {
        double x;
        cin>>x;
        s.insert(x);
    }
    cout<<s.size()<<endl;
}
