#include"Eagle.h"

int timeconversion(float value)
{
    float time;

    int hour = (int)value;
    int min = (int)((value - hour)*100);

    time = (hour * 60) + min;

    return time;
}