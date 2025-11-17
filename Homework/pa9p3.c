/*
 *FILENAME: pa9p3.c
 *PROJECT: Use of a pointer variable to manipulate an array
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: November 17th,2025
 *LAST MODIFIED: November 17th,2025
 *MODIFIED BY: Joey XU
 */
#include <stdio.h>
#define LEN 2 

int sum_two_dimensional_array(const int a[][LEN], int n){
    int i, sum = 0;
    const int *pointer_to_number = &a[0][0];
    for (i = 0; i < (n*2); i++){
        sum += *pointer_to_number;
        pointer_to_number++;
    }
    return sum;
}

int main(){ 
int N = 3; 
// A 3x2 array 
int arr[][2] = {{1, 2}, {3, 4}, {5, 6}}; 
// Call your function 
printf("The sum of the array = %d\n", sum_two_dimensional_array(arr, N)); 
return 0; 
} 