//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.

int main()
{
   int i,n,num,pos=0,neg=0;
 
  printf("please enter the numbers:");
   scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
 	printf("enter the number:%d\n",i);
 	scanf("%d",&num);
 	if(num>0)
 	{
 		pos++;
 		
	 }
	 else if(num<0){
	 	neg++;
	 }
	
 }
  printf("the total number of positive are: %d\n",pos);
	 printf("the total number of negative are: %d",neg);
  return 0;
}
