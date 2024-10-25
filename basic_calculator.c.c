

#include<stdio.h>
#include<math.h>
int main(){
   int a,b;
    int i=1;
    float f;
    int operation;
    int pow2,pow3;
    int sqrt1;
    float log1;
    int j=1;
    float x;
    float sinx;
    float cosx;
    int absolute_value ;
    

    
    printf("Welcome to the online calculator\n");
    while (i<=3)
    {
    printf("Choose the calculation you want to perform:\n");
    printf("1_'+'\n2_'-'\n3_'*'\n4_'/'\n5_'a^2'\n6_'a^3'\n7_'Square root'\n8_'log10'\n9_'log'\n10_'sinx'\n11_'cosx'\n12_'|a|'\n");
    scanf("%d",&operation);
    
  if (operation<1||operation>12)
  {
    printf("ERROR!!\n");
    printf("You must select a stop operation to be numbered here 1-7\n");
    continue;
  }
  

    switch (operation)
    {
    case 1 :printf("You choose the addition process\n");
             printf("Enter the numbers a:\nb:\n");
            scanf("%d%d",&a,&b);
            f=a+b;
            printf("the output =%d\n",f);
            break;

    case 2 :printf("You choose the subtraction process\n");
            printf("Enter the numbers a:\nb:\n");
            scanf("%d%d",&a,&b);
            f=a-b;
           printf("the output=%d\n",f);
           break;
    case 3: printf("You chose multiplication\n"); 
            printf("Enter the numbers a:\nb:\n");
            scanf("%d%d",&a,&b);
            f=a*b; 
            printf("the output =%d\n",f);
            break;  
    case 4: printf("You chose the division process\n");
             printf("Enter the numbers a:\nb:\n");
             scanf("%d%d",&a,&b);
    if (b==0)
    {
      printf("ERROR!\n");
      return;

    }
    else
             f=(float)a/b;
            printf("the output=%.2f\n",f);
            break;


    case 5:printf("You choose the quadratic operation of the number\n");
           printf("Enter the numebr a:\n");
           scanf("%d",&a);
           pow2=pow(a,2);
           printf("the quadratic of a =%d\n ",pow2);
           break;
    case 6:printf("You choose the cubic operation of the number\n");
           printf("Enter the number a:\n");
           scanf("%d",&a);
           pow3=pow(a,3);
           printf("the cubic of a =%d\n",pow3);
           break; 
   case 7:printf("You choose the square root operation of the number\n");
          printf("Enter the numebr a:\n");
          scanf("%d",&a);
          if (a>0)
          {
           sqrt1 =sqrt(a);
          printf("The Square root for a = %d\n",sqrt1);
           
          }
          else{
            printf("The root of this number does not exist\n");
            return;
          }
          break;
    case 8:printf("You chose the process of finding the natural logarithm to the exponent\n");
         while (j<=2 )
         {
          
         printf("Enter the number b:\n");
          scanf("%d",&b);
          if (b<0)
          {
             printf("ERROR!!\n");
             printf("The log10 for negative number does not exist \n");
            continue;
          }
          else
          {
            log1 =log10(b);
            printf("The log10 for b=%.3f\n",log1);
          }
         
          break;


       


         }
        break;

    case 9:printf("You chose the process of finding the logarithm of the Naberian number\n");
    while (j<=2)
    {
          printf("Enter the number of b :\n");
          scanf("%d",&b);

      if (b<0)
      {
        printf("ERROR!!\n");
        printf("the log for negative number does not exist\n");
        continue;
        
      }
           log1=log(b);
           printf("the log =%.3f\n",log1);
    }    
          break;

    case 10:printf("You chose the process of finding the sine of an angle\n");
           printf("Enter the angle (in radian):\n") ;
           scanf("%f",&x);
         sinx=sin(x);
         printf("the sin of x=%.3f\n",sinx);
         break;     
           
case 11:printf("You chose the process of finding the cos of an angle\n");
       printf("Enter the angle:\n");
       scanf("%f",&x);
       cosx =cos(x);
       printf("The cosx = %.3f\n",cosx);
       break;
case 12: printf("You choose to calculate the absolute value of the number\n");
        printf("Enter the number a:\n");
        scanf("%d",&a);
       absolute_value=fabs(a);
        printf(" The absolute value for |a|=%d\n",absolute_value);
        break;      

    default:
          printf("ERROR!\n");
          printf("Please select operation (+,-,*,/,a^2,a^3,)\n");
        break;
    }

   break;
    }
    printf("Thank you for choosing our program\n");
    return 0;


}