#include <iostream>
#include <string>
using namespace std;

struct Score
{
    string name;
    int kor;
    int eng;
};

Score plus_(Score a, Score b)
{
    //여기에 작성하세요.
    Score res;
    res.name = "Total";
    res.kor = a.kor + b.kor;
    res.eng = a.eng + b.eng;
    return res;
}
