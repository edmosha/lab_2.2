#include <iostream>
#include "../Header/students.h"

int num = 0, lastLineNum = 0, ARRAY_COUNT, percent;

int main() {
    system("chcp 65001");

    // ввод значений
    // вывод значений
    // функция подсчета процента
    // изменение строки
    //
    //

    cout << "Сколько строк нужно прочитать? " << endl;
    cin >> ARRAY_COUNT;
    Students *pStud = new Students[ARRAY_COUNT];
    FillingArray(pStud, ARRAY_COUNT);

    int sum = 0;
    sum += pStud[0].GetGoodStudNum() + pStud[1].GetGoodStudNum();
    cout << sum;

        while (num != 4) {
            cout << "\n<----Меню---->" << endl;
            cout << "1 > Вывод данных" << endl;
            cout << "2 > Редактирование" << endl;
            cout << "3 > Процент успевающих студентов" << endl;
            cout << "4 > Завершить" << endl;
            cin >> num;

            switch (num) {
                case 1: { Print(pStud, ARRAY_COUNT); }break;
                case 2: { Edit(pStud, ARRAY_COUNT); }break;
                case 3: {
                    percent = PercentStud(pStud, ARRAY_COUNT);
                    cout << "Процент успевающих студентов: " << percent << "%";
                }break;
                case 4: { cout << "Завершнение работы..."; Sleep(2000); }break;
                default: { cout << "Неверное значение!"; }
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

