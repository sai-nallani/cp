#include <bits/stdc++.h>

using namespace std;
int buckets[3], capacity[3];
void fillbuckets(int fB, int tB) {
    int x = buckets[fB];
    int y = capacity[tB] - buckets[tB];
    if (capacity[tB] >= (buckets[tB] + x)) {
        buckets[fB] -= x;
        buckets[tB] += x;
    } else {
        buckets[tB] += y;
        buckets[fB] -= y;
    }
}
int main() {
    ifstream in("mixmilk.in");
    ofstream out("mixmilk.out");
    for (int i = 0; i < 3; i++) {
        in >> capacity[i] >> buckets[i];
    }
    for (int i = 1; i < 5; i++) {
        fillbuckets((i-1)%3, i%3);
    }
    for (int i : buckets) out << i << endl;
}