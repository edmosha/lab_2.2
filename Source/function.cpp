#include "../Header/students.h"

int ARRAY_COUNT;
Students *pStud;

void MENU() {
    cout << "Введите число строк: ";
    cin >> ARRAY_COUNT;
    pStud = new Students[ARRAY_COUNT];
    Read(pStud, ARRAY_COUNT);
    Print(pStud, ARRAY_COUNT);
};

void Read(Students *pStud, int n) {
    ifstream reader;
    reader.open("..\\students.txt");
    if (reader.is_open()) {
        for (int i; i<n; i++) {
            string _name, _faculty;
            int _studNum, _goodStudNum;

            reader >> _name;
            pStud[n].SetName(_name);
            reader >> _faculty;
            pStud[n].SetFaculty(_faculty);
            reader >> _studNum;
            pStud[n].SetStudNum(_studNum);
            reader >> _goodStudNum;
            pStud[n].SetGoodStudNum(_goodStudNum);
        }
        cout << "*****";
        cout << " Файл прочитан ";
        cout << "*****";
    } else {
        cout << "Файл не прочитан";
    }
};

void Print(Students *pStud, int n) {
    cout << endl;
    pStud[n].GetName();
    pStud[n].GetFaculty();
    pStud[n].GetGoodStudNum();
    pStud[n].GetGoodStudNum();
}