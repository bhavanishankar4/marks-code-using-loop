#include <stdio.h>
int main()
{
   int i,marks [6];
   printf("enter six subject marks  ");
   
   for (i=0;i<6;i++)
   {
       scanf("%d",&marks[i]);
   }
   
   printf("subject 1 marks : %d\n",marks[0]);
   printf("subject 2 marks : %d\n",marks[1]);
   printf("subject 3 marks : %d\n",marks[2]);
   printf("subject 4 marks : %d\n",marks[3]);
   printf("subject 5 marks : %d\n",marks[4]);
   printf("subject 6 marks : %d\n",marks[5]);
   
  return 0;
}