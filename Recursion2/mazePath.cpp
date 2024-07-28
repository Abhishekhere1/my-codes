#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){ // sr/sc/er/ec=starting row/column ending row/column
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays = maze(sr, sc+1, er, ec);
    int downWays = maze(sr+1, sc, er, ec);
    int totalWays = rightWays + downWays;
    return totalWays;
}

int main(){
    // cout<<maze(0,0,2,2);//3x3 maze ans = 6
    cout<<maze(1,1,3,4);//3x3 maze ans = 10

}