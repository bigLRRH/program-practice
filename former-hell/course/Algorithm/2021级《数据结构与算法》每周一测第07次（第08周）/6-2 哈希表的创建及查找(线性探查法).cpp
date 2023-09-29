#include <iostream>
using namespace std;

#define m 16
#define NULLKEY 0 //单元为空的标记

struct HashTable
{
    int key;
};

void CreateHash(HashTable HT[], int n);
int SearchHash(HashTable HT[], int key);

int main()
{
    int value, key;
    int result;
    int i, j, n;
    HashTable HT[m];
    for (i = 0; i < m; i++)
        HT[i].key = 0;
    cin >> n;
    if (n > m)
        return 0;
    CreateHash(HT, n);
    cin >> key;
    result = SearchHash(HT, key);
    if (result != -1)
        cout << "search success，The key is located in " << result + 1;
    else
        cout << "search failed";
    return 0;
}

/* 请在这里填写答案 */
void CreateHash(HashTable HT[], int n)
{ //输入不大于m的n个不为0（0表示空值）的数，用线性探查法解决冲突构造散列表
    while (n--)
    {
        int key;
        cin >> key;
        int b = SearchHash(HT,key);
        if(HT[b].key==0)
            HT[b].key=key;
    }
}
int SearchHash(HashTable HT[], int key)
{ //输入一个值key，在散列表中查找key位置
    int i = key % m,
        j = i;
    do
    {
        if (HT[j].key == 0 || HT[j].key == key)
            break;
        ++j%=m;
    } while (j != i);
    return j;
}
