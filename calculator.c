#include <stdio.h>

int main() {
    int n1, n2, result;
    printf("Enter two numbers:");
    scanf("%d %d", &n1, &n2);
    char op;
    printf("Enter operator:");
    scanf(" %c", &op);
    switch(op){
        case '+':
          result= n1+n2;
          break;
        case '-':
          result= n1-n2;
          break;
        case '*':
          result= n1*n2;
          break;
        case '/':
          result= n1/n2;
          break;
        case '%':
          result= n1%n2;
          break;
        default:
          printf("Invalid operator\n");
          result=0;
    }
    printf("Result: %d\n", result);
    return 0;
}
