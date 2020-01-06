#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[m][2];
        for (int i = 0; i < m; i++)
        {
            cin >> a[i][0];
        }

        unordered_map<int, int> umap;
        for (int i = m - 1; i > -1; i--)
        {
            int value = 401;
            if (umap.find(a[i][0]) != umap.end())
            {
                value = umap[a[i][0]];
            }

            a[i][1] = value;
            umap[a[i][0]] = i;
        }

        unordered_map<int, int> tables;
        long clean = 0;
        for (int i = 0; i < m; i++)
        {

            if (tables.find(a[i][0]) != tables.end())
            {
                tables[a[i][0]] = a[i][1];
            }
            else if (tables.size() < n)
            {
                tables[a[i][0]] = a[i][1];
                clean++;
            }
            else
            {
                int maxIdx = a[i][0];
                //Find max
                for (auto &vals : tables)
                {
                    if (tables[maxIdx] < vals.second)
                    {
                        maxIdx = vals.first;
                    }
                }

                tables.erase(maxIdx);
                clean++;
                tables[a[i][0]] = a[i][1];
            }
        }

        cout << clean << endl;
    }
}