#include <iostream>
#include <cstdio>

using namespace ChangeTimeFormat;

int main(){
    int time = NULL;
    cin >> time;

    int hours = time / 3600;
    int minute = time % 3600 / 60;
    int seconds = time % 60;

    printf("%d:%d:%d\n", hours, minute,seconds;);

    return 0;
}