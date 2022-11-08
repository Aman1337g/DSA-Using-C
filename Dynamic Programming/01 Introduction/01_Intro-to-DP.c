/*
    -> It is used to solve optimization problems.
    1. Breaks down the complex problem into simpler subproblems.
    2. Find optimal solution to these subproblems.
    3. Store the results of subproblems (memoization).
        Memoization -  memoization ensures that a function doesn’t run for the same inputs more than once by keeping a
                       record of the results for given inputs(usually in an object)
    4. Reuse them so that same subproblem is not calculated more than once.

    -> Applicabe to problems which are having properties of -
        -> Overlapping subproblems and optimal substructure.
        Optimal Substructure -> means the solution of a given optimization problem can be obtained by combination of
                                optimal solutions of its subproblems.
        Ovelapping subproblems -> means program is calculating same subproblem multiple times like in case of recursive
                                  fibonnaci sequence.

    eg - 1+1 = 2 , we are storing it
        then 1+1+1 = 2+1 = 3, we are using the stored value to compute the result.
        Similary , 1+1+1+1 = 3+1 = 4 . Although space complexity increases but time complexity decreases.

    eg - Fibonacci Problem - 0 1 1 2 3 5 8 13 21 34 ....
    1st Approach - Recursive Method

    int fib(int n)
    {
        if(n<0) error;
        if(n==0) return 0;
        if(n==1) return 1;
        sum = fib(n-1)+fib(n-2);
        return sum;
    }

    Here the time complexity = O(2^n) which is much higher.

    2nd Approach - DP Method (storing the intermediate results and then re-using those results so that we don't
                   have to recompute the subproblems again and again) [TOP-DOWN APPROACH]

    Here time complexity = O(n+1) = O(n) which is comparatively much lower from above.


    T.C. and S.C. in different Cases

    Recursion — Big O(2^N)
    Memoization — O(N) — time, O(N) — space
    Bottoms Up — O(N) — time, O(1) — space
*/