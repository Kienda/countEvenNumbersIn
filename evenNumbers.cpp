/*
Abdoulaye Diallo
Exercise1.1
*/

#include <iostream>

using namespace std;

long count_even_numbers(int[], int);

long count_even_numbers(int an_array[], int array_size)
{
    long counter = 0;

    for (int i = 0; i < array_size; i++)
    {
        if (an_array[i] % 2 == 0)
            counter++;
    }
    return counter;
}

int main()
{
    int size = 10;
    int array[size] = {25, 28, 30, 31, 33, 50, 61, 78, 79, 100};
    long counter = 0;

    counter = count_even_numbers(array, size);

    cout << "The number of the even numbers in the array is: " << counter << endl;
    return 0;
}
