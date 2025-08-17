#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        bool possible = true;
        for (int i = 0; i <= n - 3; ++i) {
            vector<int> known;
            for (int j = 0; j < 3; ++j)
                if (a[i + j] != -1)
                    known.push_back(a[i + j]);
            if (known.size() >= 2 && (known[0] != known[1] || (known.size() == 3 && (known[0] != known[2] || known[1] != known[2])))) {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
