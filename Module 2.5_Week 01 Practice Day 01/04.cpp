//InjamTanvir

#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;

    int maxNum = 0;
    for(int i = 0; i < N; i++) {
        int num;
        cin >> num;
        maxNum = max(maxNum, num);
    }

    cout << maxNum << endl;

    return 0;
}