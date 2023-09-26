#include <stdio.h>

int main() {
    int n1,n2;
    printf("Enter numbers:");
    scanf("%d %d",&n1, &n2);
    for(int i=n1;i>=0;i--){
        if(n1%i==0 && n2%i==0){
            printf("GCD: %d",i);
            break;
        }
    }

    return 0;
}
