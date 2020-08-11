#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc;
cin>>tc;
unordered_set<string> s;
s.insert("2");
s.insert("3");
s.insert("5");
s.insert("13");
s.insert("89");
s.insert("233");
s.insert("1597");
s.insert("28657");
s.insert("514229");
s.insert("433494437");
s.insert("2971215073");
s.insert("99194853094755497");
s.insert("1066340417491710595814572169");
s.insert("19134702400093278081449423917");
s.insert("475420437734698220747368027166749382927701417016557193662268716376935476241");
while(tc--)
{
string str;
cin>>str;
if(s.find(str)!=s.end()) cout<<"1\n";
else cout<<"0\n";
}
return 0;
}