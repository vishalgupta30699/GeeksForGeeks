#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,i,x;
cin>>tc;
while(tc--)
{
cin>>n;
set<int> s;
for(i=0;i<n;++i)
{
cin>>x;
s.insert(x);
}
vector<int> v(s.begin(),s.end());
x=v[0];
x++;
for(i=1;i<v.size();++i)
{
if(v[i]!=x) break;
x++;
}
if(i==v.size()) cout<<"Yes\n";
else cout<<"No\n";
}
return 0;
}