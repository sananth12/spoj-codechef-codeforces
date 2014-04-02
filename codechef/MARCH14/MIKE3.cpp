#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   long i,j,n,m,k;
   cin>>n>>m;
   long mn[21][20001]={0},map[21][21],cnt[20001]={0},a, conected[50]={0};
   for(i=0;i<21;i++)
    for(j=0;j<21;j++)
        map[i][j]=1;

   for(i=0;i<m;i++)
   {
       cin>>k;
       while(k--)
       {
           cin>>a;
           a--;
           long tmp=cnt[a];
           if(tmp!=0)
           {
                for( j=0;j<tmp;j++)
				{
					int t2=mn[j][a];
					t2-=1;
					map[t2][i]=0;
					map[i][t2]=0;
				}
           }
           mn[tmp][a]=i+1;
           cnt[a]+=1;
       }
   }
 /*for(i=0;i<m;i++)
    {for(j=0;j<m;j++)
        cout<<map[i][j];
    cout<<endl;
    }*/
    long ans=0,tempmax,count,tmpcnt,pos,bad;
	long  mm=m;
	while(mm--)
	{
		pos=0;
		for(i=0;i<m;i++)
		{
			if (i == m-mm-1) continue;
			if (map[m-mm-1][i] == 1)
			{
				conected[pos++]=i+1;
			}
		}
		count=1;
		while(count!=0)
		{
			count=0;
			bad=0;
			for(i=0; i<pos; i++)
			{
				tmpcnt=0;
				for(j=0; j<pos; j++)
				{
					if(map[conected[i]-1][conected[j]-1] == 0)
                        tmpcnt += 1;
				}
				if(tmpcnt > count)
				{
					count=tmpcnt;
					bad=conected[i];
				}
			}
			i=0;
			if(bad != 0)
			{
				while(conected[i] != bad)
                    i++;
				while(i<pos-1)
				{
					conected[i]=conected[i+1];
					i++;
				}
				pos=pos-1;
			}
		}
		tempmax=pos+1;
		if(tempmax > ans)
			ans=tempmax;
	}
    cout<<ans;

return 0;
}

