#ifndef _LINKED_STACK_
#define _LINKED_STACK_

typedef struct StackNodeType{
	ExpreToken data;
	struct StackNodeType* pLink;
}StackNode;

typedef struct LinkedStackType{
	int currentElemenetCount;
	StackNode* pTopElement;
} LinkedStack;

LinkedStack* CreateLinkedStack();
int Push(LinkedStack* pStack, StackNode elemenet);
StackNode* Pop(LinkedStack* pStack);
StackNode* Peek(LinkedStack* pStack);
void DeleteLinkedStack(LinkedStack* pStack);
int isLinkedStackFull(LinkedStack* pStack);
int isLinkedStackEmpty(LinkedStack* pStack);
#endif

#ifndef _COMMON_STACK_DEF_
#define _COMMON_STACK_DEF_

#define	TRUE	1
#define	FALSE	0

#endif