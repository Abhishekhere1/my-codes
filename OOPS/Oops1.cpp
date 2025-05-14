#include<iostream>
using namespace std;

class Player{
  public://access modifiers
  int score;// data members
  // private://access modifiers
  int health;

  // void showHealth(){//member function
  //   cout<<"Health is : "<<health<<endl;
  // }

  // void showScore(){
  //   cout<<"Score : "<<score<<endl;
  // }

  public: 
    //setter
  void setScore(int s){
    score = s;
  }
  void setHealth(int h){
    health = h;
  }
  //getter
  int getScore(){
    return score;
  }
  
  int getHealth(){
    return health;
  }
};

// class Calculator{
//   public:
//   int a;
//   int b;

//   void add(){
//     cout<<a+b<<endl;
//   }
//   void subtract(){
//     cout<<a-b<<endl;
//   }
// };
int main(){
  // //ignore these lines
  // #ifndef ONLINE_JUDGE
  // freopen("input.txt", "r" , stdin);
  // freopen("outpur.txt", "w", stdout);
  // #endif

  // Player amit;
  // amit.score = 90;
  // amit.health = 100;
  // cout<<amit.score<<endl;
  // cout<<amit.health<<endl;

  Player harsh;
  // harsh.health = 20;
  harsh.setScore(10);
  harsh.setHealth(40);
  cout<<harsh.getScore()<<endl;
  cout<<harsh.getHealth()<<endl;

  // cout<<harsh.health<<endl;

  // amit.showHealth();
  // harsh.showScore();

  // Calculator calci;
  // calci.a = 10;
  // calci.b = 7;
  // calci.add();
  // calci.subtract();


}