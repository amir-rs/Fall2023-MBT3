#include <iostream>

using namespace std;

int main() {
    //declaring arrays
    int a , b;
     cout<<"enter value array [][] : ";
    cin>>a>>b;
    int first[a][b];
    int second[a][b];
    int result[a][b];
   

    // input first matrix.
    cout << endl << "|Input Matrix a|" << "\n\n";
    for (int i = 0; i < a; ++i) {

        for (int j = 0; j < b; ++j) {
            cout << "Enter a" << i + 1 << j + 1 << " :\t ";
            cin >> first[i][j];
        }
    }
    // input second matrix.
    cout << endl << "|Input Matrix b|" << "\n\n";
    for (int i = 0; i < a; ++i) {

        for (int j = 0; j < b; ++j) {
            cout << "Enter b " << i + 1 << j + 1 << " :\t ";
            cin >> second[i][j];
        }
    }
    //displaying matrix first and second
    cout << "|Entered Matrix a and b|" << "\n\n";
    for (int i = 0; i < a; ++i) {

        for (int j = 0; j < b; ++j) {

            cout << first[i][j] << " ";
        }
        cout << "\t";
        for (int j = 0; j < b ; ++j) {

            cout << second[i][j] << " ";
        }

        cout << endl;
    }

    // Multiplying matrix first and second
    for (int i = 0; i < a; ++i) {

        for (int j = 0; j < b; ++j) {

            int sum = 0;
            for (int k = 0; k < b; ++k) {
                sum += first[i][k] * second[k][j];
            }
            result[i][j] = sum;
        }
    }
    // Displaying the result array.
    cout << endl << "|Resultant multipication Matrix| " << "\n\n";
    for (int i = 0; i < a; ++i) {

        for (int j = 0; j < b; ++j) {

            cout << " " << result[i][j];
        }
        cout << endl;
    }
        //addition matrix first and second
    for (int i = 0; i < a; i++) {

        for (int j = 0; j < b; j++) {

            int sum = 0;
                result[i][j]= first[i][j] + second[i][j];
        }
    }
    // Displaying the result array.
    cout << endl << "|Resultant addition Matrix| " << "\n\n";
    for (int i = 0; i < a; ++i) {

        for (int j = 0; j < b; ++j) {

            cout << " " << result[i][j];
        }
        cout << endl;
    }
    
    //subtraction matrix first and second
    for (int i = 0; i < a; i++) {

        for (int j = 0; j < b; j++) {

            int sum = 0;
                result[i][j]= first[i][j] - second[i][j];
        }
    }
    // Displaying the result array.
    cout << endl << "|Resultant subtraction Matrix| " << "\n\n";
    for (int i = 0; i < a; ++i) {

        for (int j = 0; j < b; ++j) {

            cout << " " << result[i][j];
        }
        cout << endl;
    }
    return 0;
}
