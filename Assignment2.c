//A number is said to be valid if it is divisible by 8. Write a program that allows the user to keep entering numbers as long as the input is valid and also displays a count of the valid numbers. Use a while loop to complete the task

int main() 
{
  int num,count=0;
 printf("please enter a number:\n");
 scanf("%d",&num);
 
 while(num!=0)
 {
 	if(num%8==0)
 	{
 		count++;
 		printf("\nthe total number of count of valid number are:%d\n ",count);
 		printf("enter another number:");
	 scanf("%d",&num);
	 
	 }
	 else
	 {
	 	printf("\n");
	 	printf("%d is not divisible by 8!!\n",num);
	 		printf("\nthe total number of count of valid number are:%d!! ",count);
		 break;	
	 }
	 
 }
  return 0;
}
