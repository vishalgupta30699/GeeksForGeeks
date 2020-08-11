#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,i;
cin>>tc;
while(tc--)
{
cin>>n;
vector<string> v(n);
unordered_map<string,int> map;
for(i=0;i<n;++i) cin>>v[i];
for(i=0;i<n;++i)
{
map[v[i]]++;
}
int first_max = INT_MIN, sec_max = INT_MIN; 
for (auto it = map.begin(); it != map.end(); it++) 
{ 
if (it->second > first_max) 
{ 
sec_max = first_max; 
first_max = it->second; 
} 
else if (it->second > sec_max && it->second != first_max) 
            sec_max = it->second; 
}
for (auto it = map.begin(); it != map.end(); it++) 
        if (it->second == sec_max) 
            cout<<it->first<<"\n";
}
return 0;
}