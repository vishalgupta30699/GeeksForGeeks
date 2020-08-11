#include<bits/stdc++.h>
using namespace std;
#define max_no_char 256
struct trie
{
struct trie *child[max_no_char];
bool isEnd;
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
index=v[i][j];
if(!curr->child[index])
{
curr->child[index]=new trie;
}
curr=curr->child[index];
}
curr->isEnd=true;
}
}

int countChildren(struct trie *node, int *index) 
{ 
int count = 0; 
for (int i=0; i<256; i++) 
{ 
if (node->child[i] != NULL) 
{ 
count++; 
*index = i; 
} 
} 
return (count); 
} 

string LCP(struct trie *root)
{
struct trie *pCrawl = root; 
int index; 
string prefix; 
while (countChildren(pCrawl, &index) == 1 && pCrawl->isEnd == false) 
{ 
pCrawl = pCrawl->child[index]; 
prefix.push_back(index); 
} 
return (prefix);
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
string str=LCP(root);
if((str.length())==0) cout<<"-1\n";
else cout<<str<<"\n";
}
return 0;
}