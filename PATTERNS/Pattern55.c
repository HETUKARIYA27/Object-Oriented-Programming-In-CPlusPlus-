#include<stdio.h>
#include<conio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n+1;j++){
            printf("  ");
        }
        for(int j=1;j<i;j++){
            if(j==1 || i==5){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        for(int j=1;j<=i;j++){
            if(i==j || j==1 || i==5){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i+2;j++){
            printf("  ");
        }
        for(int j=i;j<n-1;j++){
            if(i==j){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        for(int j=i;j<n;j++){
            if(j==4 || i==j){
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