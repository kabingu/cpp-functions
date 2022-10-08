// a non-recursive factorial using template
#include <cstdio>

template <typename T>
T factorial( T n )
{
    T rc = n;
    while (n > 1)
    {
        rc *= --n;
    }

    return rc;
}

int main() {
    int i = 5;
    printf("%d! is %d\n", i, factorial(i));

    long long unsigned int llu = 15;
    printf("%lld! is %lld\n", llu, factorial(llu));

    return 0;
}
