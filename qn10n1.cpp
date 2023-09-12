//lab 10.1
#include <iostream>
using namespace std;
template <class t>
class swapp{
    private:
    t x;
    t y;
    public:
    swapp(){  }
    swapp(t x, t y){
        this->x=x;
        this->y=y;
    }
    t swapper(){
        swapp ob;
        ob.x=y;
        ob.y=x;
        x=ob.x;
        y=ob.y;
        cout<<"swapping completed"<<endl;
        return x;
    }
   void setter(){
     cout<<"enter two entity "<<endl;
    cin>>x>>y;
   }
   void getter(){
    cout<<"x : "<<x<<"\t"<<"y : "<<y<<endl;
   } 
};
int main(){
    swapp <int> obj(2,5);
    swapp <float> ob(5.5,10.10);
    swapp <char> obc('A','a');
       obj.getter();
       obj.swapper();
       obj.getter();
       ob.getter();
       ob.swapper();
       ob.getter();
       obc.getter();
       obc.swapper();
       obc.getter();
    return 0;
}