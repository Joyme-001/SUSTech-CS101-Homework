//DeepSeek taught me by which way of casting I can cacluate the change in location.
//It is by change the type of the int pointer to the charchter pointer, then we can do the arithmetic.

/*
 *FILENAME: pa10p2.c
 *PROJECT: Pointer Arithmetic
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: November 24th,2025
 *LAST MODIFIED: November 24th,2025
 *MODIFIED BY: Joey XU
 */

 #include <stdio.h> 
 
int main( ) 
{ 
int value = 3; 
int *ip = &value;
int *ip1 = &value; 
 
printf("ip is initially at %p.\n", ip); 
printf("The integer at ip is %d.\n", *ip); 
 
/* Pointer arithmetic - see what ip + 1 is */ 
int* ip2;
ip2 = ip1 + 1; 
printf("ip+1 is %p.\n", ip2);
printf("The address in ip has changed by %lld.\n",(char*)ip2-(char*)ip1); //Noticed by the compiler that it is longlongint.

/* do the same for double */
double dval = 3.14159;
double *dp = &dval;
double *dp1 = &dval;
printf("dp is initially at %p.\n", dp);
printf("The double at dp is %f.\n", *dp);
/* Pointer arithmetic - see what dp + 1 is */
double *dp2 = dp1 + 1;
printf("dp+1 is: %p\n", dp2);
printf("The address in dp has changed by %lld.\n",(char*)dp2 - (char*)dp1);
return 0; 
} 