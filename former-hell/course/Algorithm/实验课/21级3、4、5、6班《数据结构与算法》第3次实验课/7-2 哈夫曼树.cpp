#include <iostream>
using namespace std;
struct minHeap
{
	int heap[1001] = {0},
		heapSize = 0;
	int top() { return heap[1]; }
	void push(const int theElement);
	void pop();
};
int main()
{
	int n, WPL(0);
	minHeap q;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int tmp;
		cin >> tmp;
		q.push(tmp);
	}
	while (q.heapSize != 1)
	{
		int wi, wj, wk;
		wj = q.top();
		q.pop();
		wk = q.top();
		q.pop();
		WPL += wi = wj + wk;
		q.push(wi);
	}
	cout << WPL << endl;
	return 0;
}

void minHeap::push(const int theElement)
{
	int currentNode = ++heapSize;
	while (currentNode != 1 && heap[currentNode / 2] > theElement)
	{
		heap[currentNode] = heap[currentNode / 2];
		currentNode /= 2;
	}
	heap[currentNode] = theElement;
}

void minHeap::pop()
{
	int lastElement = heap[heapSize--];
	int currentNode = 1,
		child = 2;
	while (child <= heapSize)
	{
		if (child < heapSize && heap[child] > heap[child + 1])
			child++;
		if (lastElement <= heap[child])
			break;
		heap[currentNode] = heap[child];
		currentNode = child;
		child *= 2;
	}
	heap[currentNode] = lastElement;
}
