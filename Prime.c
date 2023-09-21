#include <stdio.h>
int main() {
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(i%n==0)
            printf("Not Prime");
        else
            printf("Prime");
    }
}
