#include<bits/stdc++.h> 
using namespace std; 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n;
string str;
cin>>tc;
while(tc--)
{
cin>>str;
n=str.length();
if (n % 3 == 1) 
{ 
str="00"+str; 
n += 2; 
} 
else if (n % 3 == 2) 
{ 
str="0"+str;
n++; 
}
int i,gSum=0, GSum = 0, p = 1; 
for (i = n - 1; i >= 0; i--) 
{ 
int group = 0; 
group += str[i--] - '0'; 
group += (str[i--] - '0') * 10; 
group += (str[i] - '0') * 100; 
gSum = gSum + group * p; 
p *= (-1); 
} 
(gSum % 7 == 0)?cout<<"1\n":cout<<"0\n"; 
}
return 0;
} 