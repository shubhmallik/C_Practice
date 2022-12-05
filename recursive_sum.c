#include <stdio.h>

int recSum(int n){
    if (n<=1)
    {
       return n;
    }
    else
    {
     return n + recSum(n-1);
    }
}

int main(){
int n;
printf("enter the number\n");
scanf("%d", &n);
printf("The number is %d\n", recSum(n));

return 0;
}
