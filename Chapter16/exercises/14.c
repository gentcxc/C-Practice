struct shape {
    int shape_kind;
    struct point center;
    union {
        struct {
            int height, width;
        }rectangle;
        struct {
            int radius;
        }circle;
    }u;
}s;

not doing this exercise.