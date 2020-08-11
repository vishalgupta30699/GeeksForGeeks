#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,i;
cin>>tc;
string str; 
cin>>ws;
while(tc--)
{
getline(cin,str);
unordered_map<char,bool> map;
for(i=0;i<str.length();++i)
{
map[str[i]]=true;
}
for(i=0;i<str.size();++i)
{
if(map[str[i]]==true)
{
cout<<str[i];
map[str[i]]=false;
}
}
cout<<"\n";
}
return 0;
}