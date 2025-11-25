#include<iostream>
using namespace std;
int main()
{
    int arr[1000] = { 0 }, j = 0, sum = 0, cheng = 1, max, min;
    float average = 0.0;
    for (int i = 0; i < 100; i++)
    {
        int a;
        cin >> a;

        if (a == -1)
            break;
        else
            arr[i] = a; j++;
    }
    max = arr[0];
    min = arr[0];
    for (int i = 0; i < j; i++)
    {
        cout<<arr[i]<<" "<<max<<"\n";
        sum += arr[i];
        cheng *= arr[i];
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    average = (float)sum / (float)j;
    cout << "Sum is " << sum << endl;
    printf("Average is %.1f\n", average);
    cout << "Product is " << cheng << endl;
    cout << "Smallest is " << min << endl;
    cout << "Largest is " << max;
    return 0;
}