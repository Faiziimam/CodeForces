#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*  
      Soldier-> 'W' banana
      for banana he has to pay 'k' dollars (i*k)
       he has 'n' dollars
       How many dollars he have to borrow from his friend? 
    */
    int k, n, w, sum = 0;
    int price;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        sum = sum + i;
    }
    price = k * sum;
    int moneyBorrowed = price - n;
    if (price >= n)
    {

        cout << moneyBorrowed << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}