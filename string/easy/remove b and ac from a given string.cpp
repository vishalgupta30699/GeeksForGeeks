#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,i,flag,j;
string str;
cin>>tc;
while(tc--)
{
cin>>str;
n=str.length();
j=0;
flag=0;
for(i=0;i<n;++i)
{
if(str[i]=='b')
{
cout<<"1\n";
continue;
}
else if(str[i]=='a'&&flag==0)
{
cout<<"2\n";
flag=1;
continue;
}
else if(str[i]=='a'&&flag==1)
{
cout<<"6\n";
cout<<str[i];
str[j++]=str[i];
}
else if(str[i]=='c'&&flag==1)
{
cout<<"3\n";
flag=0;
continue;
}
else if(str[i]=='c'&&flag==0)
{
cout<<"4\n";
cout<<"a";
str[j++]='a';
}
else
{
cout<<"5\n";
cout<<str[i];
str[j++]=str[i];
}
}
str[j]='\n';
cout<<str<<"\n";
}
return 0;
}