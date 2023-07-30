#include<iostream>
#include <math.h>
using namespace std;
int factorial(int);
int square(int);
int main(){
    int n,i,f;
    float sum=0;
    cout<<"enter nth number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        f=factorial(i);
        sum+=(pow(-1,i+1))*(pow(i,2)/f);
        f=0;
    }
    cout<<"sum "<<sum<<endl;
    return 0;
}
int factorial(int n){
    if(n==0){
        return 1;
    }
    return (n*(factorial(n-1)));
}