#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NUMBER 40
//Define a struct Student with name, dob, scores of subjects
struct Student
{
	char name[100];
	long int DOB;
	float score;
};
typedef Student student;
//Define a struct that is a dynamic array to store a list of students
struct StudentList
{
	int snumber;
	student sl[MAX_NUMBER];
};
typedef StudentList slist;
//Define a function to init the array of students as empty
slist* Init(slist* sl)
{
	sl = (slist*)malloc(sizeof(slist));
	sl->snumber = 0;
}
//Define a function to add a new student at the end of the array
void Add(student s, slist* sl)
{
	if(sl->snumber<MAX_NUMBER)
	{
		strcpy((char*)sl->sl[sl->snumber].name,s.name);
		sl->sl[sl->snumber].DOB = s.DOB;
		sl->sl[sl->snumber].score = s.score;
		sl->snumber = sl->snumber + 1;
	}
}
//Define a function to search for a student with highest average score
student search(slist* sl)
{
	float highest = 0.0;
	int id = -1;
	for(int i = 0; i< sl->snumber; i++)
	{
		if(sl->sl[i].score > highest)
		{
			highest = sl->sl[i].score;
			id = i;
		}
	}
	return sl->sl[id];
}
//Define a function to print out the screen the list of students
void Print(slist* sl)
{
	for(int i = 0; i< sl->snumber; i++)
	{
		printf("Student %d ",i+1);
		printf("Name: %s \t",sl->sl[i].name);
		printf("DOB: %ld \t",sl->sl[i].DOB);
		printf("Score: %f \t",sl->sl[i].score);
		printf("\n");
	}
}
main()
{
	slist* mylist;
	mylist = Init(mylist);
	printf("List has %d student\n",mylist->snumber);
	//student s1,s2;
	student s1 = {"Khanh Linh",18082000,2.5};
	student s2 = {"Minh Quan", 25032000, 2.4};
	Add(s1, mylist);
	Add(s2, mylist);
	printf("Now list has %d student\n",mylist->snumber);
	Print(mylist);
	student s3 = search(mylist);
	printf("Student %s highest score is %f \n",s3.name,s3.score);
}
