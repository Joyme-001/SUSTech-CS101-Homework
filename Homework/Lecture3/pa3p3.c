/*
 *FILENAME: pa3p3.c
 *PROJECT: Triangle area calculation
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: September 22,2025
 *LAST MODIFIED: September 22,2025
 *MODIFIED BY: Joey XU
 */
 #include<stdio.h>
 #include<math.h>  //To use sqrt function

 int main()
 {
    printf("Please  provide the lengths of three sides of a triangle:\n");
    float a;
    float b;
    float c;
    float s;
    float area;
//define the variables
//a,b,c are the lengths of three sides of a triangle
//area is the area of the triangle
    scanf("%f,%f,%f",&a,&b,&c);  //input and read the lengths

    s=(a+b+c)/2;

    area=sqrt(s*(s-a)*(s-b)*(s-c));  //calculate the area of the triangle

    printf("the area of the traingle is:%.4f\n",area);  //print the area of it

    return 0;
 }
