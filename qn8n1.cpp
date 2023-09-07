//lab 8.1
#include <iostream>
#include <string>
using namespace std;
class animal{
    private:
    string name;
    public:
    friend string getfr(animal an);
    void setter();
};
class living_being{
    private:
    string id;
    public:
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
string getfr(animal an){
    return an.name;
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
    cout<<"animal name: "<<getfr(an)<<endl;
    cout<<"family :"<<id<<endl;
}