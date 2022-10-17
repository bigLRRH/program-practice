#include <iostream>
#include <string>
#include <queue>
using namespace std;
struct binaryTreeNode {
	char element;
	binaryTreeNode* leftChild,
		* rightChild;
	binaryTreeNode() :element('#'), leftChild(nullptr), rightChild(nullptr) {}
	binaryTreeNode(const char& theElement) :element(theElement), leftChild(nullptr), rightChild(nullptr) {}
};
struct binaryTreeNode* levelOrderCreateTree(string& s);
void preOrderPrint(const struct binaryTreeNode* t);
void inOrderPrint(const struct binaryTreeNode* t);
void postOrderPrint(const struct binaryTreeNode* t);
int countLeaves(const struct binaryTreeNode* t);
int main()
{
	string s;
	cin >> s;
	struct binaryTreeNode* root = levelOrderCreateTree(s);
	if (root->element == '#')
	{
		cout << 0 << endl;
		return 0;
	}
	preOrderPrint(root);
	cout << endl;
	inOrderPrint(root);
	cout << endl;
	postOrderPrint(root);
	cout << endl;
	cout << countLeaves(root) << endl;
	return 0;
}
struct binaryTreeNode* levelOrderCreateTree(string& s)
{
	int i(0);
	struct binaryTreeNode* root = new binaryTreeNode(s[i++]);
	queue<struct binaryTreeNode*> q;
	q.push(root);
	while (q.size())
	{
		struct binaryTreeNode* tmp = q.front();
		q.pop();
		if (tmp->element != '#')
		{
			if (i >= s.size())break;
			q.push(tmp->leftChild = new binaryTreeNode(s[i++]));
			if (i >= s.size())break;
			q.push(tmp->rightChild = new binaryTreeNode(s[i++]));
		}
	}
	return root;
}
void preOrderPrint(const struct binaryTreeNode* t)
{
	if (!t || t->element == '#')
		return;
	cout << t->element;
	preOrderPrint(t->leftChild);
	preOrderPrint(t->rightChild);
}
void inOrderPrint(const struct binaryTreeNode* t)
{
	if (!t || t->element == '#')
		return;
	inOrderPrint(t->leftChild);
	cout << t->element;
	inOrderPrint(t->rightChild);
}
void postOrderPrint(const struct binaryTreeNode* t)
{
	if (!t || t->element == '#')
		return;
	postOrderPrint(t->leftChild);
	postOrderPrint(t->rightChild);
	cout << t->element;
}
int countLeaves(const struct binaryTreeNode* t)
{
	if (!t || t->element == '#')
		return 0;
	if ((!t->leftChild || t->leftChild->element == '#') && (!t->rightChild || t->rightChild->element == '#'))
		return 1 + countLeaves(t->leftChild) + countLeaves(t->rightChild);
	return countLeaves(t->leftChild) + countLeaves(t->rightChild);
}