#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;

        int count = 0;

        int i=0;
        int b = a >> 12;
        while(a>4095){
            a = a-2048;
            count++;
        }

        while (a)
        {
            count += (a & 1);
            a = a>>1;
        }

        cout << count << endl;
    }
    return 0;
}