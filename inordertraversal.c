/*Inorder traversal of a tree*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
/*structure for a tree construction*/

struct TreeNode {
	int x;
	struct TreeNode* L;
	struct TreeNode* R;
};
typedef struct TreeNode TreeNode;
TreeNode* newNode(int x) {
	TreeNode* node = (TreeNode*) malloc(sizeof(TreeNode));
	node->x=x;
	node->L = node->R = NULL;
    return node;
}
/*Insertion of a node into a tree*/
TreeNode* insert(TreeNode* node, int val) {
	if (node == NULL) return newNode(val);
	if (val <= node->x) node->L = insert(node->L, val);
	else node->R = insert(node->R, val);
    return node;
}

/*Inorder of a tree*/
void inorder(TreeNode* node)
{
    if(node!=NULL)
    {
    inorder(node->L);
    printf("%d ",node->x);
    inorder(node->R);
    }
}

int main() {
	int val, N; 
    scanf("%d",&N);
	TreeNode* Root = NULL;
	for (int i = 1; i <= N; i++) {
		scanf("%d",&val);
		Root = insert(Root, val);
	}
	inorder(Root);
}
