//lab assignment 6.1
#include<iostream>
#include<string>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
    void sett();
    void gett();
};
class author{
    private:
    int collection_no;
    Person *id;
    public:
    author(){}
    author(Person *a){
        id=a;
    }
    void setter();
    void getter();
};
int main(){
    Person ob;
    ob.sett();
    author json(&ob);
    json.setter();
    json.getter();
    return 0;
}
void author::setter(){
    cout<<"number of books written"<<endl;
    cin>>collection_no;
    cin.ignore();
};
void author::getter(){
    id->gett();
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