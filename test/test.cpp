#include "include/cunit.hpp"

#include <xtensor/containers/xarray.hpp>

#include <vector>

using namespace cunit;
using namespace xt;

void test_vectors() {
    xarray<double> expected = {1, 2, 3, 4};
    xarray<double> result = {1, 2, 3, 4};
    assert_array_equals(expected, result);
}

int main() {
    test_vectors();
}