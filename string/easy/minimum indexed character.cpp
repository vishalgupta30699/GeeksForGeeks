#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,i,tot;
string str,patt;
cin>>tc;
while(tc--)
{
cin>>str>>patt;
unordered_map<char,int> map;
for(i=0;i<patt.length();++i)
{
map[patt[i]]=1;
}
for(i=0;i<str.length();++i)
{
if(map.count(str[i])) break;
}
(i<str.length())? cout<<str[i]<<"\n":cout<<"No character present\n";
}
return 0;
}