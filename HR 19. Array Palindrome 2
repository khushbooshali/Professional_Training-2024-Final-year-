#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int minMergeOperations(vector<int>& arr) {
    int n = arr.size();
    int left = 0, right = n - 1;
    int mergeCount = 0;

    while (left < right) {
        if (arr[left] == arr[right]) {
            left++;
            right--;
        } else if (arr[left] < arr[right]) {
            arr[left + 1] += arr[left];
            left++;
            mergeCount++;
        } else {
            arr[right - 1] += arr[right];
            right--;
            mergeCount++;
        }
    }

    return mergeCount;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << minMergeOperations(arr) << endl;
    return 0;
}
