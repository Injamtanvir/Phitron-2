//InjamTanvir

#include<bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N;
    int* A = new int[N];
    
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cin >> M;
    int* B = new int[M];

    for(int i = 0; i < N; i++) {
        B[i] = A[i];
    }

    delete[] A;

    for(int i = N; i < M; i++) {
        cin >> B[i];
    }

    for(int i = 0; i < M; i++) {
        cout << B[i] << " ";
    }
    cout << endl;
    
    delete[] B;

    return 0;
}
