#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "LinkedStack.h"

LinkedStack* CreateLinkedStack()
{
	LinkedStack* pReturn = NULL;
	
	pReturn = (LinkedStack*) malloc (sizeof(LinkedStack));

	if(pReturn != NULL)
		memset(pReturn, 0, sizeof(LinkedStack));
	else
	{
		printf(" 메모리 할당 오류: CreateLinkedStack()");
		return NULL;
	}
	return pReturn;
}

int Push(LinkedStack* pStack, StackNode element)
{
	int ret = FALSE;
	StackNode *pNode = NULL;

	if(pStack != NULL)
	{
		pNode = (StackNode*) malloc (sizeof(StackNode));

		if(pNode != NULL)
		{
			memset(pNode, 0, sizeof(StackNode));

			*pNode = element;
			
			pNode->pLink = pStack->pTopElement;
			pStack->pTopElement = pNode;

			pStack->currentElemenetCount++;

			ret = TRUE;
		}
	}
	else
		printf("메모리 할당 오류: Push()");

	return ret;
}

StackNode* Pop(LinkedStack* pStack)
{
	StackNode* pReturn = NULL;
	
	if(pStack != NULL)
	{
		if(isLinkedStackFull(pStack) == FALSE)
		{
			pReturn = pStack->pTopElement;

			pStack->pTopElement = pReturn->pLink;

			pReturn = NULL;
			
			pStack->currentElemenetCount--;
		}
	}

	return pReturn;
}

StackNode* Peek(LinkedStack* pStack)
{
	StackNode* pReturn = NULL;

	if(pStack != NULL)
	{ 
		if(isLinkedStackEmpty(pStack) != FALSE)
			pReturn = pStack->pTopElement;
		
	}

	return pReturn;
}

void DeleteLinkedStack(LinkedStack* pStack)
{
	StackNode* pNode = NULL;
	StackNode* pDelNode = NULL;

	if(pStack != NULL)
	{
		pNode = pStack->pTopElement;

		while(pNode != NULL)
		{
			pDelNode = pNode;
			pNode = pNode->pLink;

			free(pDelNode);
		}
	}
}

int isLinkedStackFull(LinkedStack* pStack)
{
	int ret = FALSE;

	return ret;
}

int isLinkedStackEmpty(LinkedStack* pStack)
{
	int ret = FALSE;	
	
	if(pStack != NULL)
	{
		if(pStack->currentElemenetCount ==0)
			ret = TRUE;
	}
	return ret;
}









