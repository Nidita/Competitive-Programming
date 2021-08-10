#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,s,k;
  cin>>n>>s>>k;
  int sum=n-s;
  int o=ceil((double)sum/(double)k);
  int j=(o*k)-sum;
  cout<<o+(j*k)<<endl;
}
