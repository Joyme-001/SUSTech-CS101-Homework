//Use the deepseek to test my program.

/*
 *FILENAME: pa11p2.c
 *PROJECT: Date Comparison 
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: December 1st,2025
 *LAST MODIFIED: December 1st,2025
 *MODIFIED BY: Joey XU
 */

 #include <stdio.h>

 //structure
struct date { 
int month; 
int day; 
int year; 
}; 

//function
int compareDates(struct date d1, struct date d2);
//main function
int main(void){

    struct date date1, date2;
    //Input
    printf("//Input the day, month and year of the two dates, in that order//\n");
    printf("Input the first date:\n");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    printf("Input the second date:\n");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    int result_number = compareDates(date1, date2);
    //Output
    if (result_number == -1){
        printf("The first date is earlier than the second date.\n");
    }else if (result_number == 1){
        printf("The first date is later than the second date.\n");
    }else{
        printf("The two dates are the same.\n");
    }
    return 0;
}

int compareDates(struct date d1, struct date d2){
    // First we compare the year
    if(d1.year < d2.year){
        return -1;
    }
    else if(d1.year > d2.year){
        return 1;
    }
    else {
        // Same year, we compare the month
        if(d1.month < d2.month){
            return -1;
        }
        else if(d1.month > d2.month){
            return 1;
        }
        else {
            // Same year and month, we compare the day
            if(d1.day < d2.day){
                return -1;
            }
            else if(d1.day > d2.day){
                return 1;
            }
            else {
                return 0;
            }
        }
    }
}