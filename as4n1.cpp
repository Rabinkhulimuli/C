//assignment 4.1
#include <iostream>
using namespace std;
class complex_arith{
    private:
    int f1,f2;
    int s1,s2;
    char a;
    public:
    complex_arith(){
        cout<<"choose the operator \'+\' Or \'-\' for complex arithmetic\t";
        cin>>a;
        cin.ignore();
    }
    void set_arithmetic();
    void get_arithmetic();
    ~complex_arith(){}
};
int main(){
    complex_arith cm;
    cm.set_arithmetic();
    cm.get_arithmetic();
    return 0;
}
void complex_arith::set_arithmetic(){
    cout<<"enter the first complex number e.g a+bi:"<<endl;
    cout<<"enter value of \'a\'\t";
    cin>>f1;
    cout<<"enter value of \'b\'\t";
    cin>>f2;
    cout<<"Enter second complex number e.g a+bi"<<endl;
    cout<<"enter value of \'a\'\t";
    cin>>s1;
    cout<<"enter value of \'b\'\t";
    cin>>s2;

}
void complex_arith::get_arithmetic(){
    switch (a){
        case '+':
        cout<<"sum : "<<f1+s1<<'+'<<f2+s2<<'i';
        break;
        case '-':
        cout<<"defference: "<<f1-s1<<'-'<<f2-s2<<'i';
        break;
        default:
        cout<<"invalid operator";
        
    }
}
