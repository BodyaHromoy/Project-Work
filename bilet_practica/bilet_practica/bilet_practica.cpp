#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    int m;
    cout << "Введите количество строк: ";
    cin >> n;
    cout << "Введите количество столбцов: ";
    cin >> m;
    char** mass = new char*[n];
    for (int i = 0; i < n; ++i)
        mass[i] = new char[m];
    int i, j, c(-1);
    char* word = new char[n * m];
    cout << "Введите фразу без пробелов: ";
    cin >> word;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            c++;
            mass[i][j] = word[c];
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Шифр: ";
    for (j = 0; j < n; j++) {
        for (i = 0; i < m; i++) {
            cout << mass[i][j];
        }
    }
    delete[]mass;
    delete[]word;
    cout << endl;
}