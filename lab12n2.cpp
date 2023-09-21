#include <iostream>
#include<fstream>
#include<string>
using namespace std;
class person{
    private:
    string name;
    int age;
    public:
    void setter(){
        cout<<"enter your name and "<<endl;
        getline(cin,name);
        cout<<"age"<<endl;
        cin>>age;
        cin.ignore();
    }
    void getter(){
        cout<<"name :"<<name<<endl<<"age :"<<age<<endl;
    }
    int getage(){
        return age;
    }
};
int main(){
    person ob[5];
    for(int i=0;i<5;i++){
        ob[i].setter();
    ofstream wfile;
    wfile.open("persondata.bin",ios::binary|ios::trunc);
    wfile.close();
    wfile.open("persondata.bin",ios::binary|ios::app);
    wfile.write((char*)&ob[i],sizeof(ob[i]));
    wfile.close();}
     for(int i=0;i<5;i++){
    if(ob[i].getage()>=30){
    ob[i].getter();
    }
    }
    return 0;
}