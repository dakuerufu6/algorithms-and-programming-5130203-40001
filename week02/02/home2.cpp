#include <iostream>
using namespace std;

int main() {
	char cont;
	int option, a, b, cnt = 0, maxnum = 0, minnum = 111111111, sumnum = 0, productodd = 1;
	do{
		//MENU
		cout << "\nSelect an option from [1-7] according to the menu:" << endl;
		cout << "[1]. Enter a number in the range between 1000 and 999999"<<endl;
		cout << "[2]. Print the digits of the number"<<endl;
		cout << "[3]. Count how many digits the number has"<<endl;
		cout << "[4]. Return the lowest and highest digits of the number"<<endl;
		cout << "[5]. Return the sum of the digits of the number"<<endl;
		cout << "[6]. Return the product of the odd digits"<<endl;
		cout << "[7]. Calculate the inverted version of the number"<<endl;
		cout << "---------------------------------------------------"<<endl;
		//Пока не введется пункт из меню, будет продолжать запрашивать.
		do {
			cout << "Enter number of option (from 1 to 7): ";
			cin >> option;
		} while (option > 7 || option < 1);
		cout << endl;
		switch (option) {
		//Задание 1.
		case 1:
			do {
				cout << "Enter number (from 1000 to 999999999): ";
				cin >> b;
			} while (option > 999999999 || option < 1000);
			break;
		//Задание 2.
		case 2:
			cout << "Enter number: ";
			cin >> b;
			while (b > 9) {
				if (b / 10) {
					cout << b % 10 << ", ";
				}
				b /= 10;
			}
			cout << b;
			break;
		//Задание 3.
		case 3:
			cout << "Enter number: ";
			cin >> b;
			do {
				b /= 10;
				cnt++;
				if (b == 1) {
					cnt += 1;
				}
			} while (b > 1);
			cout << cnt;
			break;
		//Задание 4.
		case 4:
			cout << "Enter number: ";
			cin >> b;
			do {
				maxnum = max(maxnum, b % 10);
				minnum = min(minnum, b % 10);
				b /= 10;
				if (b == 1) {
					maxnum = max(maxnum, b % 10);
					minnum = min(minnum, b % 10);
				}
			} while (b > 1);
			cout << " Max = " << maxnum;
			cout << " Min = " << minnum;
			break;
		//Задание 5.
		case 5:
			cout << "Enter number: ";
			cin >> b;
			do {
				sumnum += b % 10;
				b /= 10;
				if (b == 1) {
					sumnum += b % 10;
				}
			} while (b > 1);
			cout << "Summa of numbers = " << sumnum;
			break;
		//Задание 6.
		case 6:
			cout << "Enter number: ";
			cin >> b;
			do {
				if ((b % 10) % 2 != 0) {
					productodd *= b % 10;
				}
				b /= 10;
			} while (b > 1); 
			cout << "Product of odd numbers is " << productodd;
			break;
		//Задание 7.
		case 7:
			cout << "Enter number: ";
			cin >> b;
			while (b > 9) {
				if (b / 10) {
					cout << b % 10;
				}
				b /= 10;
			}
			cout << b;
			break;
		}
		//Если напишет Y => код возобновится с начала.
		cout << "\nDo you want continue [Y|N]? "<< endl;
		cin>> cont;
	}while(cont == 'y' || cont == 'Y');
	//Иначе, закончится
		cout << "\n The program is over!"<< endl;
	return 0;

}