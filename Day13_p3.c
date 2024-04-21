#include<stdio.h>
#include<stdlib.h>

int main()
{
int goals;
printf("Enter the numbers of goals scored against India\n");
scanf("%d",&goals);
if(goals<=5)
goto sos;
else
{
printf("About time soccer players learnt C\n");
printf("And said goodbye to soccer\n");
exit(1);/*terminates program execution*/
}
sos:
printf("to err the human\n");
return 0;
}
