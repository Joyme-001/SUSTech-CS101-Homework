/*
 *FILENAME: pa3p2.c
 *PROJECT: Circle perimeter and area calculation
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: September 22,2025
 *LAST MODIFIED: September 22,2025
 *MODIFIED BY: Joey XU
 */
 #include <stdio.h>
 
 #define PI 3.1415926

 int main()
 {
    float r;
    float perimeter;
    float area;
    printf("input the value of radius r:\n");
    scanf("%f",&r);
    perimeter=2*PI*r;
    area=PI*r*r;
    printf("perimeter=%.2f\n",perimeter);
    printf("area=%.2f\n",area);
    return 0;
 }
 