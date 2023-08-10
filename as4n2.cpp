//assignment 4.2
#include<iostream>
#include<string>
using namespace std;
class vehicle{
    private:
    string name;
    string price;
    public:
    vehicle(){
        name="tesla";
        price="100k";
    }
    vehicle(string n,string p){
        name=n;
        price=p;
    }
    ~vehicle(){}
    void setinfo();
    void getinfo();
};
int main(){
    vehicle obj("lambo","500k");
    obj.getinfo();
    return 0;
}
void vehicle::setinfo(){
    cout<<"enter the name of motor"<<endl;
    getline(cin,name);
    cout<<"enter the price of motor in k e.g 10000k";
    getline(cin,price);
}
void vehicle::getinfo(){
    cout<<"Car name and price"<<endl;
    cout<<"Name: "<<name<<endl<<"Price: "<<price;

}