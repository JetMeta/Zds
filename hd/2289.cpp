#include <stdio.h>
#include <math.h>
const double PI = acos(-1.0);
const double eps = 0.000000001;

double GetVolume(double r,double R,double h,double H)
{
    double u = h/H*(R-r) + r;/*中部小圆台上底半径,根据比例可以求*/
    return PI/3*(r*r+r*u+u*u)*h;/*圆台面积公式*/
}

double BiSearch(double r,double R,double H,double v)
{
    double left,right,tem,mid;
    left = 0,right = 100;
    while ((right-left)>eps)
    {
        mid = (left+right)/2;
        tem = GetVolume(r,R,mid,H);
        if (fabs(tem-v)<=eps)
            return mid;
        else if(tem<v)
            left=mid+eps;
        else
            right = mid-eps;
    }
    return (right+left)/2;
}

int main()
{
    int test;
    double r,R,H,v;
    //freopen("e:\\1.txt","r",stdin);
    scanf("%d",&test);
    while (test--)
    {
        scanf("%lf%lf%lf%lf",&r,&R,&H,&v);
        printf("%.6lf\n",BiSearch(r,R,H,v));
    }
    return 0;
}
