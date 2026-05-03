#include <iostream>
using namespace std;

int hanoi(int n, char from, char to, char aux);

int hanoi(int n, char from, char to, char aux)
{
    static int count = 0;

    if (n == 1)
    {
        count = 1;
        return count;
    }

    count = hanoi(n - 1, from, aux, to) + 1 + hanoi(n - 1, aux, to, from);

    return count;
}