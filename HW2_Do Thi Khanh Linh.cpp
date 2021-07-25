#include <stdio.h>
int main()
{
//1. Convert days to years, weeks, days. 
	//Enter number of days
	int day;
	int no_of_years, no_of_weeks, no_of_days;
	printf("Please enter the number of days \n");
	scanf("%d",&day);
	//conversion
	no_of_years = day/365;
	no_of_weeks = (day - 365*no_of_years)/7;
	no_of_days = day - 365*no_of_years - 7*no_of_weeks;
	//print out the converted result
	printf("We have %d days is about %d years, %d weeks and %d days",day,no_of_years, no_of_weeks, no_of_days);
	
//2. Read an amount (integer value) and break the amount into smallest possible number of bank notes
	//possible number of bank notes (000 vnd): 500, 200, 100, 50, 20, 10, 5, 2, 1.
	
	//	no_of_500 = amount/500;
	//	no_of_200 = (amount - 500*no_of_500)/200;
	//........
	//	no_of_1 = amount - 500*no_of_500 - 200*no_of_200 - 100*no_of_100 - 50*no_of_50 - 20*no_of_20 - 10*no_of_10 - 5*no_of_5 - 2*no_of_2;
	
	int amount;
	int count;
	printf("Please enter an amount in .000vnd\n");
	scanf("%d",&amount);
	//Calculate the number of 500k bank notes
	count = amount/500;
	printf("%d is \n",amount);
	printf("%d of 500\t \t",count);
	//Calculate the number of 200k bank notes
	amount = amount - (count*500);
	count = amount/200;
	printf("%d of 200\t \t",count);
	//Calculate the number of 100k bank notes
	amount = amount - (count*200);
	count = amount/100;
	printf("%d of 100\t \t",count);
	//Calculate the number of 50k bank notes
	amount = amount - (count*100);
	count = amount/50;
	printf("%d of 50\t \t",count);
	//Calculate the number of 20k bank notes
	amount = amount - (count*50);
	count = amount/20;
	printf("%d of 20\t \t",count);
	//Calculate the number of 10k bank notes
	amount = amount - (count*20);
	count = amount/10;
	printf("%d of 10\t \t",count);
	//Calculate the number of 5k bank notes
	amount = amount - (count*10);
	count = amount/5;
	printf("%d of 5\t \t",count);
	//Calculate the number of 2k bank notes
	amount = amount - (count*5);
	count = amount/2;
	printf("%d of 2\t \t",count);
	//Calculate the number of 1k bank notes
	amount = amount - (count*2);
	count = amount;
	printf("%d of 1\t \t",count);	
	
//3. Convert a given integer (in seconds) to hours, minutes and seconds
	int sec,time;
	printf("Please enter the number of seconds \n");
	scanf("%d",&sec);
	printf("%d seconds is equal to \n",sec);
	//convert to hours
	time = sec/3600;
	printf("%d hours \t\t",time);
	//convert to minutes
	sec = sec - 3600*time;
	time = sec/60;
	printf("%d minutes \t\t",time);
	//convert to seconds
	sec = sec - 60*time;
	time = sec;
	printf("%d seconds",time);

//4. read 5 numbers and sum of all odd values between them
	int arr[5];
	int sum = 0;
	//read 5 numbers
	printf("Please enter all 5 numbers \n");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("This is all your 5 numbers \n");
	for(int i=0; i<5; i++)
	{
		printf("%d \t",arr[i]);
	}
	//calculates the sum of all odd values
	printf("\nThe sum of all odd values is \n");
	for(int i=0; i<5; i++)
	{
		if(arr[i]%2!=0)
		{
			sum = sum + arr[i];
		}
	}
	printf("%d",sum);
return 0;
}
