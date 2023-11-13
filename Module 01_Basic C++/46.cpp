//InjamTanvir

//Array String input in C++
#include <iostream>
#include <string.h>
#include <string>  //String input and output in C++
using namespace std;
int main(){
    char s[100];
    int a;
    cin >> a;
    getchar();
    cin.getline(s, 100);
    cout << a << endl;
    cout << s << endl;
    return 0;
}