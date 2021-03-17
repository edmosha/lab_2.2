#include <iostream>
#include "../Header/students.h"

int num = 0, lastLineNum = 0, ARRAY_COUNT;

int main() {
    system("chcp 65001");

    cout << "Сколько строк из файла нужно прочитать? " << endl;
    cin >> ARRAY_COUNT;
    Students *pStud = new Students[ARRAY_COUNT];
    //lastLineNum = Read(pStud, ARRAY_COUNT);

        while (num != 6) {
            cout << "\n<----Меню---->" << endl;
            cout << "1 > Добавить строку вручную" << endl;
            cout << "2 > Вывод данных" << endl;
            cout << "3 > Редактирование" << endl;
            cout << "4 > Процент успевающих студентов" << endl;
            cout << "5 > Сохранение результата в новый файл" << endl;
            cout << "6 > Завершить" << endl;
            cout << "> > Сделай свой выбор!!!!" << endl;
            cin >> num;

            switch (num) {
                case 1: {
                    cout << ARRAY_COUNT << endl;
                    AddLine(pStud, ARRAY_COUNT);
                    ARRAY_COUNT += 1;
                    cout << ARRAY_COUNT << endl; }break;

                case 2: { Print(pStud, ARRAY_COUNT); }break;
                case 3: {}break;
                case 4: {}break;
                case 5: {}break;
                case 6: {}break;
            };
        };


//    Students S1;
//
//    cout << S1.GetName() << endl;
//    string s;
//    cout << "Введите фамилию: ";
//    cin >> s;
//
//    S1.SetName(s);
//    cout << "\nФамилия: " << S1.GetName() << endl;
//
//    Students S2 ("IKVT-02", "IKSS", 26, 4);
//    cout << S2.GetName();

    return 0;
}

