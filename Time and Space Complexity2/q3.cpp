// Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = 0; i < n; i++) {
// for(int j = 1; j * j < n; j *= 2) {
// c++;
// }
// }
// Solution :

// Let us analyze how many times the inner loop will iterate. Let us see the values
// of j for that.
// J = 1, 2, 4, ... 2k
// So 2^k * 2^k < n
// So 2^(k+1) < n
// So Time complexity becomes logN.