#include "include/cunit.hpp"

#include <vector>

using namespace cunit;

void test_vectors() {
    std::vector<int> expected = {1, 2, 3, 4, 5};
    std::vector<int> result = {1, 2, 3, 4, 4};

    CUnit::assert_iterable_equals(expected, result);
}

int main() {
    test_vectors();
}