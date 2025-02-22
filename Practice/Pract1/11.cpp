
// Q
// Chef recently graduated Computer Science in university, so he was looking for a job. He applied for several job offers, but he eventually settled for a software engineering job at ShareChat. Chef was very enthusiastic about his new job and the first mission assigned to him was to implement a message encoding feature to ensure the chat is private and secure.

// Chef has a message, which is a string 
// S
// S with length 
// N
// N containing only lowercase English letters. It should be encoded in two steps as follows:

// Swap the first and second character of the string 
// S
// S, then swap the 3rd and 4th character, then the 5th and 6th character and so on. If the length of 
// S
// S is odd, the last character should not be swapped with any other.
// Replace each occurrence of the letter 'a' in the message obtained after the first step by the letter 'z', each occurrence of 'b' by 'y', each occurrence of 'c' by 'x', etc, and each occurrence of 'z' in the message obtained after the first step by 'a'.
// The string produced in the second step is the encoded message. Help Chef and find this message.

// Input
// The first line of the input contains a single integer 
// T
// T denoting the number of test cases. The description of 
// T
// T test cases follows.
// The first line of each test case contains a single integer 
// N
// N.
// The second line contains the message string 
// S
// S.
// Output
// For each test case, print a single line containing one string — the encoded message.

// Constraints
// 1
// ≤
// T
// ≤
// 1
// ,
// 000
// 1≤T≤1,000
// 1
// ≤
// N
// ≤
// 100
// 1≤N≤100
// ∣
// S
// ∣
// =
// N
// ∣S∣=N
// S
// S contains only lowercase English letters
// Sample 1:
// Input
// Output
// 2
// 9
// sharechat
// 4
// chef
// shizxvzsg
// sxuv
// Explanation:
// Example case 1: The original message is "sharechat". In the first step, we swap four pairs of letters (note that the last letter is not swapped), so it becomes "hsraceaht". In the second step, we replace the first letter ('h') by 's', the second letter ('s') by 'h', and so on, so the resulting encoded message is "shizxvzsg".

// method 1

#include <iostream>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n; // lenght of string
        string s; cin>>s;
        
        // 1st step of encoding
        if(n%2==0)
        {
            // even
            for(int i=0;i<n;i=i+2)  // len= 6 ; index -> 0 to 5
            {
                char z = s[i+1];  // z='h'
                s[i+1] = s[i] ;  //
                s[i]=z;
            }
        }
        else
        {
            // odd
            for(int i=0;i<n-1;i=i+2)
            {
                char z = s[i+1];  // z='h'
                s[i+1] = s[i] ;  //
                s[i]=z;
            }
        }
        
        // 2nd stage of encoding
        
        for(int i=0;i<n;i++)
        {
            char c = s[i];   // recent character  // b --> 98
            //int index  =  s[i]-97;
            int index  =  c-97;   // 1
            int req = 25-index;   // 24
            
            //  range 97 to 122
            req = req + 97;
            char y = (char)req;  // real ASCII code
            cout<<y;
            
        }
        cout<<endl;
        
        
        
    }
}




// method 2

// #include <bits/stdc++.h>
// using namespace std;

// void solution()
// {
//     int N, temp =0, tempnum;
//     string S;
// 	cin >> N >> S;
// 	for(int i = 0; i < N - 1; i = i + 2)
// 	{
// 	    temp = S[i];
// 	    S[i] = S[i + 1];
// 	    S[i+1] = temp;
// 	}
	
// 	for(int i = 0; i < N; i++)
// 	{
// 	    tempnum = 0;
// 	    if(int(S[i]) <= 109)
// 	    {
// 	        tempnum = int(S[i]) - 97;
// 	        S[i] = char(122 - tempnum);
// 	    }
// 	    else if(int(S[i]) >= 110)
// 	    {
// 	        tempnum = 122 - int(S[i]);
// 	        S[i] = char(97 + tempnum);
// 	    }
// 	}
	
// 	cout << S << endl;

// }
	
	
// int main() {
// 	// your code goes here
// 	int T;
// 	cin >> T;
// 	while(T--)
// 	{
//         solution();
// 	}

// }
