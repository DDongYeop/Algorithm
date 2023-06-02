#include <iostream>
using namespace std;

int main()
{
    string subject, credit;
    float score, result = 0;
    int loopIndex = 0;

    for (int i = 0; i < 20; ++i)
    {
        cin >> subject >> score >> credit;

        if (credit == "A+")
            result += score * 4.5f;
        else if (credit == "A0")
            result += score * 4.0f;
        else if (credit == "B+")
            result += score * 3.5f;
        else if (credit == "B0")
            result += score * 3.0f;
        else if (credit == "C+")
            result += score * 2.5f;
        else if (credit == "C0")
            result += score * 2.0f;
        else if (credit == "D+")
            result += score * 1.5f;
        else if (credit == "D0")
            result += score * 1.0f;
        else if (credit == "P")
            continue;
        loopIndex += score;
    }

    cout.precision(6);
    cout << fixed << result / loopIndex;
}