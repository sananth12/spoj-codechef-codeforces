    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t,H,P,A;
        scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&H,&P,&A);
        if(H<=P)
        {
            printf("1\n");
            continue;
        }
        double sqrt_val = ((P-2*A)*(P-2*A)) + 8*P*(H-A) ,ans = sqrt(sqrt_val);
        double total = ceil(((2*A-P)+ans)/(2*P));
        printf("%.0lf\n",(2*total)-1);
	}
	return 0;
}
