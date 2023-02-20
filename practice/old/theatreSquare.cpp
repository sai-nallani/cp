#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n, m, a;
    cin >> n >> m >> a;
    long long q;
    long long w;
    if (fmod(n/a, 1) != 0){
        q = (n/a)+1;}
    else{
        q = n/a;}

    if (fmod(m/a, 1) != 0){
        w = (m/a)+1;}
    else{
        w = m/a;}
    cout << w*q;
    return 0;
}
