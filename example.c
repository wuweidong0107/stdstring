#include <stdio.h>
#include "stdstring.h"

int main(void)
{
    printf("string_is_empty1: %d\n", string_is_empty("A"));
    printf("string_is_empty2: %d\n", string_is_empty(""));
    printf("string_is_empty3: %d\n", string_is_empty(NULL));
    printf("-----------------------------\n");

    printf("string_is_equal1: %d\n", string_is_equal("ABC", "123"));
    printf("string_is_equal2: %d\n", string_is_equal(NULL, "123"));
    printf("string_is_equal3: %d\n", string_is_equal("ABC", NULL));
    printf("string_is_equal4: %d\n", string_is_equal("ABC", "AB"));
    printf("string_is_equal5: %d\n", string_is_equal("AB", "ABC"));
    printf("string_is_equal6: %d\n", string_is_equal("ABC", "ABC"));
    printf("-----------------------------\n");
    
    printf("string_is_equal_case1: %d\n", string_is_equal_case("A", "B"));
    printf("string_is_equal_case2: %d\n", string_is_equal_case("A", "a"));
    printf("string_is_equal_case3: %d\n", string_is_equal_case("A", "A"));
    printf("-----------------------------\n");
    
    printf("string_starts_with1: %d\n", string_starts_with("A", "ABC"));
    printf("string_starts_with2: %d\n", string_starts_with("A", "1"));
    printf("string_starts_with3: %d\n", string_starts_with("ABC", "A"));
    printf("string_starts_with4: %d\n", string_starts_with("ABC", "ABC"));
    printf("-----------------------------\n");
    
    printf("string_starts_with_case1: %d\n", string_starts_with_case("A", "B"));
    printf("string_starts_with_case1: %d\n", string_starts_with_case("A", "a"));
    printf("string_starts_with_case1: %d\n", string_starts_with_case("A", "A"));
    printf("-----------------------------\n");

    printf("string_ends_with1: %d\n", string_ends_with("A", "ABC"));
    printf("string_ends_with2: %d\n", string_ends_with("ABC", "B"));
    printf("string_ends_with3: %d\n", string_ends_with("ABC", "c"));
    printf("string_ends_with4: %d\n", string_ends_with("ABC", "C"));
    printf("string_ends_with5: %d\n", string_ends_with("ABC", "BC"));

    printf("string_ends_with_case1: %d\n", string_ends_with_case("ABC", "B"));
    printf("string_ends_with_case2: %d\n", string_ends_with_case("ABC", "c"));
    printf("string_ends_with_case3: %d\n", string_ends_with_case("ABC", "C"));
    printf("-----------------------------\n");

    char str1[] = "ABC";
    char str2[] = "aBC";
    char str3[] = "abc";
    printf("string_to_upper1: %s\n", string_to_upper(str1));
    printf("string_to_upper2: %s\n", string_to_upper(str2));
    printf("string_to_upper3: %s\n", string_to_upper(str3));
    printf("-----------------------------\n");

    char str4[] = "jack wu";
    printf("string_ucwords1: %s\n", string_ucwords(str4));
    printf("-----------------------------\n");
}