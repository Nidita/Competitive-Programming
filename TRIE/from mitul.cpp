///Bismillahir Rahmanir Rahim
#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef long long ll;
struct node
{
    node* child[26];
    int end_mark;
    node()
    {
        for(int i=0; i<26; i++)
        {
            child[i]=NULL;
        }
        end_mark=0;
    }
};
node* root;
void Insert(string s)
{
    node *cur=root;
    for(int i=0;i<s.size();i++)
    {
        int letter=s[i]-'a';
        if(cur->child[letter]==NULL)
        {
            cur->child[letter]=new node();
        }
        cur=cur->child[letter];
        cur->end_mark=(cur->end_mark)+1;
    }

}
void check(string st)
{
    node *cur=root;
    for(int i=0; i<st.size(); i++)
    {
        cout<<st[i];
        int letter=st[i]-'a';
        cur=cur->child[letter];
        if(cur->end_mark==1)
        {
            return ;
        }

        //cout<<cur->end_mark<<endl;
    }
}
int main()
{
    string s;
    vector<string>v;
    root=new node();
    while(getline(cin,s))
    {
        v.push_back(s);
        Insert(s);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
        check(v[i]);
        cout<<endl;

    }
}
