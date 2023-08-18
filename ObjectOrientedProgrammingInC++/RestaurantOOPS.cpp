#include<iostream>
using namespace std;
class restaurant{
    int Bprice,Samprice,Sanprice,Piprice,Tprice,Cprice,Puprice,a,b,c,d,e,f,g,quantity,pforburger,pforsamosa,pforsandwich,pforpizza,pfortea,pforcoffee,pforpuff;
    float totalbill,totalprice,gst;
    public :
    restaurant(int Bprice,int Samprice,int Sanprice,int Piprice,int Tprice,int Cprice,int Puprice){
        this->Bprice=Bprice;
        this->Samprice=Samprice;
        this->Sanprice=Sanprice;
        this->Piprice=Piprice;
        this->Tprice=Tprice;
        this->Cprice=Cprice;
        this->Puprice=Puprice;
        quantity=0;
        totalprice=0;
        totalbill=0;
        pforburger=1;
        pforsamosa=1;
        pforsandwich=1;
        pforpizza=1;
        pfortea=1;
        pforcoffee=1;
        pforpuff=1;    
        a=0;
        b=0;
        c=0;
        d=0;
        e=0;
        f=0;
        g=0;
    }
    void bu(){
        cout<<"\nSELECT QUANTITY:";
        cin>>a;
        pforburger=pforburger*a*Bprice;
        totalprice=totalprice+pforburger;
        cout<<"\nTHE PRICE OF ORDERED BURGERS IS:"<<pforburger;
    }   
    void samo(){
        cout<<"\nSELECT QUANTITY:";
        cin>>b;
        pforsamosa=pforsamosa*b*Samprice;
        totalprice=totalprice+pforsamosa;
        cout<<"\nTHE PRICE OF ORDERED SAMOSAS IS:"<<pforsamosa;
    }
    void sand(){
        cout<<"\nSELECT QUANTITY:";
        cin>>c;
        pforsandwich=pforsandwich*c*Sanprice;
        totalprice=totalprice+pforsandwich;
        cout<<"\nTHE PRICE OF ORDERED SANDWICHES IS:"<<pforsandwich;
    }
    void piz(){
        cout<<"\nSELECT QUANTITY:";
        cin>>d;
        pforpizza=pforpizza*d*Piprice;
        totalprice=totalprice+pforpizza;
        cout<<"\nTHE PRICE OF THE ORDERED PIZZAS IS:"<<pforpizza;        
    }
    void te(){
        cout<<"\nSELECT QUANTITY:";
        cin>>e;
        pfortea=pfortea*e*Tprice;
        totalprice=totalprice+pfortea;
        cout<<"\nTHE PRICE OF THE ORDERED TEAS IS:"<<pfortea;
    }
    void co(){
        cout<<"\nSELECT QUANTITY:";
        cin>>f;
        pforcoffee=pforcoffee*f*Cprice;
        totalprice=totalprice+pforcoffee;
        cout<<"\nTHE PRICE OF THE ORDERED COFFEES IS:"<<pforcoffee;
    }
    void pu(){
        cout<<"\nSELECT QUANTITY:";  
        cin>>g;      
        pforpuff=pforpuff*g*Puprice;
        totalprice=totalprice+Puprice;
        cout<<"\nTHE PRICE OF ORDERED PUFFS IS:"<<pforpuff;        
    }
    void quant(){
        quantity=quantity+a+b+c+d+e+f+g;
        cout<<"\nTOTAL QUANTITY IS:"<<quantity;
    }
    void total(){
        cout<<"\nTHE TOTAL BILL WITHOUT GST IS:"<<totalprice;
    }
    void totalwithgst(){
        cout<<"\nENTER THE GST AMOUNT:";
        cin>>gst;
        totalbill=totalprice+totalprice*(gst/100);
        cout<<"\nTHE TOTAL BILL WITH GST IS:"<<totalbill;
    }
    void menu(){
        cout<<"\nTHE MENU IS:";
        cout<<"\nTHE BURGER PRICE IS:"<<Bprice;
        cout<<"\nTHE SAMOSA PRICE IS:"<<Samprice;
        cout<<"\nTHE SANDWICH PRICE IS:"<<Sanprice;
        cout<<"\nTHE PIZZA PRICE IS:"<<Piprice;
        cout<<"\nTHE TEA PRICE IS:"<<Tprice;
        cout<<"\nTHE COFFEE PRICE IS:"<<Cprice;
        cout<<"\nTHE PUFF PRICE IS:"<<Puprice;
    }
};
int  main(){
    int ch;
    restaurant r1(100,60,200,240,10,40,20);
    while(ch!=11){
        cout<<"\n\nHK RESTAURANT";
        cout<<"\nWELCME TO HK RESTAURANT";
        cout<<"\nENTER 0 TO VIEW MENU";
        cout<<"\nENTER 1 TO BUY BURGER";
        cout<<"\nENTER 2 TO BUY SAMOSA";
        cout<<"\nENTER 3 TO BUY SANDWICH";
        cout<<"\nENTER 4 TO BUY PIZZA";
        cout<<"\nENTER 5 TO BUY TEA";
        cout<<"\nENTER 6 TO BUY COFFEE";
        cout<<"\nENTER 7 TO BUY PUFF";
        cout<<"\nENTER 8 TO VIEW TOTAL AMOUNT OF ITEMS BOUGHT";
        cout<<"\nENTER 9 to VIEW TOTAL BILL WITHOUT GST";
        cout<<"\nENTER 10 TO VIEW TOTAL BILL WITH GST";
        cout<<"\nENTER 11 TO EXIT";
        cin>>ch;
        if(ch==0){
            r1.menu();
        }
        else if(ch==1){
            r1.bu();
        }
        else if(ch==2){
            r1.samo();
        }    
        else if(ch==3){
            r1.sand();
        }
        else if(ch==4){
            r1.piz();
        }
        else if(ch==5){
            r1.te();
        }
        else if(ch==6){
            r1.co();
        }
        else if(ch==7){
            r1.pu();
        }
        else if(ch==8){
            r1.quant();
        }    
        else if(ch==9){
            r1.total();
        }
        else if(ch==10){
            r1.totalwithgst();
        }
    }
    return 0;
}