//本题要求用冒泡排序将一组整数按增序排序。冒泡排序每次从头到尾扫描待排序列，检查相邻两数的顺序，如果顺序不对就交换。请补全下列冒泡排序的代码。
typedef struct node *nodeptr;
struct node
{
    int value;
    nodeptr next;
    /* 一些其他的项，在此忽略 */
};

nodeptr BubbleSort(nodeptr h)
{ /* h 是带空头结点的链表的头指针 */
    nodeptr p, q;
    int flag_swap;

    if (!h->next)
        return h;
    do
    {
        flag_swap = 0;
        p = h;
        while (p->next->next)
        {
            if (p->next > p->next->next)
            {
                flag_swap++;
                q = p->next;

                p->next = q->next;

                q->next = q->next->next;

                p->next->next = q;
            }
            else
                p = p->next;
        }
    } while (flag_swap > 0);
    return h;
}