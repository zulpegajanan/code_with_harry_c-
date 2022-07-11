#include <iostream>
using namespace std;


//STUDENT(roll no)-->EXAM(2 subject's mark)-->RESULT(average mark of these subject)

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int r){
           roll_number = r;
     }
    void get_roll_number(void){
          cout << "The roll number is " << roll_number << endl;
     }
};


class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2){
          maths = m1;
          physics = m2;
     }
    void get_marks(void){
          cout << "The marks obtained in maths are: " << maths << endl;
          cout << "The marks obtained in physics are: " << physics << endl;
     }
};


class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};


int main()
{
    Result gaju;
    gaju.set_roll_number(420);
    gaju.set_marks(94.0, 90.0);
    gaju.display_results();
    return 0;
}
