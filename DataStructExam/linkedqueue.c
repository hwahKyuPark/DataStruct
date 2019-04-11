#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedqueue.h"

LinkedQueue* createLinkedQueue()
{
	LinkedQueue* pReturn = NULL;
	int i=0;

	pReturn = (LinkedQueue*)malloc(sizeof(LinkedQueue));

	if(pReturn != NULL)
		memset(pReturn, 0, sizeof(LinkedQueue));
	else
		printf("메모리 할당 오류  createLinkedQueue()");
	
	return pReturn;
}

int enqueue(LinkedQueue* pQueue, QueueNode element)
{
	int ret = FALSE;
	QueueNode* pNode = NULL;

	if(pQueue != NULL)
	{
		pNode = (QueueNode*) malloc (sizeof(QueueNode));

		if(pNode != NULL)
		{
			*pNode = element;
			pNode->pLink = NULL;

			if(isLinkedQueueEmpty(pQueue) == TRUE)
			{
				pQueue->pFrontNode = pNode;
				pQueue->pRealNode = pNode;
			}
			else
			{
				pQueue->pRealNode->pLink = pNode;
				pQueue->pRealNode = pNode;
			}
				pQueue->currentElementCount++;
				ret = TRUE;
		}
	}
	return ret;
}

QueueNode* dequeue(LinkedQueue* pQueue)
{
	QueueNode* pReturn = NULL;

	if(pQueue != NULL)
	{
		if(isLinkedQueueEmpty(pQueue) == FALSE)
		{
			pReturn = pQueue ->pFrontNode;
			pQueue->pFrontNode = pQueue->pFrontNode->pLink;
			pReturn ->pLink = NULL;

			pQueue->currentElementCount --;

			if(isLinkedQueueEmpty(pQueue) == TRUE)
				pQueue->pRealNode = NULL;
		}
		
	}

	return pReturn;
}