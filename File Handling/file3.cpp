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

    //file ko open karo
    ofstream fout;
    fout.open("z3.txt");
    fout<<"Original data\n";

    
    fout<<"\nSorted data\n";

    sort(arr.begin(),arr.end());
    for(int i = 0; i<5; i++)
    {
        fout<<arr[i]<<" ";
    };

}
