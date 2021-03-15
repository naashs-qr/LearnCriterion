/*
** EPITECH PROJECT, 2021
** test unitaire
** File description:
** test_my_strcmp
*/

#include "unit_header.h"

Test(test_my_strcmp, my_strcmp_basic_test)
{
    cr_assert_eq(my_strcmp("le defender cest chiant", "le defender cest chiant"), strcmp("le defender cest chiant", "le defender cest chiant"), "Error : my_strcmp count %d, waited : %d\n", my_strcmp("le defender cest chiant", "le defender cest chiant"), strcmp("le defender cest chiant", "le defender cest chiant"));
    cr_assert_neq(my_strcmp("le defender cest chians", "le defender cest chiant"), strcmp("le defender cest chiant", "le defender cest chiant"), "Error : equal shouldn't\n");
}