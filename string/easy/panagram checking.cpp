#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,i;
cin>>t;
cin.ignore(INT_MAX, '\n');
while(t--)
{
string str;
getline(cin, str);
n=str.length();
vector<int> v(26);
if(n<26) cout<<"0\n";
else
{
for(i=0;i<n;++i)
{
if(str[i]>=65&&str[i]<=90) v[str[i]-'A']=1;
else if(str[i]>=97&&str[i]<=122) v[str[i]-'a']=1;
}
if(find(v.begin(),v.end(),0)==v.end()) cout<<"1\n";
else cout<<"0\n";
}        
}
return 0;
}