#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Date
{
	int day;
	int month;
	int year;
};
typedef struct Date date;
//1. Define a struct Student with name, dob, scores of subjects
struct Student
{
	char name[100];
	date DOB;
	float score;
};
typedef struct Student student;
//2. Define a struct that is a dynamic array to store a list of students
struct StudentNode
{
	student s;
	struct StudentNode* next;
};
typedef StudentNode snode;
typedef StudentNode *pnode;
//3. Define a function to init the array of students as empty
pnode Init(pnode H)
{
	H = (pnode)malloc(sizeof(snode));
	return H;
}
pnode make_student(student st)
{
	pnode H;
	H = (pnode)malloc(sizeof(snode));
	H->s = st;
	H->next = NULL;
	return H;
}
pnode add_student(pnode H, student st)
{
	pnode a = make_student(st);
	H->next = a;
	H = H;
	a->next = NULL;
	a->s.DOB = st.DOB;
	a->s.score = st.score;
	strcpy((a->s.name), st.name);
	return H;
}
float Highest(pnode H)
{
	float highest = 0;
	pnode p = H;
	while(p != NULL)
	{
		if(p->s.score>highest)
		{
			highest = p->s.score;
		}
		else 
		{
			highest = highest;
			p = p->next;
		}
	}
	return highest;
}
void display(pnode stu)
{
	pnode p = stu;
	while(p!=NULL)
	{
		printf("Student's name is %s\n",p->s.name);
		printf("Student's score is %f\n",p->s.score);
		printf("Student's DOB is %d %d %d\n",p->s.DOB.day, p->s.DOB.month, p->s.DOB.year);
		p = p->next;
	}
}
main()
{
	pnode st;
	st = Init(st);
	student s1 = {"Do Thi Khanh Linh",{18, 8, 2000},2.5};
	student s2 = {"Nguyen Minh Quan",{25, 3, 2000},2.2};
	st = make_student(s1);
	st = add_student(st,s2);
	display(st);
	float high = Highest(st);
	printf("Highest score is %f belongs to %s",high,st->s.name);
}
