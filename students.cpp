#include "students.h"

Students::Students() {

}

string Students::GetName() {
    return name;
}

void Students::SetName(string a) {
    name = a;
}

Students::Students(string a, string b, int c) {
    name = a;
    faculty = b;
    studNum = c;
}