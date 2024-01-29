module;


export module fetched_lib;

export auto fib(int n) -> int {
    if (n < 2) {
        return n;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}