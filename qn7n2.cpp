//lab 7.2
#include <iostream>
#include <string>
using namespace std;
class electronic_device{
    private:
    string name;
    int cost;
    public:
    electronic_device(){
        cout<<"enter the name of device"<<endl;
        getline(cin, name);
        cout<<"enter the price of device"<<endl;
        cin>>cost;
        cin.ignore();
    }
    ~electronic_device(){}
    void setter();
    void getter();
};
class printer:public virtual electronic_device{
    private:
    string type;
    public:
    printer(){
         cout<<"enter the type of printer"<<endl;
    getline(cin,type);
    cin.ignore();
    }
    ~printer(){}
    void setprinter();
    void getpr();
};
class scanner:public virtual electronic_device{
    private:
    int size;
    public:
    scanner(){
        cout<<"enter the size of scanner"<<endl;
    cin>>size;
    cin.ignore();
    }
    ~ scanner(){}
    void setscanner();
    void getsc();
};
class photocopy_machine:public printer,public scanner{
    private:
    string model_no;
    public:
    void setph();
    void getph();
};
int main(){
    photocopy_machine ob;
    ob.setph();
    ob.getter();
    ob.getpr();
    ob.getsc();
    ob.getph();
    return 0;
}
void electronic_device::setter(){
    cout<<"enter the name of device"<<endl;
    cin>>name;
    cout<<"enter the price of device"<<endl;
    cin>>cost;
}
void printer::setprinter(){
       cout<<"enter the type of printer"<<endl;
     getline(cin,type);
}
void scanner::setscanner(){  
    cout<<"enter the size of scanner"<<endl;
    cin>>size;
}
void photocopy_machine::setph(){
    cout<<"enter the model no of photocopy machine";
    getline(cin,model_no);
    cin.ignore();
}
void photocopy_machine::getph(){
    cout<<"photocopy machine model no: "<<model_no<<endl;
}
void electronic_device::getter(){
    cout<<"electronic device"<<endl <<"name of product : "<<name<<endl<<"price : "<<cost<<endl;
}
void printer::getpr(){
    cout<<"Type of printer : "<<type<<endl;
}
void scanner::getsc(){
    cout<<"scaner size : "<<size<<endl;
}