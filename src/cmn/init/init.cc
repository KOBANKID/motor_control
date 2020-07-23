/**
 * @file   init.cc
 * @author Toshi <Toshi@Toshi-no-MacBook-Pro.local>
 * @date   Mon Nov 11 23:36:34 2019
 * 
 * @brief  
 * 
 * 
 */
#include "init.h"

#include <stdint.h>
#include <stdio.h>

#include "macros.h"
#include "type.h"


/** 
 * 
 * 
 */
SystemInitializer::SystemInitializer()
{
    DPRINT("SystemInitializer constructor is called\n");
}

/** 
 * 
 * 
 */
SystemInitializer::~SystemInitializer()
{
    DPRINT("SystemInitializer destructor is called\n");
}

bool SystemInitializer::Init(void)
{
    bool init_is_success;
    DPRINT("Init function called\n");

    init_is_success = InitHardware();

    if (init_is_success == true) {
        init_is_success = InitHardwareAbstraction();
    }

    if (init_is_success == true) {
        init_is_success = InitMiddleware();
    }

    if (init_is_success == true) {
        init_is_success = InitApplication();
    }

    return (true);
}

bool SystemInitializer::InitHardware(void)
{
    DPRINT("Init hardware function called\n");

    return (true);
}

bool SystemInitializer::InitHardwareAbstraction(void)
{
    DPRINT("Init hardware abstraction function called\n");

    return (true);
}

bool SystemInitializer::InitMiddleware(void)
{
    DPRINT("Init middleware function called\n");

    return (true);
}

bool SystemInitializer::InitApplication(void)
{
    DPRINT("Init application function called\n");

    return (true);
}

