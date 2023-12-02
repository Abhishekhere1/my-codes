#include<iostream>
 using namespace std;
 int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    // if(n>=91 && n<=100){
    //     cout<<"Excellent";
    // }
    // if(n>=81 && n<=90){
    //     cout<<"very good";
    // }
    // if(n>=71 && n<=80){
    //     cout<<"good";
    // }
    // if(n>=61 && n<=70){
    //     cout<<"can do better";
    // }
    // if(n>=51 && n<=60){
    //     cout<<"Average";
    // }
    // if(n>=41 && n<=50){
    //     cout<<"Below Average";
    // }
    // if(n<40){
    //     cout<<"Fail";
    // }
    
    //alternate method
/*
    if(n>=91){
        cout<<"Excellent";
    }
    else{
        if(n>=81){
            cout<<"Very Good";
        }
        else{

            if(n>=71){
                cout<<"Good";
            }
            else{
                if(n>=61){
                    cout<<"Can do better";
                }
                else{
                    if(n>=51){
                        cout<<"Average";
                    }
                    else{
                        if(n>=41){
                            cout<<"Below Average";
                        }

                        else{
                            cout<<"Fail";
                        } 
                        
                    }
                }
            }
        }
    }

 }
 */


// 3rd method

if(n>=91){
    cout<<"Excellent";
}
else if(n>=81){
    cout<<"Very Good";
}
else if(n>=71){
    cout<<"Good";
}
else if(n>=61){
    cout<<"Can Do Better";
}
else if(n>=51){
    cout<<"Average";
}
else if(n>41){
    cout<<"Below Average";
}
else{
    cout<<"Fail";
}
}