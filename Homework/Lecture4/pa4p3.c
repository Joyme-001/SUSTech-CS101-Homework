/*
 *FILENAME: pa4p3.c
 *PROJECT: Numerical approximation of 𝒆𝒙 
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: September 29,2025
 *LAST MODIFIED: September 29,2025
 *MODIFIED BY: Joey XU
 */

# include <stdio.h> 
/* Programming Assignment No. 4, Part 3
   This C program computes an approximation of e^x using 
   the first n terms of its Taylor series expansion. 
*/ 
int main() { 
        int i;     // for loop counters 
        int n, nfact; // order of the series and n! 
        float x, ex;  // ex = e^x 
        float xtoi;   // variable to store x^i 
 
        printf("Input n: "); 
        scanf("%d", &n); 
        printf("Input x: "); 
        scanf("%f", &x); 
 
        ex = 1; 

        nfact =1;

        xtoi =1;
 
        for(i=1; i<n; i++) { 

        nfact=nfact*i;

        xtoi=xtoi*x;

        ex=ex+xtoi/nfact;
    
        } 
        printf("e^%-5.2f is approximately: %f.\n", x, ex);  
        // %-4.2f: left justified, four digit
        return 0;
      }