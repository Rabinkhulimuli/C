//lab8.1
#include <iostream>
#include <string>
using namespace std;
class living_being;
class animal{
    private:
    string name;
    public:
    friend class living_being;
    void setter();
};
class living_being{
    private:
    string id;
    public:
    animal an;
    void getter(animal);
    void setlb();
};
int main(){
    animal ob;
    ob.setter();
    living_being obj;
    obj.setlb();
    obj.getter(ob);
}
void animal::setter(){
    cout<<"enter the name of animal"<<endl;
    getline(cin,name);
    cin.ignore();
}
void living_being::setlb(){
    cout<<"enter the family name of living being"<<endl;
    getline(cin,id);
    cin.ignore();
}
void living_being::getter(animal an){
    cout<<"living being data "<<endl;
    cout<<"animal name: "<<an.name<<endl;
    cout<<"family :"<<id<<endl;
}