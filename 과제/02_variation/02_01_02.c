int solve(int N){int a,b,c,Q=-1;for(a=1;a<=9&&Q==-1;a++)for(b=a;b<=9&&Q==-1;b++)for(c=b;c<=9&&Q==-1;c++)if(a*b*c==N)Q=(a-1?a:0)*100+(a!=0||b-1?b:0)*10+c;return Q;
}
main(){int N;scanf("%d", &N);printf("%d\n", solve(N));return 0;}