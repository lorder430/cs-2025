/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    FILE* fp;

    int a[] = {0, 1, 2};
    char b[] = "ABC";
    float c[] = {1.1, 1.2, 1.3};
    
    int a_read[3];
    char b_read[4]; 
    float c_read[3];

    fp = fopen("a.bin", "wb+");
    if (fp == NULL) return 1;
    
    fwrite(a, sizeof(a), 1, fp);
    fseek(fp, 0, SEEK_SET);
    fread(a_read , sizeof(a_read), 1, fp);
    fclose(fp);
    
    fp = fopen("a.bin", "wb+");
    if (fp == NULL) return 1;
    
    fwrite(b, sizeof(b), 1, fp); 
    fseek(fp, 0, SEEK_SET);
    fread(b_read, sizeof(b_read), 1, fp);
    fclose(fp);

    fp = fopen("a.bin", "wb+");
    if (fp == NULL) return 1;
    
    fwrite(c, sizeof(c), 1, fp);
    fseek(fp, 0, SEEK_SET);
    fread(c_read, sizeof(c_read), 1, fp);
    fclose(fp);

    printf("%d %d %d\n", a_read[0], a_read[1], a_read[2]);
    
    printf("%c %c %c\n", b_read[0], b_read[1], b_read[2]);

    printf("%f %f %f\n", c_read[0], c_read[1], c_read[2]);
    
    return 0;
}
