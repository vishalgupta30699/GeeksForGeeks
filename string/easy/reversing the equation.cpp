#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,i;
string s;
cin>>tc;
while(tc--)
{
cin>>s;
string result;
int j = 0; 
for (i = 0; i < s.length(); i++) 
{ 
if (s[i] == '+' || s[i] == '-' ||s[i] == '/' || s[i] == '*') 
{ 
result.insert(result.begin(),s.begin() + j, s.begin() + i); 
j = i + 1; 
result.insert(result.begin(), s[i]); 
} 
} 
result.insert(result.begin(), s.begin() + j, s.end()); 
cout<<result<<"\n";
}
return 0;
}