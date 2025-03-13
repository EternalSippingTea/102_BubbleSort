#include <iostream>
using namespace std;

int arr[20];
int nData;

void InputData()
{
    while (true)
    {
        cout << "Masukkan jumlah data";
        cin >> nData;
        if (nData < 10)
        {
            break;
        }
        else
        {
            cout << "Jumlah data maksimal 10" << endl;
        }
    }
    cout << "==========="<< endl;
    cout << "Masukkan Data" << endl;
    cout << "==========="<< endl;
    cout << endl;

    for (int i = 0; i < nData; i++)
    {
        cout << "Input Data ke=" << i + 1 << "=";
        cin >> arr[i];
    }
    
}

void bubblesort(){
    int pass = 1; 

   do
   {
    for (int j = 0; j <= nData - 1 - pass; j++)
    {
        if (arr[j] > arr[j + 1]){
            int tempe;
            tempe = arr[j];
            arr[j]=arr[j + 1];
            arr[j + 1]=tempe;
        }
    }
    pass = pass + 1;
   } while (pass <= nData - 1);
}

void tampilData()
{
    cout << "Tampil Data" << endl;
    cout << endl;

    for (int i = 0; i < nData; i++)
    {
        cout << "Data ke -" << i + 1 << "=" << arr[i] << endl;
    }
    
}

int main()
{
    InputData();
    bubblesort();
    tampilData();
    return 0;
}
