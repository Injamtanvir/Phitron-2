//InjamTanvir

//Constructor
#include<bits/stdc++.h>
using namespace std;
class student{
    public:
        int roll;
        int cls;
        double gpa;
        student(int roll, int cls, double gpa){
            this->roll = roll;
            this->cls = cls;
            this->gpa = gpa;
        }
};
int main(){
    student rahim(29, 9, 3.90);
    student karim(33, 9, 3.85);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}