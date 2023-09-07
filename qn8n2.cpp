//lab 8.2
#include <iostream>
#include <string>
using namespace std;
class media{
    protected:
    string quantity;
    public:
    virtual void setter()=0;
    void getter();
};
class book:public media{
    private:
    string name;
    int price;
    public:
    void setter();
    void getbo();
};
class audio_tape:public media{
    private:
    string memory;
    public:
    void setter();
    void getau();
};
int main(){
    book ob1;
    ob1.setter();
    audio_tape ob2;
    ob2.setter();
    ob1.getter();
    ob1.getbo();
    ob2.getter();
    ob2.getau();
    return 0;
}
void media::getter(){
    cout<<"total quantity :"<<quantity<<endl;
}
void book::setter(){
    cout<<"---------------"<<endl<<"enter the total quantity of books"<<endl;
    getline(cin,quantity);
    cout<<"enter the name of books"<<endl;
    getline(cin,name);
    cout<<"enter the price of book per piece"<<endl;
    cin>>price;
    cin.ignore();
}
void book::getbo(){
    cout<<"name of book :"<<name<<endl<<"price per piece : "<<price<<endl;
}
void audio_tape::setter(){
    cout<<"----------------"<<endl<<"enter the total quantity of audio tapes"<<endl;
    getline(cin,quantity);
    cout<<"enter the memory space of audio tape"<<endl;
    getline(cin,memory);
    cin.ignore();
}
void audio_tape::getau(){
    cout<<"total memory of audio tape is : "<<memory<<endl;
}