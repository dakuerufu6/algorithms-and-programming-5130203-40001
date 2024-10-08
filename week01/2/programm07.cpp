#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int client, prod, method, payments;
    string credit;
    double price, disc = 0, final;
    double rate;

    wcout << "Введите категорию клиента (0 - отличные, 1 - хорошие, 2 - средние, 3 - плохие): ";
    cin >> client;

    wcout << "Введите категорию товара (0 - A, 1 - B, 2 - C): ";
    cin >> prod;

    wcout << "Введите стоимость товара: ";
    cin >> price;

    if (client == 0) {
        if (prod == 0) disc = 40;
        else if (prod == 1) disc = 30;
        else if (prod == 2) disc = 20;
    } else if (client == 1) {
        if (prod == 0) disc = 30;
        else if (prod == 1) disc = 20;
        else if (prod == 2) disc = 10;
    } else if (client == 2) {
        if (prod == 0) disc = 20;
        else if (prod == 1) disc = 10;
        else disc = 0;
    } else {
        if (prod == 0) disc = 0;
        else if (prod == 1) disc = -5;
        else disc = -10;
    }

    final = price - (price * disc / 100);

    wcout << "Выберите метод оплаты (0 - наличными, 1 - банковским чеком, 2 - в кредит): ";
    cin >> method;

    wcout << "Цена товара: " << price << endl;

    if (method == 0) {
        wcout << "Итоговая сумма к оплате: " << final << endl;

    } else if (method == 1) {
        int interest;
        wcout << "Введите процентную ставку для банковского чека (от 3% до 15%): ";
        cin >> interest;
        final = final * (1 + interest / 100.0);
        wcout << "Итоговая сумма к оплате с учетом процентов по чеку: " << final << endl;

    } else if (method == 2) {
        wcout << "Введите количество платежей в рассрочку (от 1 до 6): ";
        cin >> payments;

        if (payments < 1 || payments > 6) {
            wcout << "Неверное количество платежей" << endl;
            return 0;
        }

        wcout << "Введите тип кредита (1 - платина, 2 - бизнес: ";
        cin >> credit;

        if (credit == "1") {
            rate = 5.0;
        } else if (credit == "2") {
            rate = 2.0;
        } else {
            wcout << "Неверный тип кредита" << endl;
            return 0;
        }

        final = final * pow(1 + rate / 100.0, payments);

        wcout << "Итоговая сумма к оплате с учетом процентов по кредиту: " << final << endl;
    } else {
        wcout << "Неверный метод оплаты" << endl;
    }

    return 0;
}