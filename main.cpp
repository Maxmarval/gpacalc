#include <iostream>
using namespace std;

int main()
{
    bool run = true;
    char choice;

    while (run)
    {
        int fullYearClasses = 0;
        int semesterClasses = 0;
        int numberofC = 0;
        int fullYearGrade = 0;
        int semesterGrade = 0;

        cout << "Enter number of full year classes: ";
        cin >> numberofC;
        int *arr = new int[numberofC];
        for (int i = 0; i < numberofC; i++)
        {
            cout << "Enter grade for class " << i + 1 << ": ";
            cin >> arr[i];
        }
        for (int i = 0; i < numberofC; i++)
        {
            fullYearGrade += arr[i];
        }
        fullYearGrade /= numberofC;

        cout << "Enter number of semester classes: ";
        cin >> numberofC;
        int *arr2 = new int[numberofC];
        for (int i = 0; i < numberofC; i++)
        {
            cout << "Enter grade for class " << i + 1 << ": ";
            cin >> arr2[i];
        }
        for (int i = 0; i < numberofC; i++)
        {
            semesterGrade += arr2[i];
        }
        semesterGrade /= numberofC;

        delete[] arr;
        delete[] arr2;
        cout << fullYearGrade << " " << semesterGrade << endl;
        cout << "Your GPA:" << (fullYearGrade * 2 + semesterGrade) / 3 << endl;
        cout << "Run again? (y/n): ";
        cin >> choice;
        if (choice == 'n' || choice == 'N')
        {
            run = false;

            cin.get();
        }
    }
    return 0;
}