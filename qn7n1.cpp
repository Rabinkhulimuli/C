//lab7.1
#include <iostream>
using namespace std;
class tesla{
    private:
    int total_worker;
    public:
    void setter();
    friend int share(tesla ob);
};
class apple{
    private:
    int total_worker;
    public:
    void setinfo();
    friend int share(apple ob);
};
int main(){
    tesla obj;
    obj.setter();
    apple ob;
    ob.setinfo();
    cout<<"sum of total workers : "<<share(obj)+share(ob);
    return 0;
}
int share(tesla ob){
   return ob.total_worker;
}
int share(apple ob){
    return ob.total_worker;
}
void apple::setinfo(){
    cout<<"enter the total number of workers for apple company"<<endl;
    cin>>total_worker;
    cin.ignore();
}
void tesla::setter(){
    cout<<"enter the total number of workers for teala company"<<endl;
    cin>>total_worker;
    cin.ignore();
}
