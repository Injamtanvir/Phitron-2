//InjamTanvir

//Who Is It
#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    int id;
    char name[101];
    char section;
    int totalMarks;

    Student() {
        id = 0;
        strcpy(name, "");
        section = '\n';
        totalMarks = 0;
    }

    Student(int _id, const char* _name, char _section, int _totalMarks) {
        id = _id;
        strcpy(name, _name);
        section = _section;
        totalMarks = _totalMarks;
    }
};

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        Student students[3];

        for (int i = 0; i < 3; i++){
            int id, totalMarks;
            char name[101], section;
            cin >> id >> name >> section >> totalMarks;
            students[i] = Student(id, name, section, totalMarks);
        }

        int maxTotalMarks = students[0].totalMarks;
        int maxID = students[0].id;

        for (int i = 1; i < 3; i++){
            if ((students[i].totalMarks > maxTotalMarks) || (students[i].totalMarks == maxTotalMarks && students[i].id < maxID)) {
                maxTotalMarks = students[i].totalMarks;
                maxID = students[i].id;
            }
        }

        for (int i = 0; i < 3; i++) {
            if (students[i].id == maxID){
                cout << students[i].id << " " << students[i].name << " " << students[i].section << " " << students[i].totalMarks << endl;
            }
        }
    }

    return 0;
}
