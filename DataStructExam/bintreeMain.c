#include <stdio.h>
#include <stdlib.h>
#include "bintree.h"

int main(int argc, char *argv[])
{
	BinTree *pBinTree = NULL;
	
	BinTreeNode *pNodeA = NULL;
	BinTreeNode *pNodeB = NULL;
	BinTreeNode *pNodeC = NULL;
	BinTreeNode *pNodeD = NULL;
	BinTreeNode *pNodeE = NULL;
	BinTreeNode *pNodeF = NULL;
	BinTreeNode  node = {0,};

	node.data = 'A';
	pBinTree = makeBinTree(node);

	if(pBinTree != NULL)
	{
		pNodeA = getRootNodeBT(pBinTree);

		node.data = 'B';
		pNodeB = insertLeftChid(pNodeA ,node);

		node.data = 'C';
		pNodeB = insertRightChild(pNodeA ,node);

		if(pNodeB != NULL)
		{
			node.data = 'D';
			pNodeB = insertLeftChid(pNodeB ,node);
		}

		if(pNodeC != NULL)
		{
			node.data = 'E';
			pNodeB = insertLeftChid(pNodeC ,node);

			node.data = 'F';
			pNodeB = insertRightChild(pNodeC ,node);

		}
	}
		
	return 0;   
}