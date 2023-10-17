#include <iostream>
#include <climits>
using namespace std;
class vector
{
public:
    int size;
    int arr[];
    void inputElement()
    {
        cout << "Enter the size of the array" << endl;
        cin >> size;
        arr[size];
        cout << "Now enter the elements" << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Element: " << arr[i] << endl;
        }
    }

    void max()
    {
        int max = INT_MIN;
        for (int i = 0; i < size; i++)
        {
            if (max > arr[i])
            {
                max = arr[i];
            }
        }
        cout << "The largest intizer in the array is " << max << endl;
        ;
    }
    void calculate()
    {
        int sum = 0, avg, above = 0, bellow = 0;
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }
        avg = sum / size;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] < avg)
            {
                bellow++;
            }
            else
            {
                above++;
            }
        }
        cout << "There are " << above << " number above than avg and " << bellow << " number bellow the average " << endl;
    }

    void convert()
    {
        cout<<"The binary representation of all the number is "<<endl;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == 0)
            {
                cout<<0<<endl;
                return;
            }

            int binary[32]; 
            int index = 0;

            while (arr[i] > 0)
            {
                binary[index] = arr[i] % 2;
                arr[i] = arr[i] / 2;
                index++;
            }
            for (int i = index - 1; i >= 0; i--)
            {
                cout<<binary[i];
            }
            cout<<endl;
        }
    }
    void evenOdd()
    {
        int even = 0, odd = 0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        cout << "There are " << even << " number are even and " << odd << " number are odd in the given array" << endl;
    }
};
int main()
{
    vector v;
    v.inputElement();
    v.display();
    v.max();
    v.calculate();
    v.convert();
    v.evenOdd();
    return 0;
}
