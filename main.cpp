#include <iostream>
#include "students.h"


int main() {
    system("chcp 65001");
    Students S1;

    cout << S1.GetName() << endl;
    string s;
    cout << "Введите фамилию: ";
    cin >> s;

    S1.SetName(s);
    cout << "\nФамилия: " << S1.GetName() << endl;

    Students S2 ("IKVT-02", "IKSS", 26);
    cout << S2.GetName();
    return 0;
}
