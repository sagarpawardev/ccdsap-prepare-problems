#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int count = 0;
    int curr = -1;
    for (int i = 0; i < n; i++)
    {
        if (curr == -1)
        {
            curr = a[i];
        }
        else if (a[i] - curr <= d)
        {
            count++;
            curr = -1;
        }
        else
        {
            curr = a[i];
        }
    }

    cout << count << endl;
}
