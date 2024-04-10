#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void SwapAlternate(int arr[], int size)
{

    for (int i = 0; i < size; i += 2) //(i+=2) ==> kyoki agar nhi kare ge toh same element swap ho jaye ga
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{

    int even[6] = {1, 22, 32, 42, 33, 44};
    int odd[5] = {223, 45, 56, 65, 66};

    SwapAlternate(even, 6);
    SwapAlternate(odd, 5);

    printArray(even, 6);
    printArray(odd, 5);
    return 0;
}