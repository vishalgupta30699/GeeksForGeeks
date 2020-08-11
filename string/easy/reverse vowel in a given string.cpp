#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,i,n,e,f;
string str;
char g;
cin>>tc;
while(tc--)
{
cin>>ws;
getline(cin,str);
n=str.length();
e=0;
f=n-1;
while(e<f)
{
if(!(str[e]=='a'||str[e]=='e'||str[e]=='i'||str[e]=='o'||str[e]=='u')) {e++;continue;}
else if(!(str[f]=='a'||str[f]=='e'||str[f]=='i'||str[f]=='o'||str[f]=='u')) {f--;continue;}
else
{
g=str[e];
str[e]=str[f];
str[f]=g;
e++;
f--;
}
}
cout<<str<<"\n";
}
return 0;
}