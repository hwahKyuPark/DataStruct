#ifndef _EXPR_DEF_
#define _EXPR_DEF_

typedef enum PrecdenceType
{
	lparen, rparen, times, devide, plus, minus, operand
} Precedence;

typedef struct ExprTokenType
{
	float value;
	Precedence type;
} ExpreToken;

void calcExpr(ExpreToken *pExprTokens);
#endif