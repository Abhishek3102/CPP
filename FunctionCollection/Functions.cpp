// returnType functionName(paramters){
//     function body
// }

// functionName(arguments);

// parameters are what you define in the function signature, while arguments are what you pass when calling the function.
// if a parameter is optional, then passing its corresponding argument is also optional when calling the function.

#include <iostream>

using namespace std;

int getBodyWeight(int weight)
{
    return weight;
}

int main()
{
    int bodyWeight = getBodyWeight(87);
    cout << "Your body weight is " << bodyWeight;
    return 0;
}
