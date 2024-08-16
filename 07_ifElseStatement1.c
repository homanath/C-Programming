// wop to determine whether a student has passed or failed. To pass, a student required a total of 40% and
// at least 33% in each subjest. assume there are three subject and take the marks as the input from the user.
#include <stdio.h>

int main()
{
   int mark1, mark2, mark3;
   printf("Enter the marks: \n\n");
   printf("Enter the marks of first subject: ");
   scanf("%d", &mark1);
   printf("Enter the marks of second subject: ");
   scanf("%d", &mark2);
   printf("Enter the marks of third subject: ");
   scanf("%d", &mark3);

   if (mark1 < 33 || mark2 < 33 || mark3 < 33)
   {
      printf("YOu are failed.");
   }
   else if ((mark1 + mark2 + mark3) / 3 < 40)
   {
      printf("You are failed");
   }
   else
   {
      printf(" You are passed");
   }
   return 0;
}
