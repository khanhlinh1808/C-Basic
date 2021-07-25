#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//using Linked List
//1. Define a struct Student with name, dob, scores of subjects
	struct Student 
	{
    	char name[100];
    	char DOB[100];
    	float score;
	};
	typedef struct Student student;
//2.Define a struct that is a dynamic array to store a list of students
	struct StudentNode
	{
		student s;
		struct StudentNode* snext;
	};
	typedef struct StudentNode snode; //bien snode su dung de lay gia tri
	typedef struct StudentNode* pnode; //bien pnode su dung de lay dia chi
//3.Define a function to init the array of students as empty
	pnode init(pnode A) //truyen vao tham so A - kieu du lieu con tro pnode
	{
		A = (pnode)malloc(0*sizeof(snode)); // cap bo nho cho A voi kich thuoc = 0 + ep kieu con tro pnode cho A
		return A;
	}
//4.Define a function to add a new student at the end of the array
	//tao hoc sinh
	pnode create(student stu) //truyen vao tham so stu, chua thong tin hoc sinh
	{
		pnode A;
		A = (pnode)malloc(sizeof(snode)); //cap bo nho cho A voi kich thuoc = gia tri cua snode 
		A->s = stu;
		A->snext =NULL;
		return A;
	}
	pnode add(pnode A, student stu)
	{
		pnode a = create(stu);
		A->snext = a; //a la bien cuoi cung trong danh sach hoc sinh A
		A = A; //gan gia tri cu cua A cho gia tri moi 
		//thuc hien nhap gia tri cua a
		a->snext = NULL; //a khong tro toi dia chi nao nua -> a la bien cuoi cung 
		strcpy((a->s.DOB),stu.DOB);
		a->s.score = stu.score;
		strcpy((a->s.name),stu.name);
		return A;
	}
//5.Define a function to search for a student with highest average score
	float highest(pnode A)
	{
		float highest_score=0;
		pnode p = A; //p chay doc mang dong A
		while(p!= NULL)
		{
			if (p->s.score > highest_score) highest_score = p->s.score;
			else highest_score = highest_score; 
			p = p->snext; //cho p chay tiep den vi tri tiep theo cua mang, den khi het thi thoi
		}
	return highest_score;
}
//6.Print out the list of student
	void display(pnode print)
	{
		pnode p = print; 
		while(p != NULL)
		{
			printf("name : %s dob: %s average score : %f \n",p->s.name,p->s.DOB,p->s.score);
			p = p->snext;
		}
	}	
