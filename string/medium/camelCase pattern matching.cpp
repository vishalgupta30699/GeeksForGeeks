#include<bits/stdc++.h>
using namespace std;
#define max_no_char 26
struct trie
{
struct trie *child[max_no_char];
bool isEnd;
list<string> word;
trie()
{
memset(child,0,sizeof(child));
isEnd=false;
}
};

void insert(struct trie *root,vector<string> v)
{
struct trie *curr;
int index,i,j;
for(i=0;i<v.size();++i)
{
curr=root;
for(j=0;j<v[i].length();++j)
{
if(islower(v[i][j])) continue;
else
{
index=v[i][j]-'A';
if(!curr->child[index])
{
curr->child[index]=new trie;
}
curr=curr->child[index];
}
}
curr->isEnd=true;
(curr->word).push_back(v[i]);
}
}
void printAllWord(struct trie *root)
{
if(root->isEnd)
{
for(string str:root->word)
{
cout<<str<<" ";
}
}
struct trie *curr;
for(int i=0;i<max_no_char;++i)
{
curr=root->child[i];
if(curr) printAllWord(curr);
}
}

bool Search(struct trie *root,string patt)
{
struct trie *curr=root;
int index,i;
for(i=0;i<patt.length();++i)
{
index=patt[i]-'A';
if(!curr->child[index]) return false;
curr=curr->child[index];
}
printAllWord(curr);
return true;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,i;
cin>>tc;
while(tc--)
{
cin>>n;
vector<string> v(n);
for(i=0;i<n;++i) cin>>v[i];
struct trie *root=new trie;
insert(root,v);
string patt;
cin>>patt;
if(!Search(root,patt))
{
cout<<"No match found\n";
}
}
return 0;
}