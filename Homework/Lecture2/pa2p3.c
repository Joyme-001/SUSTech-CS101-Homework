/*
 *FILENAME: pa2p3.c
 *PROJECT: Compound arithmetic operations in C
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: September 15,2025
 *LAST MODIFIED: September 15,2025
 *MODIFIED BY: Joey XU
 */

#include <stdio.h>
int main(void)
{   int sum,diff,product,division,modulus,j;
    int i =78;
    j=56;
    sum=(i+=j);
    i=78;
    j=56;
    diff=(i-=j);
    i=78;
    j=56;
    product=(i*=j);
    i=78;
    j=56;
    division=(i/=j);
    i=78;
    j=56;
    modulus=(i%=j);
    printf("sum=%d\n",sum);
    printf("diff=%d\n",diff);
    printf("product=%d\n",product);
    printf("division=%d\n",division);
    printf("modulus=%d\n",modulus);
    return 0;
}