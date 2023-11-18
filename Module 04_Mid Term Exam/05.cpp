//InjamTanvir

//Choose Three
#include<bits/stdc++.h>
using namespace std;
string PossibleMakeSum(int N, int S, int a[]){
    sort(a, a + N);

    for (int i = 0; i < N - 2; i++){
        int left = i + 1;
        int right = N - 1;
        while (left < right){
            int currentSum = a[i] + a[left] + a[right];
            if (currentSum == S) {
                return "YES";
            }
            else if (currentSum < S){
                left++;
            }

            else {
                right--;
            }
        }
    }

    return "NO";
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++){
        int N, S;
        cin >> N >> S;
        int a[N];
        for (int i = 0; i < N; i++){
            cin >> a[i];
        }

        string result = PossibleMakeSum(N, S, a);
        cout << result << endl;
    }
    return 0;
}
