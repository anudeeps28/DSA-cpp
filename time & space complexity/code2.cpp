int sum (int A[], int n){
    int s, i;

    s = 0; // this will take 1 unit time

    for (i=0; i<n; i++){ // i = 0 will take 1; i<n will take n+1; i++ will take n | so a total of n+1 for this line

        s = s+A[:]; // this will take n
    }

    return s; // this will take 1
}

// so the total is 2n+3 = O(n)
// and anyways we know that one for loop going form 0 to n is of O(n)

