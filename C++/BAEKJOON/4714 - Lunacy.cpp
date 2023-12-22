#include <iostream>
        
using namespace std;

int main(void)
{
    double MOON_WEIGHT_RATIO = 0.167;
    while (1)
    {
        double weight;
        cin >> weight;
        if (weight < 0.00)
            break;
        printf("Objects weighing %.2lf on Earth will weigh %.2lf on the moon.\n", weight, weight * MOON_WEIGHT_RATIO);
    }
}