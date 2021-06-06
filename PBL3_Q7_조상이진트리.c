/*pbl3 q7 ����ã��*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
typedef struct TreeNode {
    int data;
    struct TreeNode* left, * right;
} TreeNode;
TreeNode* lca(TreeNode* root, int n1, int n2)
{
    if (root == NULL)
        return NULL;

    if (root->data > n1 && root->data > n2)
        return lca(root->left, n1, n2);// ã�� ���� root���� ������ ���� ������ ���ʿ� ����

    if (root->data < n1 && root->data < n2)
        return lca(root->right, n1, n2); // ã�� ���� root���� ũ�� ���� ������ �����ʿ� ����

    return root;
}
int main()
{//		   20
//	   8	  22
//   4   12
//     10  14
    TreeNode n1 = { 10,  NULL, NULL };
    TreeNode n2 = { 14,  NULL, NULL };
    TreeNode n3 = { 4, NULL,  NULL };
    TreeNode n4 = { 12, &n1,  &n2 };
    TreeNode n5 = { 8, &n3, &n4 };
    TreeNode n6 = { 22, NULL,  NULL };
    TreeNode n7 = { 20, &n5,  &n6 };
    TreeNode* root = &n7;// Ʈ�� ����
    TreeNode* t1 = lca(root, 10, 14);
    TreeNode* t2 = lca(root, 14, 8);
    TreeNode* t3 = lca(root, 10, 22);
    printf("LCA of %d and %d is %d\n", 10, 14, t1->data);

    printf("LCA of %d and %d is %d\n", 14, 8, t2->data);

    printf("LCA of %d and %d is %d\n", 10, 22, t3->data);

    return 0;
}
