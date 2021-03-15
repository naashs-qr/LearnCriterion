/*
** EPITECH PROJECT, 2021
** test unitaire
** File description:
** test_my_atoi
*/

#include "unit_header.h"

Test(test_my_atoi, my_atoi_basic_test)
{
    cr_assert_eq(my_atoi("163"), atoi("163"), "Error : my_atoi count %d, waited : %d\n", my_atoi("163"), atoi("163"));
    cr_assert_neq(my_atoi("1634"), atoi("163"), "Error equals, shouldn't\n");
    cr_assert_eq(my_atoi("-163"), atoi("-163"), "Error : my_atoi count %d, waited : %d\n", my_atoi("-163"), atoi("-163"));
    cr_assert_eq(my_atoi("\0"), atoi("\0"), "Error : my_atoi count %d, waited : %d\n", my_atoi("\0"), atoi("\0"));
    cr_assert_eq(my_atoi("9999999999999999"), 0, "Error : my_atoi count %d, waited : %d\n", my_atoi("9999999999999999"), 0);
}