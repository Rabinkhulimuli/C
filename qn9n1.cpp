//lab 9.1
#include <iostream>
using namespace std;
class math{
    private:
    int x;
    public:
    math();
    math(int);
    void setter();
    void getter();
    friend float operator /(math,math);
};
int main(){
    math one(5),two(10);
    float result;
    result=one/two;
    cout<<"result of division is : "<<result<<endl;
    return 0;
}
math::math(){
    x=1;
}
math::math(int x){
    this->x =x;
}
void math::setter(){
    cout<<"enter two integer resp"<<endl;
    cin>>x;
}
void math::getter(){
    cout<<"your first variable : "<<x<<endl;
}
float operator / (math ob,math obj){
    return ((float)ob.x/obj.x);
}