//declare a LinkListed 
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Node
{
	int value; //Student s; string str;
	struct Node* next;
};
typedef struct Node sNode;
typedef sNode* pNode;
int n;
pNode makeNode(int v)
{
	pNode l;
	l = (pNode)malloc(sizeof(sNode));
	l->value = v;
	l->next = NULL;
	return l;
}
pNode insert(pNode H, int v)
{
	pNode p = makeNode(v);
	p->next = H;
	H = p;
	return H;
}
void display(pNode H)
{
	pNode p = H;
	while(p != NULL)
	{
		printf("%d\t",p->value);
		p = p->next;
	}
}
pNode search(pNode ll, int val)
{
	pNode ptr = ll;
	while (ptr->value != val) ptr = ptr->next;
	return ptr;
}
int main()
{
	pNode l=NULL; //a LinkListed
	//initialize as NULL 
	//l->value = 0;
	//l->next = NULL;
	//l = NULL;
	//make a node 
	//insert(l,2);
	
	//scanf("%d", &n);
	n = 10;
	for(int i = 1; i <= n; i+=2) {
		l = insert(l, i);
	}
	display(l);
	printf("%d\n", search(l, 5)->value);
}
