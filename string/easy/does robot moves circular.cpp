#include<bits/stdc++.h>
#define N 0 
#define E 1 
#define S 2 
#define W 3 
using namespace std;
bool isCircular(string path)
{
int x = 0, y = 0,dir = N; 
for (int i=0; path[i]; i++) 
{ 
char move = path[i]; 
if (move == 'R') dir = (dir + 1)%4; 
else if (move == 'L') dir = (4 + dir - 1)%4; 
else
{ 
if (dir == N) y++; 
else if (dir == E) x++; 
else if (dir == S) y--; 
else x--; 
} 
} 
return (x == 0 && y == 0);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int tc,n,i;
string str;
cin>>tc;
while(tc--)
{
cin>>str;
(isCircular(str))?cout<<"Circular\n":cout<<"Not Circular\n";
}
return 0;
}