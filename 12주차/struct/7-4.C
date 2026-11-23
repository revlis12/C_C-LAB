#include <iostream>
using namespace std;

struct Body
{
    int height;
    double weight;
};

Body makeStudent(Body father, Body mother)
{
    //여기에 작성하세요.
    Body student;
    student.height = (father.height + mother.height) / 2 + 5;
    student.weight = (father.weight + mother.weight) / 2.0 - 4.5;
    return student;
}