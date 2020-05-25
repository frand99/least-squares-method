#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the no. of coordinates 'n':");
    scanf("%d",&n);
    double x[n],y[n],xs=0,xy=0,xbar=0,ybar=0;
    float a,b;
    printf("Enter %d coordinates in form x,y \n",n);
    for(i=0;i<n;i++){
        printf("Enter the x coordinate (%d) :",i+1);
        scanf("%lf",&x[i]);
        printf("Enter the y coordinate (%d) :",i+1);
        scanf("%lf",&y[i]);
    }
    for(j=0;j<n;j++){
        xs = xs + x[j]*x[j];
        xy = xy + x[j]*y[j];
        xbar = xbar + x[j];
        ybar = ybar + y[j];
    }
    xbar = xbar/n;
    ybar = ybar/n;
    a = (xy - n*xbar*ybar)/(xs - n*xbar);
    b = (ybar*xs - xbar*xy)/(xs - n*xbar*xbar);
    printf("The coordintes are:");
    for(k=0;k<n;k++)
    {
        printf("(%lf,%lf) ",x[k],y[k]);
    }
    printf("\n line is y=(%f)x + %f",a,b);
}







