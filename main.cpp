#include <iostream>
using namespace std;

int main() {
    int fullYearClasses = 0;
    int semesterClasses = 0;
    int x = 0;
    int fullYearGrade = 0;
    int semesterGrade = 0;

    cout << "Enter number of full year classes: ";
    cin >> x;
    int* arr = new int[x];
    for (int i = 0; i < x; i++) {
        cout << "Enter grade for class " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < x; i++) {
        fullYearGrade += arr[i];
        fullYearGrade /= x;
    }

    cout << "Enter number of semester classes: ";
    cin >> x;
    int* arr2 = new int[x];
    for (int i = 0; i < x; i++) {
        cout << "Enter grade for class " << i + 1 << ": ";
        cin >> arr2[i];
    }
    for (int i = 0; i < x; i++) {
        semesterGrade += arr2[i];
        semesterGrade /= x ;
    }

    delete[] arr;
    delete[] arr2;

   cout << "Your GPA:" << (fullYearGrade * .66 + semesterGrade * .33);
   cin.get();
     return 0;
}