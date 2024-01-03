#include <stdio.h>

int main()
{
    int h1, m1, s1, h2, m2, s2, h3, m3, s3, rs;
    printf("TIME1 :");
    scanf("%d%d%d", &h1, &m1, &s1);
    printf("TIME2 :");
    scanf("%d%d%d", &h2, &m2, &s2);
    
    int sec1 = (h1*3600)+(m1*60)+(s1);
    int sec2 = (h2*3600)+(m2*60)+(s2);
    int t3 = (sec1+sec2);
    h3 = t3/3600;
    rs = (t3 - (h3*3600));
    m3 = rs / 60;
    rs = rs - (m3*60);
    s3 = rs;

    printf("The output time is %d:%d:%d",h3,m3,s3);
}
