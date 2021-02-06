#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n > 2)
    {
        if (n % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO";
    return 0;
}