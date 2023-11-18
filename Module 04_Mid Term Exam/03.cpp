//InjamTanvir

#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    while(getline(cin, line)){
        char word[100001]; 
        int idx = 0;

        for(char ch : line) {
            if(ch >= 'a' && ch <= 'z'){
                word[idx++] = ch;
            }
        }
        sort(word, word + idx);

        for(int i = 0; i < idx; ++i){
            cout << word[i];
        }
        cout << endl;
    }
    return 0;
}
