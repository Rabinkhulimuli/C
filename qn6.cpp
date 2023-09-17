//lab assignment 6.1
#include<iostream>
#include<string>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    public:
    void sett();
    void gett();
};
class author:public Person{
    private:
    int collection_no;
    public:
    
    void setter();
    void getter();
};
int main(){
    author ob;
    ob.setter();
    ob.getter();
    return 0;
}
void author::setter(){
    sett();
    cout<<"number of books written"<<endl;
    cin>>collection_no;
    cin.ignore();
};
void author::getter(){
    gett();
    cout<<"books written :"<<collection_no<<endl;
}
void Person::sett(){
    cout<<"Enter your name "<<endl;
    getline(cin,name);
    cout<<"Age"<<endl;
    cin>>age;
    cin.ignore();
}
void Person::gett(){
    cout<<"Name :"<<name<<endl<<"Age :"<<age<<endl;
}