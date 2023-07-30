//Assignment -1.3
#include<iostream>
using namespace std;

int main(){
    int mark;
    cout<<"write down your total scored mark"<<endl;
    cin>>mark;
    if(mark>=90&&mark<=100){
        cout<<"A"<<endl;
    }
    else if(mark>=80&&mark<90){
        cout<<"B";
    }
    else if(mark>=70&&mark<80){
        cout<<"C";
    }
    else if(mark>=60&&mark<70){
        cout<<"D";
    }
    else{
        cout<<"F";}
    return 0;
}