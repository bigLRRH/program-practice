#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char a[100] = "hello world!";

    for(int i=0;i<strlen(a);i++) cout << a[i];

    return 0;
}