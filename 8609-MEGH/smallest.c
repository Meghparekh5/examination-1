#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter value of a= ");
    scanf("%d",&a);
    printf("Enter value of b= ");
    scanf("%d",&b);
    printf("Enter value of c= ");
    scanf("%d",&c); 
    if(a<b)
    {
        if(a<c)
        {
            printf("a is smallest");
        }
        else
        {
            printf("c is smallest");
        }
        
    }
    else
    {
        printf("b is smallest");
    }
       
   
}