#include <bits/stdc++.h>
#define mx 5005
using namespace std;
int A[mx],mem[mx],B[mx];
int m,n;


int lisIterative() {
    for (int i = n - 1;i >= 0;i--) {
        int ans = 0;
        for (int j = i + 1;j < n;j++) {
            if (A[j]!=A[i] && B[j]>B[i]) {
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
    cin>>n;
    for(int i=0;i<n;i++)
    {
      long long x;
      cin>>x;
      B[i]=abs(x);
      if(x>0)
      {
          A[i]=1;
      }
      else
      {
          A[i]=0;
      }

    }
    cout<<lisIterative()<<endl;
}

