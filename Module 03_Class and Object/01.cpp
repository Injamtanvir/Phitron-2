//InjamTanvir

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
    a.roll = 29;
    a.cgpa = 3.45;
    char tmp[100] = "Injam";
    strcpy(a.name, tmp);

    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    return 0;
}