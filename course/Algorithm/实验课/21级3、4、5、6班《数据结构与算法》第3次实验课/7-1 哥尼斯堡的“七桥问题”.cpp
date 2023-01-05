#include <iostream>
using namespace std;
int degree[1001],
    parent[1001], count_parent(0);
int find(int x)
{
    return parent[x] == x ? x : (parent[x] = find(parent[x]));
}
int main()
{
    int N, M;
    cin >> N >> M;
    for (int i = N; i > 0; i--)
        parent[i] = i;
    while (M--)
    {
        int p, q;
        cin >> p >> q;
        degree[p]++;
        degree[q]++;
        int parent_p = find(p),
            parent_q = find(q);
        if (parent_p > parent_q)
            parent[parent_p] = parent_q;
        else
            parent[parent_q] = parent_p;
    }
    for (int i = N; i > 0; i--)
    {
        if (degree[i] & 1)
        {
            cout << 0 << endl;
            return 0;
        }
        if (parent[i] == i)
            count_parent++;
    }
    if (count_parent != 1)
    {
        cout << 0 << endl;
        return 0;
    }
    cout << 1 << endl;
    return 0;
}