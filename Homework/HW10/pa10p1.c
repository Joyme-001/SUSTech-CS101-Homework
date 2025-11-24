/*
 *FILENAME: pa10p1.c
 *PROJECT: Addresses of C Local Variables
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: November 24th,2025
 *LAST MODIFIED: November 24th,2025
 *MODIFIED BY: Joey XU
 */

 /*
 *Observe the outputs in the two experiments and explain (in the header comment section) how you think C compiler allocates memory for and initialize local variables.
 *The Answer:
 *I observed the output to the two experiment and find in each cases the x and y are stored in the SAME memory location.
 *When foo1() is called, it allocates space for 'x' on the memory and gives x the value7 in the content 
 *When foo1() returns, the location is set for free
 *When foo2() is called immediately after, it allocates space for 'y' in the 
 *SAME memory location that was just freed from foo1() and gives y the value11 in the content
 *The memory is reused, which is why we see identical addresses
 */

#include<stdio.h>
void foo1(int xval) { 
int x; 
x = xval; 
int* ptrx = &x;
/* print the address and value of x here */ 
printf("The address of x is %p and the value of x is %d\n",ptrx,x);
} 
void foo2(int dummy) { 
int y; 
y = dummy;
int* ptry = &y;
/* print the address and value of y here */ 
printf("The address of y is %p and the value of y is %d\n",ptry,y);
} 
int main() { 
foo1(7);     
foo2(11);    
return 0; 
} 