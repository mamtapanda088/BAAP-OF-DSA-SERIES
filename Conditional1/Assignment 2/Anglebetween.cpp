#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int hour, minute;
    cout << "Enter hour (0-12): ";
    cin >> hour;
    cout << "Enter minutes (0-59): ";
    cin >> minute;

    // Calculate angles
    double hour_angle = (hour % 12) * 30 + minute * 0.5;
    double minute_angle = minute * 6;

    // Calculate the difference
    double angle = abs(hour_angle - minute_angle);

    // Get the minimum angle
    angle = min(angle, 360 - angle);

    cout << "The minimum angle is: " << angle << " degrees" << endl;

    return 0;
}