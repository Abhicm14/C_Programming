float calculateDiscount(float subtotal)
{
    float discount = 0.0;

    if (subtotal > 1000)   // condition for discount
        discount = subtotal * 0.10;   // 10% discount
    else
        discount = 0.0;

    return discount;
}
