#include <iostream> // In the name of Allah, the Most Gracious, the Most Merciful
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (((b > a && (b - a) % 2 == 1) || (a > b && (a - b) % 2 == 0)))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}