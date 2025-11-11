/*
 *FILENAME: pa6p2.c
 *PROJECT: Bubble Sorting 
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: October 20th,2025
 *LAST MODIFIED: October 25th,2025
 *MODIFIED BY: Joey XU
 */
 
#include<stdio.h>

#define N 10

int main(){
    int a[N];
    int i, j, sorted, temp;
    sorted=0;

    printf("Enter %d integer numbers: ",N);
    for(i=0; i < N;i++){
        scanf("%d",&a[i]);
    }
    //Input N numbers from user and store them in array a
    i = N;
    while ((i > 1) && (!sorted)) {    //sorted is 1, the numbers sorted, then we skip it for effciencity.

        sorted=1;   //If if never right,then sorted is 1,which means the array of numbers are sorted.

        for(j=1; j<i; j++) { 
            if(a[j-1] > a[j]) { 
                temp = a[j-1]; 
            a[j-1] = a[j]; 
            a[j] = temp; 
            sorted=0;
            } 
        } 
        i--; 
    } 

    printf("The sorted array of numbers are:");

    for(i=0; i < N;i++){
        printf(" %d ",a[i]);
    }
    
return 0;

}

