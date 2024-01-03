#include <stdio.h>


int main()
{
    int mp,bp,d,discount,new_price;
    printf("Enter the marked price : ");
    scanf("%d",&mp);

    printf("Enter the buying price : ");
    scanf("%d",&bp);

    printf("Enter the discount : ");
    scanf("%d",&d);
    
    discount = (mp/100)*d;
    new_price = (mp - discount);
    

    if (new_price < bp)
    {
        int loss = bp-new_price;
        int l = (loss*100)/bp;
        printf("The seller made a loss of %d percent",l);
    }
    else if (bp < new_price)
    {
        float profit = new_price-bp;
        float p = (profit*100)/bp;
        printf("The seller made a profit of %.2f percent",p);
    }
    

}
