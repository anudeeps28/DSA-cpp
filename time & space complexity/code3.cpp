void Add (int n) {
int i,j;
for (i=0; i<n; i++){ // this will take n+1 times
    for (j=0, j<n, j++){ // this will n (everything inside the for loop takes n) | this is also a loop and it will also take n+1 | so total becomes n(n+1)
        C[i][j] = A[i][j] + B[i][j] // this will n (everything inside the for loop takes n) | this is also inside the previous loop which will reprat n times. | so the total becomes n*n
    }
}
}

// so the final time function = 2n^2 + 2n + 1 
// i.e. O(n^2)