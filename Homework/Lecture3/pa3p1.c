//For some repeated sentences,I write with the help of Copilot.

/*
 *FILENAME: pa3p1.c
 *PROJECT: Size of C different types
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: September 22,2025
 *LAST MODIFIED: September 22,2025
 *MODIFIED BY: Joey XU
 */
# include <stdio.h>

int main() 
{ 
    int sa;
    int sb;
    int sc;
    int sd;
    int se;
    int sf;
//sx means the size of x
    char a;
    int b;
    short c;
    long d;
    float e;
    double f;
//define different types of variables
    sa = sizeof(a);
    sb = sizeof(b);
    sc = sizeof(c);
    sd = sizeof(d);
    se = sizeof(e);
    sf = sizeof(f);
//calculate the size of them
    printf("Size of a C char is: %d (bytes).\n", sa);
    printf("Size of a C int is: %d (bytes).\n", sb);
    printf("Size of a C short is: %d (bytes).\n", sc);
    printf("Size of a C long is: %d (bytes).\n", sd);
    printf("Size of a C float is: %d (bytes).\n", se);
    printf("Size of a C double is: %d (bytes).\n", sf);
//print the size of them
    return 0;
}