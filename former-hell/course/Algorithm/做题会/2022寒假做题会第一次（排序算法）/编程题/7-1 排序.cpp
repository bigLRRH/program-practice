#include <iostream>

using namespace std;
enum COLOR
{
    RED,
    BLACK
};
struct treeNode
{
    int value;
    treeNode *parent, *left_child, *right_child;
};

struct RBtree
{
    treeNode *root;
    void left_rotate(treeNode *r)
    {
        treeNode *s = r->right_child;
        treeNode *t = s->left_child;
    }
    void right_rotate(treeNode *r)
    {
        treeNode *s = r->left_child;
        treeNode *t = s->right_child;
    }
    void insert(int value)
    {
    }
};

int main()
{
    int N, tmp;
    cin >> N;
}
