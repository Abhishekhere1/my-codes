// #include<iostream>
// #include<fstream>

// using namespace std;

// int main()
// {
//     // File ko open karna hai
//     ofstream fout;
//     fout.open("zoom.txt"); //craete kar dega or fir open karega
//     fout<<"Hello India";

//     fout.close(); // Resource release kar paaun
// }

#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int>arr(5);
    cout<<"Enter the input : ";
    for(int i=0; i<5; i++)
    cin>>arr[i];

    // file ko open karo
    ofstream fout;
    fout.open("zero.txt");
    fout<<"Original data\n";

    for(int i = 0; i<5; i++)
    {
        fout<<arr[i]<<" ";
    };


    fout<<"\nSorted data\n";

    sort(arr.begin(),arr.end());
    for(int i = 0; i<5; i++)
    {
        fout<<arr[i]<<" ";
    };



}