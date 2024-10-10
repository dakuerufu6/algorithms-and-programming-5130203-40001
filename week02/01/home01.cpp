#include  <iostream>
using namespace std;

int main () {
    //Обьявляем переменные
    int A, B, sum_del_A = 0, sum_del_B = 0, cnt_del_A, cnt_del_B, odd_del_A = 1, even_del_B = 0;
    bool Flag;
    double C;
    //Задаём значения для чисел
    cout << "Enter number for A: \t";
    cin >> A;
    cout << "Enter number for B: \t";
    cin >> B;
    //Находим сумму делителей и их количество для первого числа. + Произведение нечетных делителей
    for (int i = 1; i <= A; i++) {
        if (A % i == 0) {
            sum_del_A += i;
            cnt_del_A += 1;
            if (i % 2 != 0) {
                odd_del_A *= i;
            }
        }
    }
    //Аналогичные действия для второго числа. + Сумма четных делителей

    for (int i = 1; i <= B; i++) {
        if (B % i == 0) {
            sum_del_B += i;
            cnt_del_B += 1;
            if (i % 2 == 0) {
                even_del_B += i;
            }
        }
    }
    
    cout << endl;
    cout << sum_del_A + sum_del_B << endl;
    cout << cnt_del_A * cnt_del_B << endl;
    cout << odd_del_A + even_del_B << endl;
    
    // Находим наибольший общий делитель (НОД)
    for (int k = A; k > 1; k--) {
        if (A % k == 0 && B % k == 0){
            cout << k << endl;
            Flag = true;
            break;
        }
    }
    //Если НОД нету => числа простые.
    if (not(Flag)) {
        cout << "Both numbers are prime." << endl;
    }
}