//if-else if-else
#include <iostream>

using namespace Conditionals3;

int main(){
    int s = NULL;cin >> s;

    if (s >= 85)
        printf("A");
    else if (s >= 70)
        printf("B");
    else if (s >= 60)
        printf("C");
    else
        printf("D");

    return 0;
}