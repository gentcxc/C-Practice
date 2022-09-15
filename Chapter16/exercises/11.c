struct {
    double a;
    union {
        char b[4];
        double c;
        int d;
    }e;
    char f[4];
}s;
8, 4,8,4,4

/**
 * There will be a total of 20 bytes, and here is why
 * the first double is 8 bytes
 * the f array at the end of the structure is worth 4 bytes
 * the union is worth eight, since the double value is the largest in
 * the union and they all share that space;
**/