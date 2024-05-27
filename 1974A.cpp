#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        bool even=(y%2==0);
        
        if(even && x<=((y/2)*7) ){
            cout<<ceil((double)y/2)<<endl;
        }
        else if(!even && x<=((y*3.5)+7.5) )
        {
             cout<<ceil((double)y/2)<<endl;
        }
        else if(even && x>((y/2)*7)){
            int extra,extra_phone;
            extra=x-((y/2)*7);

            extra_phone=ceil((double)extra/15);
            cout<<extra_phone+ceil((double)y/2)<<endl;
        }else if(!even && x>((y*3.5)+7.5)){
            int extra,extra_phone;
            extra=x-((y*3.5)+7.5);

            extra_phone=ceil((double)extra/15);
            cout<<extra_phone+ceil((double)y/2)<<endl;
        }

    }
    
}