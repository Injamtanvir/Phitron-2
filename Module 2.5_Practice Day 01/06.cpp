//InjamTanvir

#include<bits/stdc++.h>
using namespace std;
int * get_array(int N) {
    int * arr = new int[N];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    return arr;
}

int main() {
    int N;
    cin >> N;

    int * array = get_array(N);

    for(int i = 0; i < N; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    delete[] array;

    return 0;
}