#include <iostream>
using namespace std;

int main() {
	char cont;
	int option, a, b, cnt = 0, maxnum = 0, minnum = 111111111, sumnum = 0, productodd = 1;
	do{
		do {
			cout << "Enter number of option (from 1 to 7): ";
			cin >> option;
		} while (option > 7 || option < 1);
		cout << endl;
		switch (option) {
		case 1:
			do {
				cout << "Enter number (from 1000 to 999999999): ";
				cin >> b;
			} while (option > 999999999 || option < 1000);
			break;
		case 2:
			cout << "Enter number: ";
			cin >> b;
			while (b > 1) {
				if (b / 10) {
					cout << b % 10 << ", ";
				}
				b /= 10;
			}
			cout << b;
			break;
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
		case 7:
			cout << "Enter number: ";
			cin >> b;
			while (b > 1) {
				if (b / 10) {
					cout << b % 10;
				}
				b /= 10;
			}
			cout << b;
			break;
		}
		cout << "\nDo you want continue [Y|N]? "<< endl;
		cin>> cont;
	}while(cont == 'y' || cont == 'Y');
		cout << "\n The program is over!"<< endl;
	return 0;

}



	/*int a, b;

	do {
		cin >> a;
		cin >> b;
	} while (a < 100 || a > 1000 || b < 100 || b > 1000);
	
	int i, mcm;

	i = 2;
	mcm = 1;

	while (a != 1 && b != 1) {
		if (a % i == 0 || b % i == 0) {
			mcm *= i;

			if (a % i == 0)
				a /= i;

			if (b % i == 0)
				b /= i;
		}
		else {
			i++;
		}
	}
	cout << "MCM = " << mcm;
	*/
