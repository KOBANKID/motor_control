/**
 * @file main.cc
 * @author KOBANKID (laputa500@yahoo.co.jp)
 * @brief
 * @version 0.1
 * @date 2019-10-30
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "init.h"

#include <stdint.h>
#include <stdio.h>

#include "macros.h"

/** @addtogroup swcMain */
/*@{*/
int main(int argc, char** argv);
static int sub(void);

static SystemInitializer initializer_;

/**
 * @brief
 *
 */
typedef enum {
    ZERO = 0,
    ONE = 1,
    TWO = 2
} test_enum;

/**
 * @brief
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char** argv)
{
    SystemInitializer::Init();
    //SystemInitializer::Test();
    //SystemInitializer::Cure();
    ;
    DPRINT("hello motor control main\n");

    while (0) {
        DPRINT("while yes1\n");
        DPRINT("while yes2\n");
        DPRINT("while yes3\n");
    }

    while (0) {
        printf("hello\n");
    }

    // initializer_.~SystemInitializer();

    return (0);
}

/*@}*/
