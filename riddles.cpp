// Игра "Загадки"
// Дата создания: 09.09.2020
// Автор: Максим Бахия
// EMail: bahiyamd@yandex.ru

#include <iostream>
#include <string.h>
#include <Windows.h>
using namespace std;

bool isEqual_CaseInsensitive(const string& a, const string& b)
{
    return a.size() == b.size() &&
        std::equal(a.begin(), a.end(), b.begin(), [](char cA, char cB) {
        return toupper(cA) == toupper(cB);
            });
}

int main() {
    setlocale(LC_CTYPE, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string zagadki[] = { "Два конца, два кольца, посредине гвоздик.", "Не огонь, а жжется.", "Пять братьев — Годами равные, ростом разные.", "Тебе дано, А люди им пользуются.", "Что слаще всего на свете?" };

    string otvet[] = { "Ножницы", "Крапива", "Пальцы", "Имя", "Сон" };

    string otvecheno[] = { "", "", "", "", "" };

    string name;

    string y_n;

    int balls = 0;

    cout << "Добрый день, как вас зовут? (Введите в поле ниже)" << endl;
    cout << "Моё имя: ";
    cin >> name;
    cout << "Отлично, " << name << ", в игре Загадки вам необходимо разгадывать загадки. Готовы? (Введите в поле ниже Да или Нет)" << endl;
    cin >> y_n;
    if (isEqual_CaseInsensitive(y_n, "Да")) {
        cout << "Отлично, давайте начнем!" << endl;

        cout << "-------------------------" << endl;
        cout << "Загадка #1" << endl;
        cout << "-------------------------" << endl;

        cout << zagadki[0] << endl;
        cin >> otvecheno[0];

        if (isEqual_CaseInsensitive(otvecheno[0], otvet[0])) {
            cout << " " << endl;
            cout << "Верно!" << endl;

            balls++;

            cout << "-------------------------" << endl;
            cout << "Загадка #2" << endl;
            cout << "-------------------------" << endl;

            cout << zagadki[1] << endl;
            cin >> otvecheno[1];

            if (isEqual_CaseInsensitive(otvecheno[1], otvet[1])) {
                cout << " " << endl;
                cout << "Верно!" << endl;

                balls++;

                cout << "-------------------------" << endl;
                cout << "Загадка #3" << endl;
                cout << "-------------------------" << endl;

                cout << zagadki[2] << endl;
                cin >> otvecheno[2];
                    if (isEqual_CaseInsensitive(otvecheno[2], otvet[2])) {
                        cout << " " << endl;
                        cout << "Верно!" << endl;

                        balls++;

                        cout << "-------------------------" << endl;
                        cout << "Загадка #4" << endl;
                        cout << "-------------------------" << endl;

                        cout << zagadki[3] << endl;
                        cin >> otvecheno[3];

                        if (isEqual_CaseInsensitive(otvecheno[3], otvet[3])) {
                                cout << " " << endl;
                                cout << "Верно!" << endl;

                                balls++;

                                cout << "-------------------------" << endl;
                                cout << "Загадка #5" << endl;
                                cout << "-------------------------" << endl;

                                cout << zagadki[4] << endl;
                                cin >> otvecheno[4];

                                if (isEqual_CaseInsensitive(otvecheno[4], otvet[4])) {
                                    cout << " " << endl;
                                    cout << "Вы победили!" << endl;

                                    balls++;
                                    cout << "Игра закончена! Набранно баллов: " << balls << endl;

                                } else {
                                    cout << "Неверно, верный ответ: " << otvet[4] << endl;
                                    cout << "Игра закончена! Набранно баллов: " << balls << endl;
                                    exit(0);
                                }
                        } else {
                            cout << "Неверно, верный ответ: " << otvet[3] << endl;
                            cout << "Игра закончена! Набранно баллов: " << balls << endl;
                            exit(0);
                        }
                } else {
                    cout << "Неверно, верный ответ: " << otvet[2] << endl;
                    cout << "Игра закончена! Набранно баллов: " << balls << endl;
                    exit(0);
                }
            } else {
                cout << "Неверно, верный ответ: " << otvet[1] << endl;
                cout << "Игра закончена! Набранно баллов: " << balls << endl;
                exit(0);
            }
        } else {
            cout << "Вы проиграли, верный ответ: " << otvet[0] << endl;
            cout << "Игра закончена! Набранно баллов: " << balls << endl;
            exit(0);
        }
    } else {
        cout << "Ладно, хорошего дня!" << endl;
        exit(0);
    }

}
