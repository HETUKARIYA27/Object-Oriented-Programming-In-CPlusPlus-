#include<stdio.h>
#include<conio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=i;j<=5;j++){
            if(j==5){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        for(int j=1;j<i;j++){
            printf("  ");
        }
        for(int j=1;j<i-1;j++){
            printf("  ");
        }
        for(int j=i;j<=5;j++){
            if(i==j  && j!=1){
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