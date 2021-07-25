#include <stdio.h>
main()
{
	float x;
	printf("Enter x\n");
	scanf("%f",&x);
	if(x!=.0) printf("Value of 1/x = %f",1/x);
	else 
	{
		printf("There is no value \n");
	}
	int i1 = 8, i2 = 9, i3;
	i3 = i1 > i2 ? i1:i2 ;//exp ? exp1:exp2
	printf("i3 = %d \n",i3);
	
	//switch case 
	int grade; 
	printf("Enter the value of grade \n");
	scanf("%d",&grade);
	switch(grade)
	{
		case 4:
			printf("You are excellent \n");
			break;
		case 3:
			printf("Good \n");
			break;
		case 2:
			printf("Quite good\n");
			break;
		case 1:
			printf("U have to try harder\n");
			break;	
		default:
			printf("Please enter again \n");
			break;	
	}	
	//while statement: Print out all even interger smaller than 100 
	{
		int x = 0;
		while(x<100)
		{
			if(x%2==0)
			printf("%d \t",x);
			x++;
		}	
	}
}
