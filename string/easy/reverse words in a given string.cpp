#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,i;
cin>>tc;
string str,s;
stack<string> st;
while(tc--)
{
cin>>str;
s="";
for(i=0;i<str.length();++i)
{
if(str[i]=='.')
{
st.push(s);
s="";
}
else
{
s=s+str[i];
}
}
st.push(s);
while(1)
{
cout<<st.top();
st.pop();
if((st.empty())) break;
cout<<".";
}
cout<<"\n";
}
return 0;
}