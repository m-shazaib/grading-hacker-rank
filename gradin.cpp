#include <iostream>
using namespace std;

class GradePolicy {
public:
    GradePolicy() {
        for (int i = 0; i <= 59; i++)
        {
            grade[i] = 0;
            //student[i] = 0;

        }
        inc = 0;
    }
    void ProgramInput() {
        int test;
        cin >> inc;
        for (int i = 0; i < inc; i++) {
            cin >> test;
            grade[i] = (test >= 0 && test <= 100) ? test : 0;

        }
        return;
    }
    void RoundOff() {
        int test = 0;
        for (int i = 0; i < inc; i++) {
            test = grade[i] / 5;
            test = (test * 5) + 5;
            test = test - grade[i];



            if (test < 3)
            {
                if (grade[i] < 38)
                {

                }
                else {
                    while (grade[i] % 5 > 0)
                    {
                        grade[i]++;
                    }
                }
            }

        }
        return;
    }
    void GetGrades() {
        for (int i = 0; i < inc; i++) {
            cout << grade[i] << endl;
        }
        return;
    }




private:
    int grade[60];

    int inc;
};



int main() {
    GradePolicy s;

    //GradePolicy();
    s.ProgramInput();
    s.RoundOff();
    s.GetGrades();
    return 0;
}