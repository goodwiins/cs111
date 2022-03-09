#include <iostream>
using namespace std;

int main(){
long grade;
char LetterGrade;

    cout << "Entre a grade.\n";
    cin >> grade; 

    if ((grade < 0) && (grade > 100)){
        if (( grade >= 90 ) && ( grade <= 100 ))
            LetterGrade = 'A';
        else
            if (( grade >= 80 ) && ( grade <= 89 ))
                LetterGrade = 'B';
            else
                if (( grade >= 70 ) && ( grade <= 79 ))
                    LetterGrade = 'C';
                else
                    if (( grade >= 65 ) && ( grade <= 69 ))
                        LetterGrade = 'D';
                    else
                        if (( grade >= 0 ) && ( grade <= 64 ))
                            LetterGrade = 'F';

      cout << "The student's grade of "<< grade << " has earned a grade of "<< LetterGrade<< ".\n";
    } else
      cout << "INVALID GRADE ENTERED. THEY AGAIN!" << endl;

              
   
    return 0;

}