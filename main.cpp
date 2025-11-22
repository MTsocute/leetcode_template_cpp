#include "main.h"


template <class T>
concept Addable = requires(T x, T y) { x + y; };

template <class T>
concept Subtractable = requires(T x, T y) { x - y; };


template <Addable T>
auto add(T a, T b) -> decltype(a + b)
{

    return a + b;
}

int main()
{
    fmt::print("Ans = {}\n", add(3, 5));
    return 0;
}
