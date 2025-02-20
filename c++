#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cout << "What is your name?" << endl;
    getline(cin, name);
    cout << "Hello " << name << "." << endl;

    string student_id;
    cout << "What is your Student ID?" << endl;
    getline(cin, student_id);
    cout << "Your ID is " << student_id << "." << endl;

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    float var1, var2;
    cout << "Enter the first number (var1): ";
    cin >> var1;
    cout << "Enter the second number (var2): ";
    cin >> var2;

    float sum_result = var1 + var2;
    float diff_result = var1 - var2;
    float prod_result = var1 * var2;

    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;
    cout << "Sum = " << sum_result << endl;
    cout << "Difference = " << diff_result << endl;
    cout << "Product = " << prod_result << endl;

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cout << "Enter student's name: ";
    getline(cin, name);

    float lab_grade, midterm_grade, final_grade;
    cout << "Enter lab grade: ";
    cin >> lab_grade;
    cout << "Enter midterm grade: ";
    cin >> midterm_grade;
    cout << "Enter final grade: ";
    cin >> final_grade;

    float last_score = (lab_grade * 0.25) + (midterm_grade * 0.35) + (final_grade * 0.40);

    cout << "Name: " << name << endl;
    cout << "Lab: " << lab_grade << endl;
    cout << "Midterm: " << midterm_grade << endl;
    cout << "Final: " << final_grade << endl;
    cout << "Last Score: " << last_score << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    cout << "*" << endl;
    cout << "**" << endl;
    cout << "***" << endl;
    cout << "**" << endl;

    return 0;
}

