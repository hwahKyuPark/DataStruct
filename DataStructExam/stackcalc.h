#ifndef _STACK_CAL_
#define _STACK_CAL_

void calcExpr(ExpreToken *pExprTokens, int tokenCount);
int pushToken(LinkedStack* pStack, ExpreToken data);
void converInfixToPostfix(ExpreToken* pExprTokens, int tokenCount);
int inStackPrecedence(Precedence oper);
int outStackPrecedence(Precedence oper);
void printToken(ExpreToken element);
#endif