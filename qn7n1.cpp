//lab7.1
#include <iostream>
using namespace std;
class apple;
class tesla{
    private:
    int total_worker;
    public:
    void setter();
    friend int share(tesla ob, apple obj);
};
class apple{
    private:
    int total_worker;
    public:
    void setinfo();
    friend int share(tesla ,apple);
};
int main(){
    tesla obj;
    obj.setter();
    apple ob;
    ob.setinfo();
    cout<<"sum of total workers : "<<share(obj,ob);
    return 0;
}
int share(tesla ob,apple obj){
   return ob.total_worker +obj.total_worker;
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