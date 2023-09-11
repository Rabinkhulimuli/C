//lab 9.2
#include <iostream>
#include <string>
using namespace std;
class car{
    public:
    int quantity;
    string name;
    car();
    car (int,string);
    void setter();
    void getter();
    car* operator ->();
};
int main(){
    car obj(100, "nova");
    cout<<"name of your car : " <<obj->name<<endl<<"you have : "<<obj->quantity<<endl;
    return 0;
}
car::car(){
    quantity=0;
    name="undefined";
}
car::car(int x, string name){
    quantity=x;
    this->name=name;
}
void car::setter(){
    cout<<"enter the name for car"<<endl;
    getline(cin,name);
    cout<<"enter the quantity to purchase"<<endl;
    cin>>quantity;
}
void car::getter(){
    cout<<"car name : "<<name<<endl<<"Quantity :"<<quantity;
}
car* car::operator->(){
    return this;
}