#include<iostream>
using namespace std;
class test;/*USED TO INFORM THE FRIEND FUNCTION THAT CLASS TEST IS AFTER THE CLASS ONEDAY AS THIS WOULD AVOID ERRORS OF CLASS TEST NOT EXISTING WHEN WE DECLARE FRIEND FUNCTION IN CLASS ONEDAY*/
class t20;/*USED TO INFORM THE FRIEND FUNCTION THAT CLASS T20 IS AFTER THE CLASS ONEDAY AND CLASS TEST AS THIS WOULD AVOID ERRORS OF CLASS T20 NOT EXISTING WHEN WE DECLARE FRIEND FUNCTION IN CLASS ONEDAY AND TEST*/
class oneday{/*CLASS ONEDAY*/
    int runs;
    public :/*MAKING EVERTHING AFTER VARIABLES PUBLIC*/
    oneday(int runs){/*CONSTRUCTOR OF ONEDAY CLASS*/
        this->runs=runs;/*HELPS TO GIVE VALUE OF runs TO THE INT VARIABLE runs*/
    }
    void show(){/*WE CAN DECLARE VOID SHOW 3 TIMES AS CLASSES ARE DIFFERENT*/
        cout<<"\nTOTAL RUNS IN OND DAY FORMAT ARE:"<<runs;
    }
    friend void compare(oneday,test,t20);/*HELPS TO COMPARE RUNS WITHOUT MAKING THE INT RUNS PUBLIC TO OTHER CLASSES*/
    /*THE ORDER OF CLASSES USED IN COMPARE IS IMPORTANT THE FIRST CLASS SHOULD BE WRITTEN FIRST AND SECOND ON THE SECOND PLACE AND SO ON*/
};
class test{/*CLASS TEST*/
    int runs;
    public :/*MAKING EVERTHING AFTER VARIABLES PUBLIC*/
    test(int runs){/*CONSTRUCTOR OF TEST CLASS*/
        this->runs=runs;/*HELPS TO GIVE VALUE OF runs TO THE INT VARIABLE runs*/
    }
    void show(){/*WE CAN DECLARE VOID SHOW 3 TIMES AS CLASSES ARE DIFFERENT*/
        cout<<"\nTOTAL RUNS IN TEST FORMAT ARE:"<<runs;
    }
    friend void compare(oneday,test,t20);/*HELPS TO COMPARE RUNS WITHOUT MAKING THE INT RUNS PUBLIC TO OTHER CLASSES*/
    /*THE ORDER OF CLASSES USED IN COMPARE IS IMPORTANT THE FIRST CLASS SHOULD BE WRITTEN FIRST AND SECOND ON THE SECOND PLACE AND SO ON*/
};
class t20{/*CLASS T20*/
    int runs;
    public :/*MAKING EVERTHING AFTER VARIABLES PUBLIC*/
    t20(int runs){/*CONSTRUCTOR OF T20 CLASS*/
        this->runs=runs;/*HELPS TO GIVE VALUE OF runs TO THE INT VARIABLE runs*/
    }
    void show(){/*WE CAN DECLARE VOID SHOW 3 TIMES AS CLASSES ARE DIFFERENT*/
        cout<<"\nTOTAL RUNS IN THE T20 FORMAT ARE:"<<runs;
    }
    friend void compare(oneday,test,t20);/*HELPS TO COMPARE RUNS WITHOUT MAKING THE INT RUNS PUBLIC TO OTHER CLASSES*/
    /*THE ORDER OF CLASSES USED IN COMPARE IS IMPORTANT THE FIRST CLASS SHOULD BE WRITTEN FIRST AND SECOND ON THE SECOND PLACE AND SO ON*/
};
void compare(oneday a,test b,t20 c){/*COMPARISION TAKES PLACE OUTSIDE BOTH THE CLASSES*/
    if((a.runs>b.runs) && (a.runs>c.runs)){/*COMPARING RUNS OF ONEDAY,TEST AND T20 BY CALLING THEM BY OBJECTS a,b AND c*/
        cout<<"\nRUNS IN ONEDAY FORMAT ARE MAXIMUM";
    }
    else if((b.runs>a.runs) && (b.runs>c.runs)){/*COMPARING RUNS OF ONEDAY,TEST AND T20 BY CALLING THEM BY OBJECTS a,b AND c*/
        cout<<"\nRUNS IN TEST FORMAT ARE MAXIMUM";
    }
    else if((a.runs==b.runs) && (b.runs==c.runs) && (a.runs==b.runs)){/*COMPARING AREAS OF ONEDAY,TEST AND T20 BY CALLING THEM BY OBJECTS a,b AND c*/
        cout<<"\nALL THE FORMATS HAVE SAME RUNS";
    }
    else{
        cout<<"\nRUNS IN T20 FORMAT ARE MAXIMUM";
    }
}
int main(){
    oneday a(400);/*CREATING OBJECT a WITH RUNS 400 FOR CLASS ONEDAY*/
    test b(650);/*CREATING OBJECT b WITH RUNS 650 FOR CLASS TEST*/
    t20 c(220);/*CREATING OBJECT c WITH RUNS 220 FOR CLASS T20*/
    a.show();/*CALLING THE FUNCTION SHOW BY OBJECT a*/
    b.show();/*CALLING THE FUNCTION SHOW BY OBJECT b*/
    c.show();/*CALLING THE FUNCTION SHOW BY OBJECT c*/
    compare(a,b,c);/*AS COMPARE IS OUT OF ALL THE CLASSES WE CAN CALL IT WITHOUT USING ANY OBJECT*/
    return 0;
}