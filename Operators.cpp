#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double meal;
    int tip,tax;

    string temp;

    getline(cin,temp);
    meal=stod(temp);

    getline(cin,temp);
    tip=stoi(temp);

    getline(cin,temp);
    tax=stoi(temp);
    double x = tip* meal/ 100;
    double y = tax* meal/ 100;
     int z= (int)round(x + y+ meal);
    printf("%i ", z);

    return 0;
}





