#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    n & (n-1) == 0 ? printf("true") : printf("false");

    return 0;
}
