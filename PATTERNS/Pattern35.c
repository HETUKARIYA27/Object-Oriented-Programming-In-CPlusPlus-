#include<stdio.h>
#include<conio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            if(j==1 || i==j || i==5){
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