/*PBL3 Q4*/
#include <stdio.h>
typedef struct TreeNode {
	int data;
	struct TreeNode* left, * right;
}TreeNode;
int in(TreeNode* root) {
	int sum = 0;
	if (root == NULL) {
		return 0;
	}
	sum = root->data + in(root->left) + in(root->right);
	return sum;
}
/*    1
  2    5
 3  4      */
int main(void) {
	TreeNode n1 = { 3, NULL, NULL };
	TreeNode n2 = { 4, NULL, NULL };
	TreeNode n3 = { 2, &n1, &n2 };
	TreeNode n4 = { 5, NULL, NULL };
	TreeNode n5 = { 1, &n3, &n4 };
	TreeNode* root = &n5;
	printf("%d", in(root));
}
