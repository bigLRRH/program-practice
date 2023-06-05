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
binaryTreeNode* levelOrderCreateTree(const string& s);
void preOrderPrint(binaryTreeNode* t);
void inOrderPrint(binaryTreeNode* t);
void postOrderPrint(binaryTreeNode* t);
int countLeaves(binaryTreeNode* t);
int main()
{
	string s;
	cin >> s;
	binaryTreeNode* root = levelOrderCreateTree(s);
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
binaryTreeNode* levelOrderCreateTree(const string& s)
{
	int i(0);
	binaryTreeNode* root = new binaryTreeNode(s[i++]);
	queue<binaryTreeNode*> q;
	q.push(root);
	while (q.size())
	{
		binaryTreeNode* tmp = q.front();
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
void preOrderPrint(binaryTreeNode* t)
{
	if (!t || t->element == '#')
		return;
	cout << t->element;
	preOrderPrint(t->leftChild);
	preOrderPrint(t->rightChild);
}
void inOrderPrint(binaryTreeNode* t)
{
	if (!t || t->element == '#')
		return;
	inOrderPrint(t->leftChild);
	cout << t->element;
	inOrderPrint(t->rightChild);
}
void postOrderPrint(binaryTreeNode* t)
{
	if (!t || t->element == '#')
		return;
	postOrderPrint(t->leftChild);
	postOrderPrint(t->rightChild);
	cout << t->element;
}
int countLeaves(binaryTreeNode* t)
{
	if (!t || t->element == '#')
		return 0;
	if ((!t->leftChild || t->leftChild->element == '#') && (!t->rightChild || t->rightChild->element == '#'))
		return 1 + countLeaves(t->leftChild) + countLeaves(t->rightChild);
	return countLeaves(t->leftChild) + countLeaves(t->rightChild);
}