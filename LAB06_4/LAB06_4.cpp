#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void calculateGrade(double total, char& grade)
{
    if (total >= 80) grade = 'A';
    else if (total >= 70) grade = 'B';
    else if (total >= 60) grade = 'C';
    else if (total >= 50) grade = 'D';
    else grade = 'F';
}

void displayStudentInfo(string name, string id, double total, char grade)
{
    cout << "Student Name: " << name << endl;
    cout << "Student ID  : " << id << endl;
    cout << "Score       : " << fixed << setprecision(2) << total << endl;
    cout << "Grade       : " << grade << endl;
}

int main()
{
    const int N = 3;
    const int M = 4;

    string name[N], id[N];
    double score[N][M];
    double total[N];
    char grade[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Enter student " << (i + 1) << " name: ";
        getline(cin >> ws, name[i]);

        cout << "Enter student " << (i + 1) << " id: ";
        cin >> id[i];

        total[i] = 0;

        for (int j = 0; j < M; j++)
        {
            cout << "Enter student " << (i + 1)
                << " score" << (j + 1) << ": ";
            cin >> score[i][j];

            total[i] += score[i][j];
        }

        calculateGrade(total[i], grade[i]);
    }

    cout << "-----------------------------" << endl;

    for (int i = 0; i < N; i++)
    {
        displayStudentInfo(name[i], id[i], total[i], grade[i]);
    }

    return 0;
}