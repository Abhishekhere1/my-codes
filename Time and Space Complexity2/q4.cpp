// Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = n; i > 0; i /= 2) {
// for(int j = 0; j < i; j ++) {
// c++;
// }
// }
// Solution :
// Here the inner loop will be traversed ‘i’ times so let us see the values of
// ‘i’ here.
// Values of ‘i’ will be n, n/2, n/4, n/8 and so on
// So the total number of iterations in the above nested loop will be n + n/2 + n/4
// + n/8 + ..
// Which sums to 2n
// So time complexity becomes O(2n) ~ O(n)