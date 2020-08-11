#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,i,score,bet;
string str;
cin>>tc;
while(tc--)
{
cin>>str;
n=str.length();
score=4;
bet=1;
for(i=0;i<n;++i)
{
if(str[i]=='W')
{
score+=bet;
bet=1;
}
else
{
score-=bet;
bet=bet*2;
}
if(score<1) break;
}
if(i<n) cout<<"-1\n";
else cout<<score<<"\n";
}
return 0;
}