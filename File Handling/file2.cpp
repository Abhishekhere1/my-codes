// #include<iostream>
// #include<fstream>

// using namespace std;

// int main()
// {
//     ifstream fin;
//     // file ko open karo
//     fin.open("zoom.txt");
//     // fr read karo
//     char c;
//     c = fin.get();
//     while(!fin.eof())
//     {
//         cout<<c;
//         c = fin.get();

//     };

//     fin.close();
// }


#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("z1.txt");
    fout<<"Hello India\n";
    fout<<"Hello Rohit\n";
    fout<<"Hello Bhai\n";
    fout.close();

    ifstream fin;
    fin.open("z1.txt");

    string line;

    while(getline(fin,line))
    {
        cout<<line<<endl;
    }

    fin.close();

}