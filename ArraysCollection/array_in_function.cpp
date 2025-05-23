#include <iostream> // Includes the input/output library so we can use cout, cin, etc.

using namespace std; // Allows us to write 'cout' instead of 'std::cout'

// Function that takes an array and its size, and returns the total sum of the array elements
int totalChaiServed(int chai[], int size)
{
    int total = 0; // Initialize a variable to store the running total of cups served

    // Loop through each element of the array from index 0 to (size - 1)
    for (int i = 0; i < size; i++)
    {
        total += chai[i]; // Add the value at the current index to the total
    }

    return total; // Return the total number of cups served
}

int main()
{
    int i;
    int day[7] = {1, 2, 3, 4, 5, 6, 7};
    // Declare and initialize an array to store the number of chai cups served each day for a week
    int chaiServed[7] = {50, 60, 55, 70, 65, 80, 75};

    // Call the function totalChaiServed and pass the array and its size (7) as arguments
    // Store the returned result (total cups served in a week) in the variable 'total'
    int total = totalChaiServed(chaiServed, 7);

    // cout << "Chai served on day " << day[i] << " is " << total[i];

    // (Optional) Display the result - You can uncomment this line to print the total
    cout << "Total chai served in the week: " << total << endl;

    return 0; // Exit the program successfully
}

// Concept	                    |    Explanation
// int chai[]	                |   This is an array parameter, meaning you're passing an array into the function.
// int size	                    |    This tells the function how many elements the array has, because C++ doesn’t automatically know.
// chai[i]	                    |    Accesses each element of the array using an index in the loop.
// total += chai[i]	            |    Adds the current element’s value to the running total.
// chaiServed[7] =              |    Declares and initializes the array with 7 specific values.
// totalChaiServed(chaiServed, 7)|	Calls the function with the array and its size.

// #include <iostream>

// using namespace std;

// // Function to calculate total sum of an array (not used in this new approach but kept for reference)
// int totalChaiServed(int chai[], int size) {
//     int total = 0;
//     for (int i = 0; i < size; i++) {
//         total += chai[i];
//     }
//     return total;
// }

// int main() {
//     int chaiServed[7] = {50, 60, 55, 70, 65, 80, 75}; // Chai served each day

//     int runningTotal = 0; // To keep track of cumulative chai served

//     cout << "Cumulative chai served each day:\n";
//     for (int i = 0; i < 7; i++) {
//         runningTotal += chaiServed[i]; // Add today's chai to total

//         // Print the expression part: 50 + 60 + 55...
//         cout << "Total chai by day " << i + 1 << ": ";
//         for (int j = 0; j <= i; j++) {
//             cout << chaiServed[j];
//             if (j < i)
//                 cout << " + ";
//         }

//         // Print the result
//         cout << " = " << runningTotal << endl;
//     }

//     return 0;
// }
