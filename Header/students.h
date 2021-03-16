#ifndef LAB_2_2_STUDENTS_H
#define LAB_2_2_STUDENTS_H

#include <string>
#include <iostream>
#include <fstream>
using namespace std;


class Students {
    public:
        Students();
        Students(string a, string b, int c, int d);

        string GetName();
        string GetFaculty();
        int GetStudNum();
        int GetGoodStudNum();

        void SetName(string a);
        void SetFaculty(string a);
        void SetStudNum(int a);
        void SetGoodStudNum(int a);


    private:
        string name;
        string faculty;
        int studNum;
        int goodStudNum;
};

void MENU();
void Read(Students *pStud, int n);
void Print(Students *pStud, int n);

#endif //LAB_2_2_STUDENTS_H
