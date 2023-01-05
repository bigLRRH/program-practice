#include <iostream>
#include <vector>
using namespace std;
struct villageNet
{
    int n, e;
    int road[1001][1001] = { 0 };
};
int prim(villageNet* g)
{
    int minIndex[2] = {0}, cost(0);
    vector<int> connectedVillage;
    connectedVillage.push_back(1);
    while (connectedVillage.size()!=g->n)
    {//
        minIndex[0] = 0;
        minIndex[1] = 0;
        for (int i = 0; i < connectedVillage.size(); i++)
        {
            for (int j = 1; j <= g->n; j++)
            {
                bool flag(true);
                for (int k = 0; k < connectedVillage.size(); k++)
                {
                    if (!g->road[connectedVillage[i]][j] || j == connectedVillage[k])
                    {
                        flag = false;
                        break;
                    }
                }
                if(flag)
                    if (g->road[minIndex[0]][minIndex[1]] == 0 || g->road[connectedVillage[i]][j] < g->road[minIndex[0]][minIndex[1]])
                    {
                        minIndex[0] = connectedVillage[i];
                        minIndex[1] = j;
                    }
            }
        }
        connectedVillage.push_back(minIndex[1]);
        cost += g->road[minIndex[0]][minIndex[1]];
    }
    return cost;
}
int main()
{
    villageNet* g = new villageNet;
    cin >> g->n >> g->e;
    for (int i = 0; i < g->e; i++)
    {
        int v1, v2, w;
        cin >> v1 >> v2 >> w;
        g->road[v2][v1] = w;
        g->road[v1][v2] = w;
    }
    cout << prim(g);
    return 0;
}