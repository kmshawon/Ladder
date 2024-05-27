#include <bits/stdc++.h>
using namespace std;
int main()
{
string s;

getline(cin,s);
int length=s.length();
char c;
reverse(s.begin(),s.end());
for (int i = 0; i < length; i++)
{
    if(isalpha(s[i])){
        c= toupper(s[i]) ;
        break;
    }
}
if(c=='A' || c=='E' ||c=='I' ||c=='O' ||c=='U' ||c=='Y' )
{
    cout<<"YES\n";
}
else{
    cout<<"NO\n";
}
}