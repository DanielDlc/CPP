#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int total{0};
    int gradeCounter{0};

    cout << "Enter grade or -1 to quit: ";
    int grade;
    cin >> grade;

    while (grade != -1) {
        total += grade;
        gradeCounter  += 1;

        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
    }

    if (gradeCounter != 0) {
        double average{static_cast<double>(total) / gradeCounter};
        cout << "\nTotal of the " << gradeCounter
            << " grades entered is " << total;
        cout << setprecision(2) << fixed;
        cout << "\nClass average is " << average <<endl;
    }
    else {
        cout << "No grades were entered" <<endl;
    }
}
