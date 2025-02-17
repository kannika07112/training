#include <stdio.h>

int main()
{
    char name[20];
    int id, units;

    printf("Enter the name: ");
    scanf("%s", name);

    printf("Enter id: ");
    scanf("%d", &id);

    printf("Enter units: ");
    scanf("%d", &units);

    // initializing base amount
    float base_amt = 100.00;
    float surcharge = 0.00;
    float total_amt = 0.00;

    if (units > 100)
        base_amt += (100.0f * 5.0f);
    else
        base_amt += (units * 5.0f);

    if (units > 300)
        base_amt += (200.0f * 7.0f);
    else if (units >= 100 && units < 300)
        base_amt += ((units - 100.0f) * 7.0f);

    if (units > 300)
        base_amt += ((units - 300.0f) * 10.0f);

    if (base_amt > 1000.0f)
    {
        surcharge += ((base_amt / 100.0f) * 5.0f);
    }
    total_amt = base_amt + surcharge;

    printf("\n\nCustomer Name: %s\n", name);
    printf("Customer ID: %d\n", id);
    printf("Units Consumed: %d\n", units);
    printf("Base Bill: %f\n", base_amt);
    printf("Surcharge: %f\n", surcharge);
    printf("Total Bill: %f\n", total_amt);
}