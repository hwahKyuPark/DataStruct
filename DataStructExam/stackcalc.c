#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedstack.h"
#include "expredef.h"
#include "stackcalc.h"

int pushToken(LinkedStack* pStack, ExpreToken data)
{
	StackNode node = {0,};
	
	node.data = data;

	return Push(pStack, node);
}

void calcExpr (ExpreToken *pExprTokens, int tokenCount)
{
	 LinkedStack  *pStack = NULL;
	 StackNode *pNode1 = NULL;
	 StackNode *pNode2 = NULL;
	 Precedence tokenType;

	 int i=0;

	 if(pStack == NULL)
		 return;

	 pStack = CreateLinkedStack();
	 
	 if(pStack != NULL)
	 {
		 for(i = 0 ; i<tokenCount ; i++)
		 {
			 tokenType = pExprTokens[i].type;

			 // token이 피 연산자 일 때 예) 0,1,2,3 .... 등
			 if(tokenType == operand )
				 pushToken(pStack, pExprTokens[i]);
			 else
			 {
				 pNode2 = Pop(pStack);
				 
				 if(pNode2 != NULL)
				 {
					 pNode1 = Pop(pStack);
					 if(pNode1 != NULL)
					 {
						 float oper1 = pNode1 -> data.value;
						 float oper2 = pNode2 -> data.value;

						 ExpreToken newToken;
						 newToken.type = operand;

						 switch(tokenType)
						 {
							case plus:
								newToken.value = oper1 + oper2;
								break;

							case minus:
								newToken.value = oper1 - oper2;
								break;

							case times:
								newToken.value = oper1 * oper2;
								break;

							case devide:
								newToken.value = oper1 / oper2;
								break;
						 }
						 pushToken(pStack ,newToken);
						 free(pNode1);
					 }
					 free(pNode2);
				 }
			 }

			 pNode1 = Pop(pStack);
			 if(pNode1 != NULL)
			 {
				 printf("수식 결과: [%f] \n", pNode1->data.value);
				 free(pNode1);
			 }
			 else
				printf(" 수식상 오류 발견\n !!!");

			 DeleteLinkedStack(pStack);
		 }
	 }
}

void converInfixToPostfix(ExpreToken *pExprTokens, int tokenCount)
{
	LinkedStack *pStack = NULL;
	StackNode *pNode =	NULL;
	PrecdenceType tokenType;
	PrecdenceType inStackTokenType;

	int i = 0;

	if(pExprTokens == NULL) return;

	if(pStack != NULL)
	{
		for(i = 0 ; i < tokenCount ; i++)
		{
			tokenType = pExprTokens[i].type;

			switch (tokenType)
			{
				case operand:
					printf("%f \n", pExprTokens[i].value);
					break;

				case rparen:
					pNode = Pop(pStack);
					while(pNode != NULL && pNode->data.value != lparen)
					{
						printToken(pNode->data);
						free(pNode);

						pNode = Pop(pStack);
					}



				default:
					break;
			}
		}
	}
}