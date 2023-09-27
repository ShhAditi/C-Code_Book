#include <stdio.h>

void main() {
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    fac(n);
}

int fac(int n){
    int res=1;
    for(int i=n;i>=1;i--){
        res=res*i;
    }
    printf("Factorial is: %d",res);
    
    return 0;
}
