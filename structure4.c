#include<stdio.h>
#include<math.h>
struct triangle
{ 
    int a,b,c;
};
int main()
{
    int i,j,n;
    printf("Enter the number of triangles\n");
    scanf("%d",&n);
    struct triangle arr[n],temp[n],temp1[n],temp2[n];
    int p[n],s[n];
    for(i=0;i<n;i++)
    {
        printf("\n");
        scanf("%d%d%d",&arr[i].a,&arr[i].b,&arr[i].c);
    }
    for(i=0;i<n;i++)
    {
        p[i]= (arr[i].a+arr[i].b+arr[i].c)/2;
        s[i]= sqrt(p[i]*(p[i]-arr[i].a)*(p[i]-arr[i].b)*(p[i]-arr[i].c));
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(s[j]>s[j+1])
            {
                
                temp[j].a = arr[j].a;
                arr[j].a = arr[j+1].a;
                arr[j+1].a = temp[j].a;

                temp1[j].b = arr[j].b;
                arr[j].b = arr[j+1].b;
                arr[j+1].b = temp1[j].b;
                
                temp2[j].c = arr[j].c;
                arr[j].c = arr[j+1].c;
                arr[j+1].c = temp2[j].c;
            }
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d %d %d\n",arr[i].a,arr[i].b,arr[i].c);
    }
    return 0;
}