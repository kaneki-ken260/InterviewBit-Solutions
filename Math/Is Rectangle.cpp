int Solution::solve(int A, int B, int C, int D) {
    if((A==B && C==D) && (A>=C || C>=A)) return 1;
    if((A==C && B==D) && (A>=B || B>=A)) return 1;
    if((A==D && C==B) && (A>=C || C>=A)) return 1;

    return 0;  
}
