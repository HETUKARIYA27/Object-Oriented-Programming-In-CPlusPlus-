#include<iostream>
using namespace std;
class triangle;/*USED TO INFORM THE FRIEND FUNCTION THAT CLASS TRIANGLE IS AFTER THE CLASS CIRCLE AS THIS WOULD AVOID ERRORS OF CLASS TRIANGLE NOT EXISTING WHEN WE DECLARE FRIEND FUNCTION IN CLASS CIRCLE*/
class circle{/*CLASS CIRCLE*/
float rad,pi,area;
public :/*MAKING EVERTHING AFTER VARIABLES PUBLIC*/
circle(float rad){/*CONSTRUCTOR OF CIRCLE CLASS*/
    this->rad=rad;/*HELPS TO GIVE VALUE OF rad TO THE FLOAT VARIABLE rad*/
    pi=3.14;/*DEFINING pi AS 3.14*/
}
void show(){/*WE CAN DECLARE VOID SHOW 2 TIMES AS CLASSES ARE DIFFERENT*/
    cout<<"\nRADIUS IS:"<<rad;
    area=pi*rad*rad;
    cout<<"\nTHE AREA IS:"<<area;
}
friend void compare(circle,triangle);/*HELPS TO COMPARE AREAS WITHOUT MAKING THE FLOAT AREA PUBLIC TO OTHER CLASSES*/
};
class triangle{/*CLASS TRIANGLE*/
    float base,height,area;
    public :
    triangle(float base,float height){/*CONSTRUCTOR OF CLASS TRIANGLE*/
        this->base=base;
        this->height=height;
    }
    void show(){/*WE CAN DECLARE VOID SHOW 2 TIMES AS CLASSES ARE DIFFERENT*/
        cout<<"\nBASE:"<<base;
        cout<<"\nHEIGHT:"<<height;
        area=0.5*base*height;
        cout<<"\nAREA OF TRIANGLE:"<<area;
    }
    friend void compare(circle,triangle);/*HELPS TO COMPARE AREAS WITHOUT MAKING THE FLOAT AREA PUBLIC TO OTHER CLASSES*/
    /*THE ORDER OF CLASSES USED IN COMPARE IS IMPORTANT THE FIRST CLASS SHOULD BE WRITTEN FIRST AND SECOND ON THE SECOND PLACE*/
};
void compare(circle c,triangle t){/*COMPARISION TAKES PLACE OUTSIDE BOTH THE CLASSES*/
    if(c.area>t.area){/*COMPARING AREAS OF CIRCLE AND TRIANGLE BY CALLING THEM BY OBJECTS c AND t*/
        cout<<"\nAREA OF CIRCLE IS GREATER THAN AREA OF TRIANGLE";
    }
    else if(c.area==t.area){/*COMPARING AREAS OF CIRCLE AND TRIANGLE BY CALLING THEM BY OBJECTS c AND t*/
        cout<<"\nAREA OF BOTH CIRCLE AND TRIANGLE ARE SAME";
    }
    else{
        cout<<"\nAREA OF TRIANGLE IS GREATER THAN AREA OF CIRCLE";
    }
}
int main(){
    circle c(10);/*CREATING OBJECT c WITH RADIUS 10 FOR CLASS CIRCLE*/
    triangle t(10,20);/*CREATING OBJECT t WITH BASE 10 AND HEIGHT 20 FOR CLASS TRIANGLE*/
    c.show();/*CALLING THE FUNCTION SHOW BY OBJECT c*/
    t.show();/*CALLING THE FUNCTION SHOW BY OBJECT t*/
    compare(c,t);/*AS COMPARE IS OUT OF BOTH THE CLASSES WE CAN CALL IT WITHOUT USING ANY OBJECT*/
    return 0;
}