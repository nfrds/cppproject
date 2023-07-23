#include <iostream>
using namespace std;

class Scores {
private:
    int subject1;
    int subject2;
    int subject3;
    int subject4;

public:
    Scores() {
        subject1 = 0;
        subject2 = 0;
        subject3 = 0;
        subject4 = 0;
    }

    Scores(int s1, int s2, int s3, int s4) {
        subject1 = s1;
        subject2 = s2;
        subject3 = s3;
        subject4 = s4;
    }

    void setMarks(int s1, int s2, int s3, int s4) {
        subject1 = s1;
        subject2 = s2;
        subject3 = s3;
        subject4 = s4;
    }

    void getMarks() {
        cout << "Subject 1: " << subject1 << endl;
        cout << "Subject 2: " << subject2 << endl;
        cout << "Subject 3: " << subject3 << endl;
        cout << "Subject 4: " << subject4 << endl;
    }

    double getAverage() {
        double total = subject1 + subject2 + subject3 + subject4;
        return total / 4;
    }

    string getGrade() {
        double average = getAverage();
        if (average >= 80)
            return "Excellent";
        else if (average >= 65)
            return "Good";
        else if (average >= 50)
            return "Satisfactory";
        else
            return "Fail";
    }
};

int main() {
    Scores student_scores;
    student_scores.getMarks();  // Initially all scores are 0

    int subject1, subject2, subject3, subject4;
    cout << "Enter score for subject 1: ";
    cin >> subject1;
    cout << "Enter score for subject 2: ";
    cin >> subject2;
    cout << "Enter score for subject 3: ";
    cin >> subject3;
    cout << "Enter score for subject 4: ";
    cin >> subject4;

    student_scores.setMarks(subject1, subject2, subject3, subject4);
    student_scores.getMarks();  // Updated scores

    double average_score = student_scores.getAverage();
    string grade = student_scores.getGrade();

    cout << "Average score: " << average_score << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}

