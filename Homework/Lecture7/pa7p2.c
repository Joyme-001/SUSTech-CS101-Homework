/*
 *FILENAME: pa7p2.c
 *PROJECT: Bubble sorting with function 
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: October 27th,2025
 *LAST MODIFIED: October 29th,2025
 *MODIFIED BY: Joey XU
 */

#include <stdio.h>

void bubble_sort(int a[], int n){
    int i, j, temp, sorted;
    i = n;
    sorted = 0;
    while ((i > 1) && (!sorted)) {

        sorted=1;   
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
}

int main(){

    int k, l;
    int array1[5] = {0};
    int array2[10] = {0};

    // Array 1
    printf("Input the n=5 array:");
    for(k=0;k<5;k++){
        scanf("%d",&array1[k]);
    }

    printf("\n");

    printf("The array1 before sorting is:\n");

    for(k=0;k<5;k++){
        printf("%d ",array1[k]);
    }

    bubble_sort(array1,5);

    printf("\nThe array1 after sorting is:\n");

    for(k=0;k<5;k++){
        printf("%d ",array1[k]);
    }

    printf("\n");

    // Array 2
    printf("Input the n=10 array: ");
    for(l=0;l<10;l++){
        scanf("%d",&array2[l]);
    }

    printf("\nThe array2 before sorting is:\n");

    for(l=0;l<10;l++){
        printf("%d ",array2[l]);
    }

    bubble_sort(array2,10);

    printf("\nThe array2 after sorting is:\n");

    for(l=0;l<10;l++){
        printf("%d ",array2[l]);
    }

    return 0;
}

