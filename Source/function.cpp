#include "../Header/students.h"



// ВВОД
//cout <<"enter name->";
//cin >> sbuf;
//p3[i].setName(sbuf);

// ВЫВОД
//cout << p3[i].getName() << " " << p3[i].getYear() << endl;

void FillingArray(Students *pStud, int n) {
    string _name, _faculty;
    int _studNum, _goodStudNum;
    for(int i=0; i<n; i++) {
        cout << i+1 << ". Введите название группы: ";
        cin >> _name;
        pStud[i].SetName(_name);
        cout << i+1 << ". Введите название факультета: ";
        cin >> _faculty;
        pStud[i].SetFaculty(_faculty);
        cout << i+1 << ". Введите количество студентов: ";
        cin >> _studNum;
        pStud[i].SetStudNum(_studNum);
        cout << i+1 << ". Введите количество успевающих студентов: ";
        cin >> _goodStudNum;
        pStud[i].SetGoodStudNum(_goodStudNum);
    }
    cout << "\nВы ввели:" << endl;
    for (int i=0; i<n; i++) {
        cout << pStud[i].GetName() << " ";
        cout << pStud[i].GetFaculty() << " ";
        cout << pStud[i].GetStudNum() << " ";
        cout << pStud[i].GetGoodStudNum() << endl;
    }
}

void AddLine(Students *pStud, int n) {
    string _name, _faculty;
    int _studNum, _goodStudNum;

    cout << "Введите название группы: ";
    cin >> _name;
    pStud[n].SetName(_name);
    cout << "Введите название факультета: ";
    cin >> _faculty;
    pStud[n].SetFaculty(_faculty);
    cout << "Введите количество студентов: ";
    cin >> _studNum;
    pStud[n].SetStudNum(_studNum);
    cout << "Введите количество успевающих студентов: ";
    cin >> _goodStudNum;
    pStud[n].SetGoodStudNum(_goodStudNum);

};

void Print(Students *pStud, int n) {
    for (int i=0; i<n; i++) {
        cout << pStud[i].GetName() << " ";
        cout << pStud[i].GetFaculty() << " ";
        cout << pStud[i].GetStudNum() << " ";
        cout << pStud[i].GetGoodStudNum() << endl;
    };
};

void Edit(Students *pStud, int n) {
    int lineNum, pointNum;
    cout << "Какую строку вы хотите изменить?: ";
    cin >> lineNum;
    cout << "Какой пункт вы хотите изменить?" << endl;
    cout << "1. Группа" << endl;
    cout << "2. Факультет" << endl;
    cout << "3. Кол-во студентов" << endl;
    cout << "4. Кол-во успевающих студентов" << endl;
    cin >> pointNum;
    switch (pointNum) {
        case 1: {
            string _name;
            cout << "Введите название группы: ";
            cin >> _name;
            pStud[lineNum-1].SetName(_name);
        }break;
        case 2: {
            string _faculty;
            cout << "Введите название факультета: ";
            cin >> _faculty;
            pStud[lineNum-1].SetFaculty(_faculty);
        }break;
        case 3: {
            int _studNum;
            cout << "Введите кол-во студентов: ";
            cin >> _studNum;
            pStud[lineNum-1].SetStudNum(_studNum);
        }break;
        case 4: {
            int _goodStudNum;
            cout << "Введите кол-во успевающих студентов: ";
            cin >> _goodStudNum;
            pStud[lineNum-1].SetGoodStudNum(_goodStudNum);
        }break;
        default: { cout << "Неверное значение"; };
    };
};

int PercentStud(Students *pStud, int n) {
    float sumStud = 0, sumGoodStud = 0;
    for(int i=0; i<n; i++) {
        sumStud += pStud[i].GetStudNum();
        sumGoodStud += pStud[i].GetGoodStudNum();
    }
    return (sumGoodStud / sumStud) * 100;
}

//int Read(Students *pStud, int n) {
//    ifstream reader;
//    reader.open("..\\students.txt");
//    int lineNum ;
//    string _name, _faculty;
//    int _studNum, _goodStudNum;
//    if (reader.is_open()) {
//        for (int i; i<n; i++) {
//            reader >> _name;
//            pStud[n].SetName(_name);
//            reader >> _faculty;
//            pStud[n].SetFaculty(_faculty);
//            reader >> _studNum;
//            pStud[n].SetStudNum(_studNum);
//            reader >> _goodStudNum;
//            pStud[n].SetGoodStudNum(_goodStudNum);
//
//            lineNum = i;
//        }
//        cout << "***** Файл прочитан *****";
//        return lineNum;
//    } else {
//        cout << "Файл не прочитан";
//    }
//};