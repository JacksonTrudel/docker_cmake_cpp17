/**
 * This is an example program that uses C++17 standard constructs.
 * This simply serves as a test, that C++17 is configured correctly.
 *
 * This source code in this file is taken from:
 * https://www.learncpp.com/cpp-tutorial/configuring-your-compiler-choosing-a-language-standard/
 */

#include <array>
#include <iostream>
#include <string_view>
#include <tuple>
#include <type_traits>

namespace a::b::c
{
    inline constexpr std::string_view str{"hello"};
}

template <typename... T>
std::tuple<std::size_t, std::common_type_t<T...>> sum(T... args)
{
    return {sizeof...(T), (args + ...)};
}

int main()
{
    auto [nbArgs, sumArgs]{sum(1, 2, 3)};
    std::cout << a::b::c::str << ' ' << nbArgs << ' ' << sumArgs << '\n';

    std::array arr{1, 2, 3};

    std::cout << std::size(arr) << '\n';

    return 0;
}
