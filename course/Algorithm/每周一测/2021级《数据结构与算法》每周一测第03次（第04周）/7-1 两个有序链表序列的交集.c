#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();
struct ListNode *intersection(struct ListNode *list1,struct ListNode *list2);
void printList(struct ListNode *list);

int main()
{
    struct ListNode *S1,*S2,*S3;
    S1 = createlist();
    S2 = createlist();
    S3 = intersection(S1,S2);
    printList(S3);
    return 0;
}

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

struct ListNode *intersection(struct ListNode *list1,struct ListNode *list2)
{
    struct ListNode *firstNode,*currentNode;
    firstNode = (struct ListNode*)malloc(sizeof(struct ListNode*));
    firstNode->data = -1;
    currentNode = firstNode;
    while(list1&&list2)
    {
        if(list1->data<list2->data)
            list1 = list1->next;
        else if(list1->data>list2->data)
            list2 = list2->next;
        else
        {
//             if(currentNode->data!=list1->data)
//             {
                currentNode->next = (struct ListNode*)malloc(sizeof(struct ListNode*));
                currentNode = currentNode->next;
                currentNode->data= list1->data;
//             }
            list1 = list1->next;
            list2 = list2->next;
        }
    }
    currentNode->next = NULL;
    currentNode = firstNode;
    firstNode = firstNode->next;
    free(currentNode);
    return firstNode;
}

void printList(struct ListNode *list)
{
    struct ListNode* currentNode = list;
    if(currentNode)
    {
        printf("%d",currentNode->data);
        currentNode = currentNode->next;
        while(currentNode)
        {
            printf(" %d",currentNode->data);
            currentNode = currentNode->next;
        }
        printf("\n");
    }
    else
    {
        printf("NULL\n");
    }
}