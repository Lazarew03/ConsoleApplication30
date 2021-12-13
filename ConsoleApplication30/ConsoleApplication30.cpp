#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int t = true, p = 101010;

    if (t && (p % 3==0))
    {

        bool a = true, b = false;
        bool res = (t && (p % 3 == 0));
        cout << "Result: " << boolalpha << res;
        return 0;


    }



    system("pause");
    return 0;
}