#include <stdio.h>

int main()
{
    int i = 1;
    i = i++ << 2+3 << --i;
    printf("i = %d\n",i);
   
    
    return 0;
}
