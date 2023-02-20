#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s[n] = {};
    for (int i = 0; i<n; i++) {
        string str;
        cin>>str;
        s[i] = str;
    }

    for (int i = 0; i<n; i++) {
        string str = s[i];
        if (str.length() > 10) {
            string shortened_string = str[0] + to_string(str.length()-2) + str[str.length()-1];
            cout << shortened_string<<endl;
        } else cout << str << endl;
    }
    
    return 0;
}   