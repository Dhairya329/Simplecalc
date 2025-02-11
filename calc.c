#include<stdio.h>
#include<math.h>  
int main()
{ 
    int n1; int n2; 
    int n; 
    label:

 printf("\n-------------------------------\n");
 printf("Welcome to the calculator\n\n");
 printf("Choose one of the following operations:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n6. Power\n7. Exit\n" );
 scanf("%d",& n); 
 
 if(n>=7)
 {
  return 0;  
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
       printf("Result of the operation is %d\n", n1%n2); 
       break;

    case 6:
       printf("Result of the operation is %.2f\n", (float)pow(n1,n2));
       break;
 }
 
 goto label;
   
  
 return 0; 
}