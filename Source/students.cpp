#include "../Header/students.h"

// конструктор по умолчанию
Students::Students() {
    name = "no_name";
    faculty = "no_faculty";
    studNum = 0;
    goodStudNum = 0;
};

string Students::GetName() {return name;};
string Students::GetFaculty() {return faculty;};
int Students::GetStudNum() { return studNum;};
int Students::GetGoodStudNum() {return goodStudNum;};

void Students::SetName(string a) {name = a;};
void Students::SetFaculty(string a) {faculty = a;}
void Students::SetStudNum(int a) {studNum = a;}
void Students::SetGoodStudNum(int a) {goodStudNum = a;};

// конструктор с параметрами
Students::Students(string a, string b, int c, int d) {
    name = a;
    faculty = b;
    studNum = c;
    goodStudNum = d;
}

Students::~Students() = default;



