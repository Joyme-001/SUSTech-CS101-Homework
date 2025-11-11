//For some comments,with the help of ChatGPT

/*
 *FILENAME: pa6p1.c
 *PROJECT: Calculating the minimum, maximum, and average of a list of numbers
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: October 20th,2025
 *LAST MODIFIED: October 24th,2025
 *MODIFIED BY: Joey XU
 */

#include <stdio.h>
#define N 10

int main(){
    int a[N], i, j;
    int max, min, sum;
    float average;
    sum = 0;

    printf("Enter %d integer numbers: ",N);
    for(i=0; i < N;i++){
        scanf("%d",&a[i]);
    }
    //Input N numbers from user and store them in array a
        
        max=a[0];
        min=a[0];   //Let the origen max and min to be the first one, and channge during the program

    for(j=0; j < N;j++){
        
        if(a[j]>=max){
            max=a[j];
        }
        if(a[j]<=min){
            min=a[j];
        }
        sum = sum + a[j];
    }
    //Calculate max, min and sum of the numbers
    average = (float)sum/N;
    printf("Max: %d\n",max);
    printf("Min: %d\n",min);
    printf("Average: %.2f\n",average);
    return 0;
}