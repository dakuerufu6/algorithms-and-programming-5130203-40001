#include<iostream>
#include<cmath>
using namespace std;

int main(){
    char cont;
    int n, option;
    double result, x, last_term;
    do{
        // Ввод номера одной из функций, указанных в условии задачи
        do { 
            cout << "Enter numbers from 2 to 6: ";
            cin >> option;
        }    while ( option < 2 || option > 6);
        switch (option)
        {
        //Формула №2
        case 2:
            last_term = 1;
            result = last_term;
            cout << "Enter x : ";
            cin >> x;
            
            do{
                cout << "Enter n from 2 to 20: ";
                cin >> n;
            } while (n<2||n>20);

            cout<< "Serie terms:"<< endl;
            for(double i=1; i<=n; i++){
                last_term *= x/i;
                
                cout<< last_term << " ";
                result += last_term;
            }
            cout <<"\nThe answer is: " << result;

            break;
        //Формула №3
        case 3:
            cout << "Enter x : ";
            cin >> x;
            do{
                cout << "Enter n from 2 to 20: ";
                cin >> n;
            } while(n < 2|| n > 20);
            result = x;
            cout<< "Serie terms:"<< endl;
            for (double i=1; i<=n; i++) {
                last_term = pow(-1, i)*(pow(x, i + 1)/(i + 1));
                cout << last_term << " ";
                result += last_term;
            }
            cout <<"\nThe answer is: " << result;

            break;
        //Формула №4
        case 4:
            cout << "Enter x : ";
            cin >> x;
            do{
                cout << "Enter n from 2 to 20: ";
                cin >> n;
            } while (n < 2 || n > 20);
            last_term = x;
            result = last_term;
            for (double i = 1; i <= n; i++) {
                last_term *=  pow(x, 2)/((2 * i)*(2 * i + 1));
                cout << last_term << " ";
                result += last_term;
            }
            cout <<"\nThe answer is: " << result;
        
            break;
        //Формула №5
        case 5:
            cout << "Enter x : ";
            cin >> x;

            do{
                cout << "Enter n from 2 to 20: ";
                cin >> n;
            } while (n < 2 || n > 20);

            last_term = 1;
            result = last_term;
            cout<< "Serie terms:"<< endl;

            for(double i=1; i<=n; i++){
                last_term *= -1 * (x * x) / ((2*i - 1)*(2*i));
                cout<< last_term << " ";
                result += last_term;
            }
            cout <<"\nThe answer is: " << result;

            break;
        //Формула №6
        case 6:

            do{
                cout << "Enter x that |x| < 1: ";
                cin >> x;
            } while (abs(x) >= 1);

            do{
                cout << "Enter n from 2 to 20: ";
                cin >> n;
            } while (n < 2|| n > 20);

            result = 1;
            cout << "Serie terms:"<< endl;

            for (double i=1; i<=n; i++) {
                last_term = (i + 1)*pow(x, i);
                cout << last_term << " ";
                result += last_term;
            }
            cout <<"\nThe answer is: " << result;

            break;
        }
        // Указано в Д/З №2.
        cout << "\nWant to continue? [Y/N]: ";
        cin >> cont;
    }while(cont == 'y' || cont == 'Y');
    cout << "\n The program is over!"<< endl;
    return 0;
    
}