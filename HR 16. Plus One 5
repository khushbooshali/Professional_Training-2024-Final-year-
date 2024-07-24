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
void IncrementArray(int digit[], int n){
    for(int i = n-1; i>=0; i--){
        if(digit[i]<9){
            digit[i]++;
            return;
        }
        digit[i] = 0;
    }
    cout <<1 <<" ";
    for(int i = 0; i < n;i++){
        cout << digit[i] <<" ";
    }
    cout << endl;
}
int main() {

    int a;
    cin >> a;
    int digit[a];
    for(int i = 0; i < a; i++){
        cin >> digit[i];
    }
    IncrementArray(digit, a);
    
    if(digit[0]!=0){
        for(int i = 0; i < a; i++){
            cout<< digit[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
