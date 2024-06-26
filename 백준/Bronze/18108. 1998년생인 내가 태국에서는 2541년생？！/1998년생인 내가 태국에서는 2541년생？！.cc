#include <iostream>
using namespace std;

int main() {
    int buddhist_year;
    cin >> buddhist_year;

    int gregorian_year = buddhist_year - 543;

    cout << gregorian_year << endl;

    return 0;
}
