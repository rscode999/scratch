#include "fast_linked_list/fast_linked_list.hpp"

#include <cassert>
#include <stdexcept>

using namespace utils;

template<typename T>
void assert_equals(T expected, T result) {
    if(!(expected == result)) {
        throw std::logic_error("Expected and result are not equal");
    }
}



void test_add() {
    fast_linked_list<char> l;
    
    assert_equals(0, l.size());

    l.push_back('a');
    assert_equals(1, l.size());
    assert_equals('a', l.at(0));

    std::cout << "Tests passed" << std::endl;
}


void test_remove() {
    fast_linked_list<char> l;
    
    l.push_back('a');
    l.pop_back();
    assert_equals(0, l.size());

    std::cout << "Tests passed" << std::endl;
}


void test_overloads() {
    fast_linked_list<char> l;
    l.push_back('a');
    l.push_back('b');
    l.push_back('c');

    assert_equals('a', l[0]);
    assert_equals('c', l[2]);
}



int main() {
    test_add();
    test_remove();
    test_overloads();
}