#include <bits/stdc++.h>
#define m 1000006
using namespace std;
int A[m],mem[m];
int mx=0,n,l,p=0;



void lisIterative() {
    for (int i = n - 1;i >= 0;i--) {
        int ans = 0;
        for (int j = i + 1;j < n;j++) {
            if (A[j]<A[i]) {
                ans = max(ans, mem[j]);
            }
        }


        mem[i] = ans + 1;
        if(mem[i]==l)
        {
            p=1;
            mx=min(mx,A[i]);
            mem[i]-=1;
        }
    }

  /*  int final_ans = 0;
    for(int i = 0;i<n;i++) {
      final_ans = max(final_ans, mem[i]);
    }

    return final_ans;
    */
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

   l=0;
   mx=0;
   p=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        mx=max(mx,A[i]);

    }
    cin>>l;
    reverse(A,A+n);
   lisIterative();
   if(p==0)
   {
       cout<<"-1"<<endl;
   }
   else{
   cout<<mx<<endl;
   }
    }
}

