#include <iostream>
using namespace std;
int main()
{
    int n, a1, a2, count(0), maximum(0);
    long long min(0);
    enum judge
    {
        UP,
        EQUAL,
        DOWN
    } status(EQUAL);
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    cin >> a1;
    while (--n)
    {
        cin >> a2;
        switch (status)
        {
        case UP:
            min += maximum = ++count;
            if (a1 > a2)
            {
                count = 0;
                status = DOWN;
            }
            else if (a1 == a2)
            {
                maximum = 0;
                status = EQUAL;
            }
            break;
        case EQUAL:
            min += 1;
            if (a1 > a2)
            {
                count = 1;
                status = DOWN;
            }
            else if (a1 < a2)
            {
                count = 1;
                status = UP;
            }
            break;
        case DOWN:
            min += ++count;
            if (maximum && count >= maximum)
                min++;
            if (a1 < a2)
            {
                maximum = 0;
                count = 1;
                status = UP;
            }
            else if (a1 == a2)
            {
                maximum = 0;
                status = EQUAL;
            }
            break;
        }
        a1 = a2;
    }
    switch (status)
    {
    case UP:
        min += ++count;
        break;
    case EQUAL:
        min += 1;
        break;
    case DOWN:
        min += ++count;
        if (maximum && count >= maximum)
            min++;
        break;
    }
    cout << min << endl;
}