#include <iostream>
using namespace std;
// copy above functions here

void process_pointer_2_pointer(int **array, int rows, int cols);

int main()
{
    int a[5][10] = { { } };
   
    int *b[5];  // surrogate
    for (int i = 0; i < 5; ++i)
    {
        b[i] = a[i];
    }
    // another popular way to define b: here the 2D arrays dims may be non-const, runtime var
    // int **b = new int*[5];
    // for (size_t i = 0; i < 5; ++i) b[i] = new int[10];
    process_pointer_2_pointer(b, 5, 10);
    // process_2d_array(b, 5);
    // doesn't work since b's first dimension decays into a pointer thereby becoming int**
}


// int *array[10] is just fancy notation for the same thing
void process_pointer_2_pointer(int **array, int rows, int cols)
{
    cout << __func__ << endl;
    for (int i = 0; i < rows; ++i)
    {
        cout << i << ": ";
        for (int j = 0; j < cols; ++j)
            cout << array[i][j] << '\t';
        cout << endl;
    }
}