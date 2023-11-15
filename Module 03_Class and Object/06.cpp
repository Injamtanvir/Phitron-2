//InjamTanvir

//Constructor
#include<bits/stdc++.h>
using namespace std;
class student{
    public:
        int roll;
        int cls;
        double gpa;
        student(int r, int c, double g){
            roll = r;
            cls = c;
            gpa = g;
        }
};
int main(){
    student rahim(29, 9, 3.90);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    return 0;
}