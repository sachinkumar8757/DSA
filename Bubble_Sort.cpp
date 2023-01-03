#include <iostream>
using namespace std;
int main()
{
    int n, temp;
    cout << "Enter number of element: ";
    cin >> n;
    int arr[n];
    cout << "Enter element:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = n - 1;
    while (count >= 0)
    {
        for (int i = 0; i < count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        count--;
    }
    cout << "Sorted array are:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
