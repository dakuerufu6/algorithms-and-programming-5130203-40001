#include <iostream>


using namespace std;

void input_num_elmnts(int* n);
void input_vector(int n, char* x);
char* allocate_memory(int n);
void print_vector(int n, char* x);
void connect_vectors(int n1, int n2, char* x, char*y, char *z);



int main () {
    char * a, * b, * x;
    int n1, n2, n3;

    cout << "A: ";
    input_num_elmnts(&n1);
    cout << "B: ";
    input_num_elmnts(&n2);

    n3 = n1 + n2; 

    a = allocate_memory(n1);
    b = allocate_memory(n2);
    x = allocate_memory(n3);

    cout << "\nEnter elements of vector" << endl;
    cout << "A: " << endl;
    input_vector(n1, a);

    cout << "\nEnter elements of vector" << endl;
    cout << "B: " << endl;
    input_vector(n2, b);

    cout << "\nVector A: " << endl;
	print_vector(n1, a);

    cout << "\nVector B: " << endl;
	print_vector(n2, b);

    connect_vectors(n1, n2, a, b, x);

    cout << "\nThose vectors togerher:" << endl;
    print_vector(n3, x);

}












void input_num_elmnts(int* n) {
	do {
		cout << "\nEnter number of elements (from 1): ";
		cin >> *n;
	} while (*n < 1);   
}

char* allocate_memory(int n) {
	return (char*)malloc(n * sizeof(char));
}

void input_vector(int n, char* x) {
	for (int i = 0; i < n; i++) {
        do {
		    cout << "X[" << i << "]";
		    cin >> x[i];
        } while (not(isalpha(x[i])));
	}
}

void print_vector(int n, char* x) {
	for (int i = 0; i < n; i++) {
		cout << x[i] << " ";
	}
	cout << endl;
}

void connect_vectors(int n1, int n2, char* x, char*y, char *z) {
    if (n1 > n2) {
        for (int i = 0; i < (n2); i++){
            z[(i*2)] = x[i];
            z[((i*2) + 1)] = y[i];
        };
        for (int i = n2; i < n1; i++) {
            z[i + n2] = x[i];
        }
    } else if (n1 < n2) {
        for (int i = 0; i < (n1); i++){
            z[(i * 2)] = x[i];
            z[(i * 2 + 1)] = y[i];
        };
        for (int i = n1; i < n2; i++) {
            z[i + n1] = y[i];
        }
    } else if (n1 == n2) {
        for (int i = 0; i < (n1); i++){
            z[(i*2)] = x[i];
            z[((i*2) + 1)] = y[i];
        };
    }
}