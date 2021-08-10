#include <bits/stdc++.h>
#define mx 100005
using namespace std;
int mem[mx];
vector<pair<int,int>>A;
int m,n;


int lisIterative() {

    for (int i = n - 1;i >= 0;i--) {
        int ans = 0;
        for (int j = i + 1;j < n;j++) {
            if (A[j].second>=A[i].second) {
                ans = max(ans, mem[j]);
            }
        }
        mem[i] = ans + 1;
    }

    int final_ans = 0;
    for(int i = 0;i<n;i++) {
      final_ans = max(final_ans, mem[i]);
    }

    return final_ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n],brr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
         for(int i=0;i<n;i++)
        {
            cin>>brr[i];
        }
        A.clear();
        for(int i=0;i<n;i++)
        {
            A.push_back(make_pair(arr[i],brr[i]));
        }
       sort(A.begin(),A.end());
    vector<int>s;
    for(int i=0;i<n;i++)
    {
        int l=upper_bound(s.begin(),s.end(),A[i].second)-s.begin();
        if(l==s.size())
        {
            s.push_back(A[i].second);
        }
        else
        {
            s[l]=A[i].second;
        }
    }
    cout<<s.size()<<endl;

    }

}
