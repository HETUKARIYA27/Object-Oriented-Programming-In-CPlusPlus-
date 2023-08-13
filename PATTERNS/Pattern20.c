#include<stdio.h>
#include<conio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(i==j){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        for(int j=i;j<=4;j++){
            printf("  ");
        }
        for(int j=i;j<4;j++){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            if(j==1 && i!=5){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}