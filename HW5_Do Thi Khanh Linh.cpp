#include <stdio.h>
#include <stdlib.h>
//1. Define a struct Student with name, dob, scores of subjects
struct Student {
    char name[100];
    char DOB[100];
    float score;
};

void Empty(Student *stu, int N)
{
	stu = (struct Student*)calloc(N,sizeof(struct Student));
	printf("The empty student list is : \n"); 
	for(i = 0; i<N;i++)
	{
		printf("%d. %s %s %f\n",i+1,(stu+i)->name,(stu+i)->DOB,(stu+i)->score);		
	}
} 
main()
{
	struct Student sv = {"Do Thi Khanh Linh","18082000",2.75};
	printf("student's name is %s \n",sv.name);
	printf("student's DOB is %s \n",sv.DOB);
	printf("student's score is %lf \n",sv.score);
//2.Define a struct that is a dynamic array to store a list of students
//	struct Student *stu;
//	int i,N;
//	printf("How many student's data u want to store ?\n");
//	scanf("%d",&N);
//	//dynamic array 
//	stu = (struct Student*)malloc(N * sizeof(struct Student));
//	for(i = 0; i<N;i++)
//	{
//		printf("Enter student's name, DOB and score respectively \n ");
//		scanf("%s %s %f",(stu+i)->name,(stu+i)->DOB,&(stu+i)->score);		
//	}
//	printf("student's name, DOB and score respectively is \n ");
//	for(i = 0; i<N;i++)
// 	{
//		printf("%d. %s %s %f\n",i+1,(stu+i)->name,(stu+i)->DOB,(stu+i)->score);		
//	}

//3.Define a function to init the array of students as empty
//	stu = (struct Student*)calloc(N,sizeof(struct Student));
//	printf("The empty student list is : \n"); 
//	for(i = 0; i<N;i++)
//	{
//		printf("%d. %s %s %f\n",i+1,(stu+i)->name,(stu+i)->DOB,(stu+i)->score);		
//	}
//4.Define a function to add a new student at the end of the array
	printf("Do you want to add a new student, enter 1 for yes and 0 for no\n");
	int ans;
	scanf("%d",&ans);
	if (ans == 0) printf("Exit program \n");
	if (ans == 1)
	{
		stu = (struct Student*)malloc((N+1) * sizeof(struct Student));
		N = N+1;
		printf("Enter student's name, DOB and score respectively \n ");
		scanf("%s %s %f",(stu+(N+1))->name,(stu+(N+1))->DOB,&(stu+(N+1))->score);
		printf("New student's name, DOB and score respectively is \n ");
		printf("%s %s %f\n",(stu+(N+1))->name,(stu+(N+1))->DOB,(stu+(N+1))->score);
		fflush(stdin);
		printf("New list is \n ");
		for(i = 0; i<N; i++)
		{
			printf("%d. %s %s %f\n",i+1,(stu+i)->name,(stu+i)->DOB,(stu+i)->score);		
		}
	}
	//5.Define a function to search for a student with highest average score
	float max = stu->score;
	for(i=0;i<N;i++)
	{
		if (max < (stu+i)->score) max = (stu+i)->score;
	}
	printf("Highest score is %f \n",max);
	//6.Print out the list of student
	for(i=0;i<N;i++)
	{
			printf("%d. %s %s %f\n",i+1,(stu+i)->name,(stu+i)->DOB,(stu+i)->score);
	}
}


#include <stdio.h>
#include <stdlib.h>
//1. Define a struct Student with name, dob, scores of subjects
	struct student {
    char name[100];
    char DOB[100];
    float score;
	};
//2.Define a struct that is a dynamic array to store a list of students
	struct StudentList
	{
		int n;
		struct Student *stu;
		stu = (struct Student*)malloc(N * sizeof(struct Student));
	}
//3.Define a function to init the array of students as empty
	typedef StudentList Sl;
	Sl* int(Sl* s)
	{
		s->n = 0;
		s->stu = NULL;
		return s;
	}
//4.Define a function to add a new student at the end of the array
	Sl* add(Sl*s, struct student *as)
	{
		s -> n++;
		s->stu = (struct student*)malloc(1*sizeof(s->stu));
		strcpy(s->stu->name, as->name);
		s->stu->DOB = as->DOB;
		s->stu->score = as->score;
		return s;
	}
//5.Define a function to search for a student with highest average score
	struct student* highest(sl *s)
	{
		float max = 0;
		struct student *ptr;
		s -> n; //(*s).n
		for (int i=0;i<(s->n);i++)
		{
			if(max < s->stu[i].score) 
			max = s->stu[i].score;
			ptr = &s->stu[i];
		}	
		return ptr;
	}
//6.Print out the list of student
	void printout(sl *s)
	{
		struct student *ptr;
		s -> n; //(*s).n
		for (int i=0;i<(s->n);i++)
		{
			printf("New student's name, DOB and score respectively is \n ");
			printf("%s %s %f\n",s->stu[i].name,s->stu[i].>DOB,s->stu[i].score);
		}
	}
