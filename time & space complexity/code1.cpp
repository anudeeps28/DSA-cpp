void swap (x,y){
    int t;

    t = x; // this takes 1 unit of time
    x = y; // this also takes 1 unit of time
    y = t; // this also takes 1 unit of time
}

/* So, the total time taken in 3, which is of 3*n^0 O(n^0) = O(1) = constant */
