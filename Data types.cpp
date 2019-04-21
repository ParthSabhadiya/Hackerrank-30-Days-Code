#include <iostream>
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    int x;
    double y;
    string z;


    string temp;

    getline(cin, temp);
    x = stoi(temp);

    getline(cin, temp);
    y = stod(temp);

    getline(cin, z);


    printf("%i\n", i + x);
    printf("%.1f\n", d + y);


    cout << s + z << endl;

    return 0;
}
