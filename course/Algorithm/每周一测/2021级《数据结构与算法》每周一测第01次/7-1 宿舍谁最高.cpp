#include <iostream>
#include <cstdio>
using namespace std;
class Student
{
public:
    int dorm_ID;
    string name;
    int height;
    int weight;
    friend istream& operator>>(istream&, Student&);
};

istream& operator>>(istream& in, Student& s)
{
    in >> s.dorm_ID >> s.name >> s.height >> s.weight;
    return in;
}
struct Student_Node
{
    Student s;
    Student_Node* pNext;
}node = {Student(),nullptr};
int main()
{
    int n;
    Student _s;
    Student_Node* pHead(nullptr),*pHere(nullptr),*tmp(nullptr);
    pHead = new Student_Node;
    cin >> pHead->s;
    for (int i = 1; i < n; i++)
    {
        cin >> _s;
        pHere = pHead;
        if (_s.dorm_ID < pHere->s.dorm_ID)
        {
            pHead = new Student_Node;
            pHead->s = _s;
            pHead->pNext = pHere;
        }
        else
        {
            while (true)
            {
                if (_s.dorm_ID == pHere->s.dorm_ID && _s.height > pHere->s.height)
                {
                    pHere->s = _s;
                    break;
                }
                else if (pHere->pNext = nullptr)
                {
                    pHere = pHere->pNext;
                    pHere = new Student_Node;
                    pHere->s = _s;
                    break;
                }
                else if (_s.dorm_ID > pHere->s.dorm_ID && _s.dorm_ID < pHere->pNext->s.dorm_ID)
                {
                    tmp = pHere->pNext;
                    pHere->pNext = new Student_Node;
                    pHere->pNext->pNext = tmp;
                    pHere->pNext->s = _s;
                    break;
                }
                else
                {
                    pHere = pHere->pNext;
                }
            }
        }
    }
    //Êä³ö
    pHere = pHead;
    while (pHere != nullptr)
    {
        printf("%06d %s %d %d", pHere->s.dorm_ID, &pHere->s.name[0], pHere->s.height, pHere->s.weight);
        pHere = pHere->pNext;
    }
    return 0;
}