#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "LinkedStack.h"


int main(int argc, char *argv[])
{
	return 0;
}
/*
-- stack main
void DisplayLinkedStack(LinkedStack* pStack)
{
	StackNode* pNode = NULL;
	int i=1;

	if(pStack != NULL)
	{
		printf("현재 노드 수:%d \n", pStack->currentElemenetCount);

		pNode = pStack->pTopElement;

		while(pNode != NULL)
		{
			printf("[%d] --- [%c]\n", pStack->currentElemenetCount-i, pNode->data);

			i++;

			pNode = pNode->pLink;
		}
	}
}



int main(int argc, char *argv[])
{
	LinkedStack *pStack = NULL;
	StackNode *pNode = NULL;

	pStack = CreateLinkedStack();

	if(pStack != NULL)
	{
		StackNode node1 = {'A'};
		StackNode node2 = {'B'};
		StackNode node3 = {'C'};
		StackNode node4 = {'D'};
		StackNode node5 = {'E'};

		Push(pStack, node1);
		Push(pStack, node2);
		Push(pStack, node3);
		Push(pStack, node4);
		Push(pStack, node5);

		DisplayLinkedStack(pStack);
	}

	// pop
	pNode = Pop(pStack);
	if(pNode != NULL)
	{
		printf("Pop - [%c]\n", pNode->data);
		free(pNode);
	}
	else
		printf("Pop-NULL");

		DisplayLinkedStack(pStack);

	// peek
	pNode = Peek(pStack);
	if(pNode != NULL)
	{
		printf("Peek - [%c]\n", pNode->data);
		free(pNode);
	}
	else
		printf("Peek-NULL");

		DisplayLinkedStack(pStack);


}

*/