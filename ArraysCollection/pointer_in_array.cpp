#include <iostream>
using namespace std;

int *prepareChaiOrders(int cups)
{
    int *orders = new int[cups];
    for (int i = 0; i < cups; i++)
    {
        orders[i] = (i + 1) * 10;
    }
    return orders;
}

int main()
{
    int cups = 4;
    int *chaiOrder = prepareChaiOrders(cups);

    for (int i = 0; i < cups; i++)
    {
        cout << "The quantity of cup" << " " << i + 1 << " is : " << chaiOrder[i] << endl;
    }
    // this delete is to be done to clean memory in dynamic memory allocation
    delete[] chaiOrder;
    return 0;
}