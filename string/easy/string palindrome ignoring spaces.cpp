#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,e,f,i;
cin>>tc;
string str;
while(tc--)
{
cin>>ws;
getline(cin,str);
n=str.length();
for(e=0,f=n-1;e<f;)
{
if(str[e]==' ')
{
e++;
continue;
}
else if(str[f]==' ')
{
f--;
continue;
}
else if(str[e]!=str[f]) break;
e++;
f--;
}
(e<f)? cout<<"NO\n":cout<<"YES\n";
}
return 0;
}