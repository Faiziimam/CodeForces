#include <iostream>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    while (t--)
    {    
        cin>>n;
        int a[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 1) 
            {
                count++;
            }
            else
            {
                cout<<"-1"<<endl;
            }
        }
         cout << count << endl;
    }
}
