#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist(); /*裁判实现，细节不表*/
struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2);
void printlist( struct ListNode *head )
{
     struct ListNode *p = head;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode  *list1, *list2;

    list1 = createlist();
    list2 = createlist();
    list1 = mergelists(list1, list2);
    printlist(list1);
    
    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *createlist()
{
    struct ListNode *currentNode,*firstNode;
    int n;
    currentNode = firstNode = (struct ListNode*)malloc(sizeof(struct ListNode*));
    scanf("%d",&n);
    while(n!=-1)
    {
        currentNode = currentNode->next = (struct ListNode*)malloc(sizeof(struct ListNode*));
        currentNode->data = n;
        scanf("%d",&n);
    }
    currentNode->next = NULL;
    currentNode = firstNode;
    firstNode = firstNode->next;
    free(currentNode);
    return firstNode;
}

struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2)
{
    struct ListNode*rt,*currentNode;
    rt = (struct ListNode*)malloc(sizeof(struct ListNode*));
    currentNode = rt;
    while(list1 && list2)
    {
        if(list1->data<=list2->data)
        {
            currentNode->next = list1;
            list1=list1->next;
        }
        else
        {
            currentNode->next = list2;
            list2=list2->next;
        }
        currentNode=currentNode->next;
    }
    while(list1)
    {
        currentNode->next=list1;
        currentNode=currentNode->next;
        list1=list1->next;
    }
    while(list2)
    {
        currentNode->next=list2;
        currentNode=currentNode->next;
        list2=list2->next;
    }
    free(currentNode->next);
    currentNode = rt;
    rt = rt->next;
    free(currentNode);
    return rt;
}