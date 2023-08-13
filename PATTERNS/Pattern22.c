#include<stdio.h>
#include<conio.h>
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==2 || j==2){
                printf("* ");
            }
            else if(j==0 && i<2){
                printf("* ");
            }
            else if(i>2 && j==4){
                printf("* ");
            }
            else if(j<2 && i==4){
                printf("* ");
            }
            else if(j>2 && i==0){
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