#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode *Tree;
struct TreeNode
{
    int element;
    Tree left;
    Tree right;
};

Tree build_tree(); /* details omitted */

void print_right_subtree(Tree T, int X);

int main()
{
    Tree T;
    int X;

    T = build_tree();
    scanf("%d", &X);
    print_right_subtree(T, X);

    return 0;
}

/* Your function(s) will be put here */
Tree find(const Tree T, const int X)
{
    Tree p = T;
    while (p)
    {
        if (X < p->element)
            p = p->left;
        else if (X > p->element)
            p = p->right;
        else
            return p;
    }
    return NULL;
}
void decreasing_order_print_BST(Tree T)
{
    if (T)
    {
        decreasing_order_print_BST(T->right);
        printf("%d ", T->element);
        decreasing_order_print_BST(T->left);
    }
    return;
}
void print_right_subtree(Tree T, int X)
{
    if (!T)
    {
        printf("empty tree\n");
        return;
    }
    Tree p;
    if (p = find(T, X))
    {
        p = p->right;
        decreasing_order_print_BST(p);
        printf("end\n");
    }
    else
    {
        printf("x not found\n");
    }
    return;
}