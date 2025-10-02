#include <stdio.h>

int main()
{
    int i = 2;
    if (i % 15 == 0){
        printf("Love Iu");
    }
    else if (i % 5 ==0){
        printf("Iu");
    }
    else {
        printf("%d\n", i);
    }
    return 0;
}

