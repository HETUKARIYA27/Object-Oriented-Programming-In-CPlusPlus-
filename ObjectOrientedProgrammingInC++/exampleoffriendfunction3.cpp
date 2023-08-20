#include<iostream>
using namespace std;
class ooty;/*USED TO INFORM THE FRIEND FUNCTION THAT CLASS OOTY IS AFTER THE CLASS SHIMLA AND NAINITAL AS THIS WOULD AVOID ERRORS OF CLASS OOTY NOT EXISTING WHEN WE DECLARE FRIEND FUNCTION IN CLASS SHIMLA AND NAINITAL*/
class nainital;/*USED TO INFORM THE FRIEND FUNCTION THAT CLASS NAINITAL IS AFTER THE CLASS SHIMLA AS THIS WOULD AVOID ERRORS OF CLAS NAINITAL NOT EXISTING WHEN WE DECLARE FRIEND FUNCTION IN CLASS SHIMLA*/
class shimla{/*CLASS SHIMLA*/
    long int cost;
    public :/*MAKING EVERTHING AFTER VARIABLES PUBLIC*/
    shimla(long int cost){/*CONSTRUCTOR OF SHIMLA CLASS*/
        this->cost=cost;/*HELPS TO GIVE VALUE OF cost TO THE LONG INT VARIABLE cost*/
    }
    void show(){/*WE CAN DECLARE VOID SHOW 3 TIMES AS CLASSES ARE DIFFERENT*/
        cout<<"\nTHE COST OF STAYING IN SHIMLA IS:"<<cost;
    }
    friend void compare(shimla,nainital,ooty);/*HELPS TO COMPARE COST WITHOUT MAKING THE LONG INT COST PUBLIC TO OTHER CLASSES*/
    /*THE ORDER OF CLASSES USED IN COMPARE IS IMPORTANT THE FIRST CLASS SHOULD BE WRITTEN FIRST AND SECOND ON THE SECOND PLACE AND SO ON*/
};
class nainital{/*CLASS NAINITAL*/
   long int cost;
    public :/*MAKING EVERTHING AFTER VARIABLES PUBLIC*/
    nainital(long int cost){/*CONSTRUCTOR OF NAINITAL CLASS*/
        this->cost=cost;/*HELPS TO GIVE VALUE OF cost TO THE LONG INT VARIABLE cost*/
    } 
    void show(){/*WE CAN DECLARE VOID SHOW 3 TIMES AS CLASSES ARE DIFFERENT*/
        cout<<"\nTHE COST OF STAYING IN NAINITAL IS:"<<cost;
    }
    friend void compare(shimla,nainital,ooty);/*HELPS TO COMPARE COST WITHOUT MAKING THE LONG INT COST PUBLIC TO OTHER CLASSES*/
    /*THE ORDER OF CLASSES USED IN COMPARE IS IMPORTANT THE FIRST CLASS SHOULD BE WRITTEN FIRST AND SECOND ON THE SECOND PLACE AND SO ON*/
};
class ooty{/*CLASS OOTY*/
    long int cost;
    public :/*MAKING EVERTHING AFTER VARIABLES PUBLIC*/
    ooty(long int cost){/*CONSTRUCTOR OF OOTY CLASS*/
        this->cost=cost;/*HELPS TO GIVE VALUE OF cost TO THE LONG INT VARIABLE cost*/
    } 
    void show(){/*WE CAN DECLARE VOID SHOW 3 TIMES AS CLASSES ARE DIFFERENT*/
        cout<<"\nTHE COST OF STAYING IN OOTY IS:"<<cost;
    }
    friend void compare(shimla,nainital,ooty);/*HELPS TO COMPARE COST WITHOUT MAKING THE LONG INT COST PUBLIC TO OTHER CLASSES*/
/*THE ORDER OF CLASSES USED IN COMPARE IS IMPORTANT THE FIRST CLASS SHOULD BE WRITTEN FIRST AND SECOND ON THE SECOND PLACE AND SO ON*/
};
void compare(shimla a,nainital b,ooty c){/*COMPARISION TAKES PLACE OUTSIDE BOTH THE CLASSES*/
    if((a.cost<b.cost) && (a.cost<c.cost)){/*COMPARING COST OF SHIMLA,NAINITAL AND OOTY BY CALLING THEM BY OBJECTS a,b AND c*/
        cout<<"\nTHE COST OF LIVING IN SHIMLA IS LOWEST";
    }
    else if((b.cost<a.cost) && (b.cost<c.cost)){/*COMPARING COST OF SHIMLA,NAINITAL AND OOTY BY CALLING THEM BY OBJECTS a,b AND c*/
        cout<<"\nTHE COST OF LIVING IN NAINITAL IS LOWEST";
    }
    else{
        cout<<"\nTHE COST OF LIVING IN OOTY IS LOWEST";
    }
}
int main(){
    shimla a(50000);/*CREATING OBJECT a WITH COST 50000 CLASS SHIMLA*/
    nainital b(45000);/*CREATING OBJECT b WITH COST 45000 CLASS NAINITAL*/
    ooty c(30000);/*CREATING OBJECT c WITH COST 30000 CLASS OOTY*/
    a.show();/*CALLING THE FUNCTION SHOW BY OBJECT a*/
    b.show();/*CALLING THE FUNCTION SHOW BY OBJECT b*/
    c.show();/*CALLING THE FUNCTION SHOW BY OBJECT c*/
    compare(a,b,c);/*AS COMPARE IS OUT OF ALL THE CLASSES WE CAN CALL IT WITHOUT USING ANY OBJECT*/
    return 0;
}