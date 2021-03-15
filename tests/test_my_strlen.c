/*
** EPITECH PROJECT, 2021
** test unitaire
** File description:
** test_my_strlen
*/

#include "unit_header.h"

Test(test_my_strlen, should_success_if_my_strlen_have_a_good_result)
{
    cr_assert_eq(my_strlen("Hello"), strlen("Hello"), "Error : my_strlen count %d waited : %d\n", my_strlen("Hello"), strlen("Hello"));
    cr_assert_neq(my_strlen("pizza\n"), strlen("Hello"), "Error : equal, shouldn't\n");
}