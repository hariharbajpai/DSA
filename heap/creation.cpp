#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100]; // Corrected: Array of integers
    int size = 0;

    void insert(int val)
    { // Changed parameter to int
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = (index / 2);
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    //heap sort
    void heapSort(int arr[],nt n){
        int t = n;

        while (t>1)
        {
            //step 1: swap
            swap(arr[1],arr[t]);
            t--;
            //step 2: heapify
            heapify(arr,t-1,1);

        }
        
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deletefromHeap()
    {
        if (size == 0)
        {
            cout << "Heap is empty" << endl;
            return;
        }
        //step 1: put lasr element into first position
        arr[1] = arr[size];
        //step 2: delete last element
        size--;

        // step3: take root node to its correct place
        int index = 1;
        while (index <= size / 2) // Corrected: Loop until size/2
        {
            int left = 2 * index;
            int right = 2 * index + 1;

            if (left <= size && arr[index] < arr[left]) // Corrected: Compare with arr[left]
            {
                swap(arr[index], arr[left]);
                index = left;
            }
            else if (right <= size && arr[index] < arr[right]) // Corrected: Compare with arr[right]
            {
                swap(arr[index], arr[right]);
                index = right;
            }
            else
            {
                return;
            }
        }
    }
};

//*********Heapify algorithm************
void heapify(int arr[], int n , int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

    if(left <= n && arr[largest] < arr[left]) {
        largest = left;
    } 

    if(right <= n && arr[largest] < arr[right]) {
        largest = right;
    }

    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
int main()
{
    heap h;
    h.insert(10);
    h.insert(33);
    h.insert(30);
    h.insert(44);
    h.insert(21);
    h.insert(60);

    h.print();

    h.deletefromHeap();
    h.print();

    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;
    for (int i = n/2; i >0; i--)
    {
        heapify(arr,n,i);
    }
    cout<<"printing the array now"<<endl;
    for (int i = 1; i <= n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}
