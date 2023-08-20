#include<iostream>
using namespace std;
class circle{
    float rad,area,pi;
    public :
    circle(float rad){
        this->rad=rad;
        pi=3.14;
    }
    void a(){
        cout<<"\nTHE RADIUS IS:"<<rad;
        area=pi*rad*rad;
        cout<<"\nTHE AREA IS:"<<area;
    }
    void compare(circle a1,circle a2){
        if(a1.area>a2.area){
            cout<<"\nFIRST CIRCLE HAS LARGER AREA";
        }
        else if(a1.area==a2.area){
            cout<<"\nBOTH THE CIRCLES HAVE SAME AREA";
        }
        else{
            cout<<"\nSECOND CIRCLE HAS LARGER AREA";
        }
    }
};
int main(){
    circle a1(5);
    circle a2(4);
    circle c(0);
    a1.a();
    a2.a();
    c.compare(a1,a2);
    return 0;
}