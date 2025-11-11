//For some commments, with the help of ChatGPT
/*
 *FILENAME: pa4p2.c
 *PROJECT: Prime numbers with C for and while loops
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: September 29,2025
 *LAST MODIFIED: September 29,2025
 *MODIFIED BY: Joey XU
 */

 #include<stdio.h>
 int main ()
 {
    int n,m;
 for (n = 100; n <= 200; n++) {  //Outside loop to check n from 100 t0 200
    int is_prime = 1;  //if a n is prime is_prime=1, else is_prime=0
     //Inside loop to check if each n is prime
    for (m = 2; m < n; m++) { //m is th divider
         //If n can be divided by m, then n is not a prime number
        if (n % m == 0) {
            is_prime = 0;
            break;
        }
    }//end of inside loop
     //Output result in the end of outside loop
    if (is_prime) {
        printf("%d is a prime number\n", n);
    }
}
}
 