//Jennifer Khuu, jtk2eh, 1/28/20
//File prog1.cpp

#include <iostream>
using namespace std;

void my_subroutine() {
    cout << "Hello world" << endl;
}

int main() {
    int x = 4;
    int *p = NULL;
    my_subroutine();
    *p = 3;
    cout << x << ", " << *p << endl;
    return 0;
}
