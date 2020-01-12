const int md = 1e9 + 7;

void add(int& a, int b) {
    assert(INT_MAX - b >= a);
    a += b;
    while (a >= md) a -= md;
}

void sub(int& a, int b) {
    assert(INT_MIN + b <= a);
    a -= b;
    while (a < 0) a += md;
}

int mult(int a, int b) {
    return (a * 1ll * b) % md;
}

