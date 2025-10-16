#include <stdio.h>

int recursion(int n){
    if(n==0) return 0;
    printf("%d\n",n);
    recursion(n-1);
}

int main()
{
    recursion(5);
    return 0;
    
}
