//lab 11.1
#include <iostream>
#include <string>
using namespace std;
class worker{
    private:
    string position;
    int salary;
    public:
    void getter();
    void setter();
};
int main(){
    worker ob;
    ob.setter();
    ob.getter();
    return 0;
}
void worker::setter(){
    try{
        cout<<"enter your position"<<endl;
        getline(cin,position);
        cout<<"enter your salary"<<endl;
        cin>>salary;
       
        if(salary<=10000){
            throw (salary);
        }
    }
    catch(...){
        cout<<"error \t salary must be greater than 10k"<<endl;
         cin.ignore();
        cout<<"enter your salary"<<endl;
        cin>>salary;
    }
}
void worker::getter(){
    cout<<"your position is :"<<position<<endl<<" and salary is : "<<salary<<endl;
}