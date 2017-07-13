/*
Author: Amr Abdeen
About: Stack using Linked List 
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Linked list Basic node structure
struct SNode{
	int m_data;
	struct SNode* m_link;
};

//prototype of Stack Functions 
void push(int data);
void pop();
void printStack();

//Global Pointer for Stack top
struct SNode* top_PTR = NULL;

int main() {
	printf("How many numbers you want to insert in the list:");
	int n,i,x;
	char choose;
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		printf("Enter the numbers:");
		fflush(stdin); fflush(stdout);
		scanf("%d",&x);
		push(x);
	}
	printStack();
	do {
	    printf("Press Y to start deleting Elements or any other letter to exit\n");
	    fflush(stdin); fflush(stdout);
	    scanf("%c",&choose);
	    if (choose=='Y' || choose=='y') pop();
	    else exit(1);
	    printStack();
	}   while(1);
}

//Pushing data at the beginning of the list (LIFO)
void push(int data){
	struct SNode* node_PTR=(struct SNode*)malloc(sizeof(struct SNode));
	node_PTR->m_data= data;
	node_PTR->m_link=top_PTR;
	top_PTR=node_PTR;
}

//delete an Element
void pop(){
struct SNode *pop=top_PTR;
//printf("The address of pop is : %x and top_PTR is : %x \n",pop,top_PTR);
if(top_PTR == NULL) printf("Empty list.Nothing to be deleted!");
top_PTR=pop->m_link;
free(pop);
}

// Print Stack Elements
void printStack(){
	struct SNode* temp = top_PTR;
	int i=0;
	printf("List: ");
	while(temp != NULL){
		printf("this is the %d element : %d \n",i+1,temp->m_data);
		i++;
		temp=temp->m_link;
	}
}
