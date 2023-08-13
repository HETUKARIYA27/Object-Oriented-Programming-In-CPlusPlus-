#include<stdio.h>
#include<conio.h>
int main(){
    int n=5,p=5;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("  ");
        }
        for(int j=1;j<=n;j++){
            printf(" %c",j+64);
        }
        n--;
        for(int j=p-1;j>=1;j--){
            printf(" %c",j+64);
        }
        p--;
        printf("\n");
    }
    return 0;
}