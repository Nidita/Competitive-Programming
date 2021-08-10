#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
    node* child[2];
    int end_mark;
    int level;
    node()
    {
        for(int i=0; i<2; i++)
        {
            child[i]=NULL;
        }
        end_mark=0;
        level=0;
    }
};
node* root;
void Insert(string s)
{
    node *cur=root;
    int k=0;
    for(auto ch:s)
    {
        int letter=ch-'0';

        if(cur->child[letter]==NULL)
        {
            cur->child[letter]=new node();
        }
        cur=cur->child[letter];
         cur->end_mark=++( cur->end_mark);
           cur->level=++k;
    }

}

int mx=0;
void Delete_all(node *cur)///root pathaile pora tree delete hobe
 {                        ///je node pathabo tar subtree delete hobe,
     for(int i=0;i<2;i++)
     {
         if(cur->child[i])
         {

             Delete_all(cur->child[i]);
         }
     }
     mx=max(mx,(cur->end_mark)*(cur->level));
   //  cout<<cur->end_mark<<' ';
     delete(cur);
 }
int main()
{
    int t;
    scanf("%d",&t);
    for(int te=1; te<=t; te++)
    {
        root=new node();
        int n;
        scanf("%d",&n);
        string s[n];
        for(int i=0; i<n; i++)
        {
            getchar();
            cin>>s[i];
            Insert(s[i]);
        }

           Delete_all(root);
           cout<<mx<<endl;
           mx=0;

    }
}


