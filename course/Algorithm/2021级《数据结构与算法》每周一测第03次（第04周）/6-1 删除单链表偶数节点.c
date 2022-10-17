#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();
struct ListNode *deleteeven( struct ListNode *head );
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
    struct ListNode *head;

    head = createlist();
    head = deleteeven(head);
    printlist(head);

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
struct ListNode *deleteeven( struct ListNode *head )
{
    struct ListNode *currentNode = head,*deleteNode;
    while(currentNode->next)
    {
        if(currentNode->next->data%2==0)
        {
            deleteNode = currentNode->next;
            currentNode->next = deleteNode->next;
            free(deleteNode);
        }
        else if(currentNode->next)
        {
            currentNode = currentNode->next;
        }
    }
    if(head->data%2==0)
    {
        deleteNode = head;
        head = head->next;
        free(deleteNode);
    }
    return head;
}
