#include<stdio.h>
#include<conio.h>
int main(){
    int p=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf(" %d",p%2);
            p++;
        }
        printf("\n");
    }
    return 0;
}