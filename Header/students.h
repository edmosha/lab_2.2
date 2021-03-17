#ifndef LAB_2_2_STUDENTS_H
#define LAB_2_2_STUDENTS_H

#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;


class Students {
    public:
        Students();
        Students(string a, string b, int c, int d);
        ~Students();

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

void FillingArray(Students *pStud, int n);
void AddLine(Students *pStud, int n);
void Print(Students *pStud, int n);
void Edit(Students *pStud, int n);
int PercentStud(Students *pStud, int n);

#endif //LAB_2_2_STUDENTS_H
