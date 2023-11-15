//InjamTanvir

//Class and Object
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    double cgpa;
};
int main(){
    Student a;
    cin.getline(a.name, 100);
    cin >> a.roll >> a.cgpa;

    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    return 0;
}