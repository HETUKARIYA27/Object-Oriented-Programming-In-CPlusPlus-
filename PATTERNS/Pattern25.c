#include<stdio.h>
#include<conio.h>
int main(){
    int n=4;
    for(int i=1;i<=2*n-1;i++){
        if(i<=4){
            for(int space=1;space<=n-i;space++){
                printf("  ");
            }
        }
        else{
            for(int space=i-n;space>=1;space--){
                printf("  ");
            }
        }
        if(i<=4){
            for(int j=i;j>=1;j--){
                printf(" %d",j);
            }
            for(int j=2;j<=i;j++){
                printf(" %d",j);
            }
        }
        else{
            for(int j=2*n-i;j>=1;j--){
                printf(" %d",j);
            }
            for(int j=2;j<=2*n-i;j++){
                printf(" %d",j);
            }
        }
        printf("\n");
    }
    return 0;
}