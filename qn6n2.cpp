//lab assignment 6.2
#include <iostream>
#include<string>
using namespace std;
class vehicle{
    protected:
    string color;
    string model_number;
    int price;
    public:
    void setter();
    void getter();
};
class car:public vehicle{
    private:
    string brake_type;
    public:
    void carinfo();
    void setcar();

};
class boat:public vehicle{
    private:
    int density;
    public:
    void setboat();
    void boatinfo();
};
class aeroplane:public vehicle{
    private:
    int no_propeller;
    public:
    void setplane();
    void planeinfo();
};
int main(){
    boat bt;
    bt.setboat();
    bt.boatinfo();
    car cr;
    cr.setcar();
    cr.carinfo();
    aeroplane ar;
    ar.setplane();
    ar.planeinfo();

    return 0;
}
void vehicle::setter(){
    cout<<"enter the color of your vechile"<<endl;
    getline(cin,color);
    cout<<"model number"<<endl;
    getline(cin,model_number);
    cout<<"price"<<endl;
    cin>>price;
    cin.ignore();
}
void vehicle::getter(){
    cout<<"color :"<<color<<endl<<"model number :"<<model_number<<endl<<"Price"<<price<<endl;
}
void car::setcar(){
    setter();
    cout<<"enter the brake type"<<endl;
    getline(cin, brake_type);
    cin.ignore();
}
void car::carinfo(){
    getter();
    cout<<"brake type :"<<brake_type<<endl;
}
void boat::setboat(){
    setter();
    cout<<"enter density of boat"<<endl;
    cin>>density;
    cin.ignore();
}
void boat::boatinfo(){
    getter();
    cout<<"density of boat :"<<density<<endl;
}
void aeroplane::setplane(){
    setter();
    cout<<"enter number of propeller"<<endl;
    cin>>no_propeller;
    cin.ignore();
}
void aeroplane::planeinfo(){
    getter();
    cout<<"propeller :"<<no_propeller;
}