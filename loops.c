#include <stdio.h>
#include <conio.h>
int main()
{
    int array[20],n,i;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    printf("enter the array inputs:\n");
    //forloop:---
    //input
    for(i=0;i<n;i++)
    {
    scanf("%d",&array[i]);
    }
//     //display
//     printf("the array elements are:\n");
//      for(i=0;i<n;i++)
//     {
//     printf("%d \n",array[i]);
//     }

    //reversing array elements
//     printf("the reverse element are:\n");
//    for ( i = n-1; i>=0 ; i--)
//    {
//     printf("%d \n",array[i]);
//    }

//while loop:----
// printf("displaying array elements using while loop:\n");
i=0;
//    while(i<n)
//    {
// printf("%d \n",array[i]);
// i++;
//    }


//dowhile loop:-----
   printf("displaying array elements using do while loop:\n");
   do
   {
   printf("%d \n",array[i]);
   i++;
   } while (i<n);

   

    return 0;
    
}

