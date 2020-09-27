#include "cs211-extra-task-1.h"

int main()
{
    //seconds_difference
    assert(seconds_difference(1800.0, 3600.0) - 1800.0 < DBL_EPSILON);
    assert(seconds_difference(2000.0, 2200.0) - 200.0 < DBL_EPSILON);
    assert(seconds_difference(1000.0, 1000.0) - 0.0 < DBL_EPSILON);

    //hours_difference 
    assert(hours_difference(1800.0, 3600.0) - 0.5 < DBL_EPSILON);
    assert(hours_difference(900.0, 3600.0) - 0.75 < DBL_EPSILON);
    assert(hours_difference(1000.0, 1000.0) - 0.0 < DBL_EPSILON);

    //to_float_hours 
    assert(to_float_hours(1, 0, 0) - 1 < DBL_EPSILON);
    assert(to_float_hours(0, 30, 0) - 0.5 < DBL_EPSILON);  
    assert(to_float_hours(0, 0, 36) - 0.01 < DBL_EPSILON);

    //to_24_hour_clock
    assert(fabs(to_24_hour_clock(24) - 0) < DBL_EPSILON);
    assert(fabs(to_24_hour_clock(120) - 0) < DBL_EPSILON);
    assert(fabs(to_24_hour_clock(34) - 10) < DBL_EPSILON);

    //get_hours
    assert(get_hours(0) == 0);
    assert(get_hours(3601) == 1);
    assert(get_hours(20000) == 5);

    //get_minutes
    assert(get_minutes(0) == 0);
    assert(get_minutes(61) == 1);
    assert(get_minutes(187) == 3);

    //get_seconds
    assert(get_seconds(0) == 0);
    assert(get_seconds(123) == 3);
    assert(get_seconds(621) == 21);

    //time_to_utc
    assert(fabs(time_to_utc(0, 11.0) - 11.0) < DBL_EPSILON);
    assert(fabs(time_to_utc(-11, 18.0) - 5.0) < DBL_EPSILON);
    assert(fabs(time_to_utc(-1, 0.0) - 1.0) < DBL_EPSILON);
    assert(fabs(time_to_utc(-1, 24.0) - 1.0) < DBL_EPSILON);
    assert(fabs(time_to_utc(0, 0) - 0.0) < DBL_EPSILON);

    //time_from_utc
    assert(fabs(time_from_utc(0, 0.0) - 0.0) < DBL_EPSILON);
    assert(fabs(time_from_utc(0, 12.0) - 12.0) < DBL_EPSILON);
    assert(fabs(time_from_utc(0, 1.0) - 1.0) < DBL_EPSILON);
    assert(fabs(time_from_utc(3, 12.0) - 15.0) < DBL_EPSILON);

}