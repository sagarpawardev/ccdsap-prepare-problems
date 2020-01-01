#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        k = min(k, n-k);

        int w = 0;
        for(int i=0; i<k; i++){
            w += a[i];
        }

        for(int i=k; i<n ;i++){
            w -= a[i];
        }

        cout << w*-1 << endl;

    }
}