/*
 *FILENAME: pa2p2.c
 *PROJECT: Arithmic Operations
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: September 15,2025
 *LAST MODIFIED: September 15,2025
 *MODIFIED BY: Joey XU
 */

/*The Answer of part 1
 *(a):
 *1010,1000000000,10000000001
 *(b):
 *30,93
 */

#include <stdio.h>
int main(void)
{   int sum,diff,product,division;
    int j ;
    int i =78;
    j=56;
    sum=i+j;
    diff=i-j;
    product=i*j;
    division=i/j;//As the book said, the answer is ''truncated'': all digits after the decimal point are lost. 
    printf("sum=%d\n",sum);
    printf("diff=%d\n",diff);
    printf("product=%d\n",product);
    printf("division=%d\n",division);
    return 0;
}