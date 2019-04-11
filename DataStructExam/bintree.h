#ifndef _BIN_TREE_
#define _BIN_TREE_

typedef struct BinTreeNodeType
{
		char data;
		int visited;
		struct BinTreeNodeType* pLeftChild;
		struct BinTreeNodeType* pRightChild;
} BinTreeNode;

typedef struct BinTreeType
{
	struct BinTreeNodeType* pRootNode;
} BinTree;

BinTree* makeBinTree(BinTreeNode rootNode);
BinTreeNode* getRootNodeBT(BinTree* pBinTree);
BinTreeNode* insertLeftChid(BinTreeNode* pParentNode, BinTreeNode element);
BinTreeNode* insertRightChild(BinTreeNode* pParentNode, BinTreeNode element);
BinTreeNode* getLeftChildNode(BinTreeNode* pNode);
BinTreeNode* getRightChildNode(BinTreeNode* pNode);
void deleteBinTree(BinTree* pBinTree);
void deleteBinTreeNode(BinTreeNode* pNode);

#endif


#ifndef _COMMON_TREE_DEF
#define _COMMON_TREE_DEF

#define	TRUE	1
#define	FALSE	0

#endif