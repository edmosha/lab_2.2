#ifndef LAB_2_2_STUDENTS_H
#define LAB_2_2_STUDENTS_H

#include <string>
#include <iostream>
using namespace std;


class Students {
    public:
        Students();
        Students(string a, string b, int c);
        string GetName();
        void SetName(string a);

    private:
        string name;
        string faculty;
        int studNum;
        int goodStudNum;
}

#endif //LAB_2_2_STUDENTS_H
