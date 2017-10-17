#include <cmath>
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;
const int INF = 2000000005; 
int N;
int x[100001];

int main() {
    
    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> x[i];
    
    for (int i = 0; i < N; ++i) {
        int lo = +INF;
        int hi = -INF;
        if (i - 1 >= 0) lo = min(lo, abs(x[i] - x[i - 1]));
        if (i + 1 < N) lo = min(lo, abs(x[i] - x[i + 1]));
        if (i > 0) hi = max(hi, abs(x[i] - x[0]));
        if (i < N - 1) hi = max(hi, abs(x[i] - x[N - 1]));
        cout << lo << " " << hi << endl;
    }
    
    return 0;
}