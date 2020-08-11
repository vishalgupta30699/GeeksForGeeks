#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,i,count;
string str;
cin>>tc;
while(tc--)
{
cin>>str;
count=0;
for(i=0;i<str.length();)
{
if(str[i]=='E') 
{
i++;
continue;
}
else
{
count++;
i++;
while(str[i]=='O'&&str[i]!='\0')
{
i++;
}
}
}
cout<<count<<"\n";
}
return 0;
}