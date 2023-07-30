//Assignment -1.2
#include<iostream>
using namespace std;

int main(){
     int a=0,b=1,c,n;
    cout<<"enter the nth place to find febonachi number."<<endl;
    cin>>n;
    cout<<a<<"\t"<<b<<"\t";
    for(int i=0;i<n-1;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<"\t";}
    return 0;
}