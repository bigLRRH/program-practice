#include <stdio.h>
#include <stdlib.h>

typedef char ElementType;
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

BinTree CreatBinTree(); /* 实现细节忽略 */
int GetHeight( BinTree BT );

int main()
{
    BinTree BT = CreatBinTree();
    printf("%d\n", GetHeight(BT));
    return 0;
}
/* 你的代码将被嵌在这里 */
int GetHeight( BinTree BT )
{
    if(BT == NULL)return 0;
    int hl = GetHeight(BT->Left);
    int hr = GetHeight(BT->Right);
    return hl>hr?++hl:++hr;
}