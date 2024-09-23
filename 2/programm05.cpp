#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string cover, material;
    int floors, m, sum;
    char services;
    cout << "Amount of metrs: ";
    cin >> m;
    cout << "Type of cover: ";
    cin >> cover;
    if (cover == "withroof") {
        sum = m * 5;
        cout << "5k rub per metr " << endl;
    }
    else if (cover == "withoutroof") {
        sum = m * 3;
        cout << "3k rub per metr " << endl;
        
    }
    else if (cover == "garden") {
        sum = m;
        cout << "1k rub per metr" << endl;
    }
    cout << "Type of material: ";
    cin >> material;
        if (material == "hq") {
        cout << "+ " << sum * 0.15 << "k rub" << endl;
        sum *= 1.15;
    }
    else if (material == "saman") {
        cout << "+ " << sum * 0.1 << "k rub" << endl;        
        sum *= 1.10 * sum;
    }
    else if (material == "other") {
        cout << "+ " << sum * 0.05 << "k rub" << endl;
        sum *= 1.05 * sum;
    }
    cout << "Availability of services: ";
    cin >> services;
        if (services == 'Y' || services == 'y') {
        cout << "+ 2.5k rub" << endl; 
        sum += 2.5;
    }
    cout << "Number of floors: ";
    cin >> floors;
    if (floors == 2){
        cout << "+ " << sum * 0.1 << "k rub" << endl;        
        sum *= 1.1;
    }
    else if (floors == 3 || floors == 4){
        cout << "+ " << sum * 0.15 << "k rub" << endl;        
        sum *= 1.15;
    }
    else if (floors > 4){
        cout << "+ " << sum * 0.2 << "k rub" << endl;        
        sum *= 1.2;
    }
    cout << "The final sum = " << sum << "k rubles " << endl;
    }