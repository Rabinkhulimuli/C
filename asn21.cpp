//Assignment -2.1
#include<iostream>
using namespace std;
int product(int,int,int);
float product(float,float,float);
int main(){
    int a,b,c;
    float x,y,z;
    cout<<"enter the 3 number to find product."<<endl;
    cin>>x>>y>>z;
    cout<<product(x,y,z);
    return 0;
}
int product(int x,int y,int z){
    return(x*y*z);
}
float product(float x, float y,float z){
    return(x*y*z);
}