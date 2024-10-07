#include <iostream>
#include <ctime>
using namespace std;

void printNum(int n);

int main()
{
    int numsArr[5] = {10000, 100000, 1000000, 10000000, 100000000};
    for (int i = 0; i < 5; i++)
    {
        clock_t start = clock();
        for (int j = 0; j < numsArr[i]; j++)
        {
        }
        clock_t finish = clock();
        cout << "use for loop " << numsArr[i] << " times : Consuming:" << (finish - start) << "\n";
        //当采用递归方式时，当nums为1 million就会爆栈了
        start = clock();
        printNum(numsArr[i]);
        finish = clock();
        cout << "use recursion loop " << numsArr[i] << " times : Consuming:" << (finish - start) << "\n\n";
    }
    return 0;
}

void printNum(int n)
{
    if (n > 0)
    {
        printNum(n - 1);
    }
}