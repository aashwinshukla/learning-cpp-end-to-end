#include <ios>
#include <iomanip>
#include <iostream>

using namespace std;

int main(){

    // std::flush = flushes the output buffer, prints everything to terminal immediately
    cout << "hello" << flush;
    cout << endl;

    // std::setw = sets the width for the next output value, makes things aligned and readable
    cout << setw(10) << "age" << setw(10) << "name" << endl;
    cout << setw(10) << 25 << setw(10) << "arjun" << endl;

    // std::right and std::left = aligns content inside setw to the right or left
    cout << setw(10) << right << "right" << endl;
    cout << setw(10) << left  << "left"  << endl;

    // std::setfill = fills the empty space inside setw with a character of your choice
    cout << setfill('-') << setw(10) << "hi" << endl;
    // output: --------hi

    // reset fill back to space after using setfill
    cout << setfill(' ');

    // std::showpos = shows + sign in front of positive numbers
    cout << showpos << 42 << endl;    // output: +42
    cout << noshowpos;                // turns it off

    // std::dec, std::oct, std::hex = prints the number in decimal, octal, or hexadecimal
    int num {255};
    cout << dec << num << endl;   // output: 255
    cout << oct << num << endl;   // output: 377
    cout << hex << num << endl;   // output: ff
    cout << dec;                  // reset back to decimal

    // std::uppercase = makes hex letters and scientific notation uppercase
    cout << uppercase << hex << 255 << endl;   // output: FF
    cout << nouppercase << dec;                // reset

    // std::fixed = shows decimal numbers in fixed notation (no scientific notation)
    double pi {3.14159265358979};
    cout << fixed << pi << endl;       // output: 3.141593

    // std::scientific = shows numbers in scientific notation
    cout << scientific << pi << endl;  // output: 3.141593e+00

    // reset to default notation
    cout.unsetf(ios::fixed | ios::scientific);

    // std::setprecision = controls how many digits are shown
    // with fixed it controls digits after the decimal point
    cout << fixed << setprecision(2) << pi << endl;    // output: 3.14
    cout << fixed << setprecision(10) << pi << endl;   // output: 3.1415926536
    // precision is limited by the data type (double ~15 digits, float ~7 digits)

    // std::showpoint = always shows the decimal point even for whole numbers
    cout << showpoint << 10.0 << endl;    // output: 10.0000
    cout << noshowpoint;                  // turns it off

    return 0;
}
