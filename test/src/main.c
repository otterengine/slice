
/* A friendly warning from bake.test
 * ----------------------------------------------------------------------------
 * This file is generated. To add/remove testcases modify the 'project.json' of
 * the test project. ANY CHANGE TO THIS FILE IS LOST AFTER (RE)BUILDING!
 * ----------------------------------------------------------------------------
 */

#include <test.h>

// Testsuite 'slice'
void slice_int_array(void);
void slice_get_int(void);
void slice_errors(void);

bake_test_case slice_testcases[] = {
    {
        "int_array",
        slice_int_array
    },
    {
        "get_int",
        slice_get_int
    },
    {
        "errors",
        slice_errors
    }
};


static bake_test_suite suites[] = {
    {
        "slice",
        NULL,
        NULL,
        3,
        slice_testcases
    }
};

int main(int argc, char *argv[]) {
    return bake_test_run("test", argc, argv, suites, 1);
}
