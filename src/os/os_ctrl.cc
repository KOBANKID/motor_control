/**
 * @file   os_ctrl.cc
 * @author KOBANKID
 * @date   Wed Nov 20 23:18:55 2019
 * 
 * @brief  
 * 
 * 
 */

#include "os_scheduler.h"
#include "os_semaphore.h"
#include <stdio.h>
#include <unistd.h>
#include <signal.h>

OsScheduler  g_os_scheduler;
OsScheduler *p_os_scheduler = &g_os_scheduler;

void os_ctrl_main(void)
{
    OsScheduler os_sceduler;
    OsSemaphore   OsSemaphore(50);

    g_os_scheduler.startOS();
    p_os_scheduler->startOS();
    //OsSemaphore::setSignalHandler();

    // alarm(1);
    kill(0, SIGUSR1);
    
    while(1);

    printf("os_ctrl_main\n");

    return;

}
