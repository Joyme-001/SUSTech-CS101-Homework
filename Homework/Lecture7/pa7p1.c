//For the repeated statements, with the help of ChatGPT.

/*
 *FILENAME: pa7p1.c
 *PROJECT: Practice wiyhh using a two dimension array 
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: October 27th,2025
 *LAST MODIFIED: October 29th,2025
 *MODIFIED BY: Joey XU
 */

 #include <stdio.h>

 int main(){

    int i, j, k, l, m;   //Loop counters

    int array[5][5] = {0};//Array declaration

    int sum_row[5] = {0};

    int sum_column[5] = {0};

    for( i=0 ; i < 5 ;i++){
        printf("Enter row %d: ", i + 1 );   //Print the five rows
        for( j=0 ; j < 5 ; j++){
            scanf("%d",&array[i][j]);   //Read every coolumn
            sum_row[i] += array[i][j];   //Calculate the sum of every row
        }
    }

    for( k = 0 ; k < 5 ; k++){
        for( l = 0 ; l < 5 ; l++){
            sum_column[k] += array[l][k];   //Calculate the sum of every column
        }
    }

    printf("Row totals:");

    for( l = 0 ; l < 5 ; l++){
        printf(" %d",sum_row[l]);   //Print the sum of every row
    }

    printf("\n");

    printf("Column totals:");

    for( m = 0 ; m < 5 ; m++){
        printf(" %d",sum_column[m]);   //Print the sum of every column
    }

    return 0;
 }