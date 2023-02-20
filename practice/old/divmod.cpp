#include <iostream>

using namespace std;

int f(int x, int a) {
    return ((int) (x/a)) + (x % a) ;
}
int solve(int l, int r, int a) {
    int mid = l + (r-l) / 2;
    int max = f(mid, a);
    if (mid - l > 1 || r-mid < 1)
        return max;
    if (f(r, a) < max)
        return solve(l, mid-1, a);
    return solve(mid+1, r, a);
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int l, r, a;
        cin >> l >> r >> a;
        int x = solve(l, r, a);
        cout << "ans: " << x << endl; 

    }
    
    return 0;
}