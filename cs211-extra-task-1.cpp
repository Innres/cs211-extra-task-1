#include "cs211-extra-task-1.h"

//Return the number of seconds later that a time in seconds
double seconds_difference(double time_1, double time_2)
{
    assert(time_1 >= 0 && time_2 >= 0);
    return fabs(time_2 - time_1);
}

//Return the number of hours later that a time in seconds
double hours_difference(double time_1, double time_2)
{
    assert(time_1 >= 0 && time_2 >= 0);
    return fabs(time_2 - time_1) / 3600;
}

//Return the total number of hours in the specified number of hours, minutes, and seconds.
double to_float_hours(int hours, int minutes, int seconds)
{
    assert(0 <= hours && 0 <= minutes && minutes < 60 && 0 <= seconds && seconds < 60);

    return hours + (minutes / 60.0) + (seconds / 3600.0);
}

//hours is a number of hours since midnight. Return the hour as seen on a 24 - hour clock.
double to_24_hour_clock(double hours)
{
    assert(hours >= 0);
    double int_part;
    double frac_part = modf(hours, &int_part);
    return (int)int_part % 24 + frac_part;
}

///Returns the hours part of a time in seconds.
int get_hours(int seconds)
{
    assert(seconds >= 0);
    return seconds / 3600;
}

///Returns the minutes part of a time in seconds.
int get_minutes(int seconds)
{
    assert(seconds >= 0);
    return (seconds % 3600) / 60;
}

///Returns the seconds part of a time in seconds.
int get_seconds(int seconds)
{
    assert(seconds >= 0);
    return ((seconds % 3600) % 60) % 60;
}

//Return time at UTC+0, where utc_offset is the number of hours away from
double time_to_utc(int utc_offset, double time)
{
    assert(time >= 0);
    return to_24_hour_clock((time - utc_offset) > 0 ? (time - utc_offset) : 24 + (time - utc_offset));
}

// Return UTC time in time zone utc_offset.
double time_from_utc(int utc_offset, double time)
{
    assert(time >= 0);
    return to_24_hour_clock((time + utc_offset) > 0 ? (time + utc_offset) : 24 + (time + utc_offset));
}