#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    int count = 1;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end());
    int temp = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i].second < temp)
        {
            count++;
        }
        temp = v[i].second;
    }
    cout << count << endl;
    return 0;
}
