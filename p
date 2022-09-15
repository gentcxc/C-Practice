if(answer4 < answer3)
    {
        ++expo1;
        ++expo2;
        answer3 = x1 + (z1 * expo1);
        answer4 = x2 * pow(z2, expo2);
    }
    else
    {
        printf("Equation 2 (Compound Interest) Overtakes Equation 1 at exponent value %.2f\n"\
        ,expo2);
    }