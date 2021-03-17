#include "../Header/students.h"



// ВВОД
//cout <<"enter name->";
//cin >> sbuf;
//p3[i].setName(sbuf);

// ВЫВОД
//cout << p3[i].getName() << " " << p3[i].getYear() << endl;

int Read(Students *pStud, int n) {
    ifstream reader;
    reader.open("..\\students.txt");
    int lineNum ;
    string _name, _faculty;
    int _studNum, _goodStudNum;
    if (reader.is_open()) {
        for (int i; i<n; i++) {
            reader >> _name;
            pStud[n].SetName(_name);
            reader >> _faculty;
            pStud[n].SetFaculty(_faculty);
            reader >> _studNum;
            pStud[n].SetStudNum(_studNum);
            reader >> _goodStudNum;
            pStud[n].SetGoodStudNum(_goodStudNum);

            lineNum = i;
        }
        cout << "***** Файл прочитан *****";
        return lineNum;
    } else {
        cout << "Файл не прочитан";
    }
};
void AddLine(Students *pStud, int n) {
    string _name, _faculty;
    int _studNum, _goodStudNum;

    cout << "Введите название группы: ";
    cin >> _name;
    pStud[n+1].SetName(_name);
    cout << "Введите название факультета: ";
    cin >> _faculty;
    pStud[n+1].SetFaculty(_faculty);
    cout << "Введите количество студентов: ";
    cin >> _studNum;
    pStud[n+1].SetStudNum(_studNum);
    cout << "Введите количество успевающих студентов: ";
    cin >> _goodStudNum;
    pStud[n+1].SetGoodStudNum(_goodStudNum);
    for (int i; i<n; i++) {
        cin >> _name;
        pStud[n].SetName(_name);
        cin >> _faculty;
        pStud[n].SetFaculty(_faculty);
        cin >> _studNum;
        pStud[n].SetStudNum(_studNum);
        cin >> _goodStudNum;
        pStud[n].SetGoodStudNum(_goodStudNum);

    }

};

void Print(Students *pStud, int n) {
    for (int i=0; i<n; i++) {
        cout << pStud[i].GetName() << " ";
        cout << pStud[i].GetFaculty() << " ";
        cout << pStud[i].GetStudNum() << " ";
        cout << pStud[i].GetGoodStudNum() << endl;
    }
}