#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/point.hpp"

TEST_CASE("Point operator -")
{
    Point a{0.0, 0.0};
    Point b{3.0, 4.0};
    REQUIRE((a - b) == 5.0);
    REQUIRE((b - a) == 5.0);
}

TEST_CASE("Point = and != operators")
{
    Point p1{1.5, -2.0};
    Point p2{1.5, -2.0};
    Point p3{1.5000001, -2.0};

    REQUIRE(p1 == p2);
}

TEST_CASE("Point operator /")
{
    Point p1{0.0, 0.0};
    Point p2{2.0, 2.0};
    Point mid = p1 / p2;
    REQUIRE(mid.x == 1.0);
    REQUIRE(mid.y == 1.0);
}
