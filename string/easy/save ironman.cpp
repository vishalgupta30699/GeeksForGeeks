#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,e,f;
cin>>tc;
string str;
cin>>ws;
while(tc--)
{
getline(cin,str);
e=0;
f=str.length()-1;
while(e<f)
{
if(!isalpha(str[e])&&!isdigit(str[e]))
{
e++;
continue;
}
if(!isalpha(str[f])&&!isdigit(str[f]))
{
f--;
continue;
}
if(str[e]!=str[f]) break;
e++;
f--;
}
(e<f)?cout<<"No\n":cout<<"Yes\n";
}
return 0;
}