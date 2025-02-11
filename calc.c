#include<stdio.h>
#include<math.h>  
int main()
{ 
    int n1; int n2; 
    int n; 
    label:
    l:
 printf("\n-------------------------------\n");
 printf("Welcome to the calculator\n\n");
 printf("Choose one of the following operations:\nPress 1 to Add\nPress 2 to Subtract\nPress 3 to Multiply\nPress 4 to Divide\nPress 5 to Modulus\nPress 6 to Power\nPress 7 to Exit\n" );
 scanf("%d",& n); 
 
 if (n==7)
 {
  return 0;  
 }
 else if(n<1 || n>7)
 {
    printf("Invalid argument\n");
    goto l;
 }

 //taking the two numbers 
 printf("Enter the first number\n");
 scanf("%d",& n1); 
 printf("Enter the second number\n");
 scanf("%d", &n2); 
 
 
    switch(n)
    {
    case 1:
       printf("Result of the operation is %.2f\n" , (float)n1+n2);
       break;

    case 2:
        printf("Result of the operation is %.2f\n" , (float)n1-n2);
        break;

    case 3:
       printf("Result of the operation is %.2f\n" , (float)n1*n2);
       break;

    case 4:
       printf("Result of the operation is %.2f\n", (float)n1/n2);
       break;
       
    case 5:
       printf("Result of the operation is %d\n", (int)n1 % (int)n2); 
       break;

    case 6:
       printf("Result of the operation is %.2f\n", (float)pow(n1,n2));
       break;
 }
 
 goto label;
   
  
 return 0; 
}