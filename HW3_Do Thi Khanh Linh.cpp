#include<stdio.h>
//1.Check letter whether is consonant or vowel
void Check(char ch)
{
	if(ch == 'a' ||ch == 'e' || ch == 'u' || ch == 'i'||ch == 'o') 
	{
		printf("The letter u have just entered is vowel");
	}
	else printf("The letter u have just entered is consonant");
}
main()
{
	char letter;
	printf("Please enter a random letter \n");
	scanf("%c",&letter);
	Check(letter);
}

//2.Calculate S = 1/2+1/4+...+1/100
main()
{
	float Sum;
	for(int i=2;i<=100;i=i+2)
	{
		Sum = Sum + (float)1/i;
	}
	printf("Sum the inverse even numbers from 2 to 100 is %f \n",Sum);
}

//3.Print to the screen a menu and read the user's choice using branch commands
void Menu()
{
	printf("This is Class Schedule Manager \n\n");
	printf("1. Lookup based on Subject \n");
	printf("2. Lookup based on Weekdays \n");
	printf("3. Take an overview of your own schedule \n");	
	printf("*********************\n\n");
}
main()
{
	Menu();
	int option;
	printf("Please enter a number of your option\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1: 
		printf("\nPlease choose your subject and fill this link with your subject\nhttp://check.sch.SubjectName");
		break;
		case 2: 
		printf("\nPlease choose your weekday and fill this link with your weekdays\n http://check.sch.WeekDay");
		break;
		case 3: 
		printf("\nPlease go to our school website and check it with your student ID");
		break;
		default:
		printf("\nWrong number entered, please choose again between 1,2 and 3");
		break;
	}
}
//4.Count total zeros and ones in a binary number
main()
{
    long num, decimal_num, remainder, base = 1, binary = 0, no_of_1s = 0,no_of_0s = 0;
 
    printf("Enter a decimal integer \n");
    scanf("%ld", &num);
    decimal_num = num;
    while (num > 0)
    {
        remainder = num % 2;
        /*  To count no.of 1s */
        if (remainder == 1)
        {
            no_of_1s++;
        }
        else no_of_0s++;
        binary = binary + remainder * base;
        num = num / 2;
        base = base * 10;
    }
    printf("Binary equivalent of %d is = %ld\n", decimal_num,binary);
    printf("No.of 1's in the binary number is = %d\n", no_of_1s);
}
