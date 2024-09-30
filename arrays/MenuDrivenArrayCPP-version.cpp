#include <bits/stdc++.h>
using namespace std;

class Array
{
private:
    int *A;
    int size;
    int length;

public:
    Array()
    {
        size = 10;
        length = 0;
        A = new int[size];
    }
    Array(int size)
    {
        this->size = size; // 'this' is used to distinguish the class member from the parameter
        length = 0;
        A = new int[this->size];
    }

    ~Array()
    {
        delete[] A;
    }
};

int main()
{
    return 0;
}