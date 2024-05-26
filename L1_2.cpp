#include <bits/stdc++.h>
using namespace std;
int ans[100];
int dif[101];
int main()
{
    int t,t1,l;
    cin>>t;
    t1=t;
    l=t;
    int i=0,j=0;
    while (t--)
    {
        int v;
        cin>>v;
        ans[i++]=v;
        
    }
    while (t1--)
    {
       
        
        dif[j]= abs(ans[(j+1)%l]-ans[j] ) ;
        j++;

    }
    if(l==2){
        cout<<"1 2\n";
    }
    else{

    int* i1;
    i1=min_element(dif,dif+l);
    int pos=i1-dif + 1;
    if((pos+1)==l){

    cout<<pos<<" "<<(pos+1)<<endl;
    }
    else{
         cout<<pos<<" "<<(pos+1)%l<<endl;
    }
    }
    
    


    
}