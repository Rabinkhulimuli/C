//Assignment -1
#include<iostream>
using namespace std;

int main(){
     int age,experience, weight;
    cout<<"enter your age then working experience and how much can you lift respectively"<<endl;
    cin>>age>>experience>>weight;
    if (experience>=4&&weight>=35 && age>24){
        cout<<"you are qualified to apply"<<endl;
    }
    else if((age>=18&&age<=24)&& weight>=50){
        cout<<"you are qualified"<<endl;

    }
    else cout<<"not qualified"<<endl;
    return 0;
}