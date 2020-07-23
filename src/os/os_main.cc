#include <stdio.h>
#include <stdlib.h>
#include "os_common.h"
#include "os_ctrl.h"
#include "os_scheduler.h"

#include <iostream>


KBN_OS_RESULT os_main(int argc, char** argv);

template <typename T>
T add(T aa, T bb)
{
    return aa;
}

class ExcepTest
{
public:
    ExcepTest(){std::cout << "ex constructer is called" << std::endl;}
    ~ExcepTest(){}
    ExcepTest(const ExcepTest& et) { std::cout << "ExcepTest Handler" << std::endl; }
};


int main(int argc, char** argv)
{
    printf("add = %ld\n", add(3, 5));
    printf("add = %s\n", add("500", "300"));

    try {
        ExcepTest yy;
        //std::cout << "in try" << std::endl;
        int i = 10 / 0;
        //throw yy;
    } catch(int i) {
        std::cout << "in catch" << std::endl;
    } catch(ExcepTest &e) {
        std::cout << "class handler" << std::endl;
    } catch(...) {
        std::cout << "unexpected error occur" << std::endl;
    }


    // (void)os_main(argc, argv);
}

KBN_OS_RESULT os_main(int argc, char** argv)
{
    uint32_t i;

    if (argc == 0) {
        printf("argc = 0\n");
    } else {
        for(i = 0; i < argc; i++) {
            printf("argc=%d, argv[0]=%s\n", argc, argv[i]);
        }
    }

    printf("hello os main\n");

    os_ctrl_main();

    return(KBN_OK);
}

