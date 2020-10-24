#include<stdio.h>
int main()
{
    int Age;
    printf("Enter your age: ");
    scanf("%d",&Age);

    


    if (Age<=18)
    {
      if (Age==12)
      {
          printf("you are a child");
      }
      else
      {
          printf("you are a baby");
      }
      
      

    }
    else
    {
        printf("you are old");
    }
    
    
   
    
    
    return 0;
}
