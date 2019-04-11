#ifndef _LINKED_QUEUE_
#define _LINKED_QUEUE_

typedef struct QueueNodeType
{
	char data;
	struct QueueNodeType* pLink;
}QueueNode;

typedef struct LinkedQueueType
{
	int currentElementCount;
	QueueNode* pFrontNode;
	QueueNode* pRealNode;
}LinkedQueue;

LinkedQueue* createLinkedQueue();
int enqueue(LinkedQueue* pQueue, QueueNode element);
QueueNode* dequeue(LinkedQueue* pQueue);
QueueNode* peekqueue(LinkedQueue* pQueue);
void deleteLinkedQueue(LinkedQueue* pQueue);
int isLinkedQueueFull(LinkedQueue* pQueue);
int isLinkedQueueEmpty(LinkedQueue* pQueue);
#endif

#ifndef _LINKED_QUEUE_DEF_
#define _LINKED_QUEUE_DEF_

#define	TRUE	1
#define	FALSE	0

#endif