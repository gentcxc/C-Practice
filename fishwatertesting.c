/**This program is a simple practice for fishwater testing. The goal is to provide a clear 
 * and concise answer according to the water parameters given. This program should
 * individually recieve and analyze different integers; and provide a synopsis of the water
 * situation based on each parameter.
 **/

#include <stdio.h>


void pHanalyze(float);     
void Ammoniaanalyze(int);
void Nitriteanalyze(int);
void Nitrateanalyze(int);
void Hardnessanalyze(int);
void Alkalinityanalyze(int);
void n(void);               //print(\n)

int main(void)
{
    float pH;
    int Ammon, Nrites, Nrates, Hard, Alk;
    printf("Hello There, I hope you are having a wonderful day.\nMy name is Albert, your freshwater\
 testing buddy.\nPlease enter your water parameters below.\n\n");

    printf("Enter pH Level: ");
    scanf("%f", &pH);
    n();
    printf("Enter Ammonia ppm:  ");
    scanf("%d", &Ammon);
    n();
    printf("Enter Nitrite ppm: ");
    scanf("%d", &Nrites);
    n();
    printf("Enter Nitrate ppm: ");
    scanf("%d", &Nrates);
    n();
    printf("Enter Hardness dH: ");
    scanf("%d", &Hard);
    n();
    printf("Enter Alkalinity dKh: ");
    scanf("%d", &Alk);
    n();
    pHanalyze(pH);
    Ammoniaanalyze(Ammon);
    Nitriteanalyze(Nrites);
    Nitrateanalyze(Nrates);
    Hardnessanalyze(Hard);
    Alkalinityanalyze(Alk);
    printf("\nHave a great day!   ><(((°>\n");

    return 0;
}
void n(void)
{
    printf("\n");
}
void pHanalyze(float level)
{
    if (level > 8)
    {    
        printf("pH Summary: Your water is not acidic enough, consider using a pH down supplement\n");
        return;
    }
    if (level < 6.5)
    {
        printf("pH Summary: Your water is a bit too acidic, consider pH up supplement\n");
        return;
    }
    if ((level >= 6.5) && (level <= 8))
    {
        printf("pH Summary: Your water is in generally good condition\n");
    }
}
void Ammoniaanalyze(int ppm)
{
    if (ppm > 0)
        printf("Ammonia Summary: Your tank has too much ammonia. Swiftly consider doing\
 a water change, and or buying ammonia killing product.\n");
    else
        printf("Ammonia Summary: Your tank's ammonia levels are safe\n");
}
void Nitriteanalyze(int ppm)
{
    if (ppm > 0)
        printf("Nitrite Summary: Your tank has too many nitrites. Swiftly consider doing\
 a water change.\n");
    else
        printf("Nitrite Summary: Your tank's nitrate levels are safe\n");
}
void Nitrateanalyze(int ppm)
{
    if (ppm > 38)
        printf("Nitrate Summary: Your nitrate level is high, \
a water change should be done.\n");
    else if (ppm > 30)
        printf("Nitrate Summary: Your nitrate levels are safe, but are getting\
 higher, consider a water change in the near future. \n");
    else
        printf("Nitrate Summary: Your nitrate levels are safe.\n");
}
void Hardnessanalyze(int num)
{
    if ((num >= 5) && (num <= 12))
        printf("Hardness Summary: Acceptable Hardness\n");
    else if (num < 5)
        printf("Hardness Summary: Low, perform a water change to raise.\n");
}
void Alkalinityanalyze(int Alk)
{
    if ((Alk >= 7) && (Alk <= 12))
        printf("Alkalinity Summary: Generally good.\n");
    else if (Alk < 7)
        printf("Alkalinity Summary: Low Alkalinity, consider a water change\
and or alkalinity raising products.\n");
    else 
        printf("Alkalainity Summary: High Alkalinity, consider dilluting\
 the water with purified, low mineral water, or read further online.\n");
}
