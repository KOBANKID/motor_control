/**
 * @file   semaphore.cc
 * @author Toshi <Toshi@Toshi-no-MacBook-Pro.local>
 * @date   Wed Nov 27 01:09:26 2019
 * 
 * @brief  
 * 
 * 
 */
#include "os_semaphore.h"
#include "os_type.h"
#include <stdio.h>
//#include <stdatomic.h>
#include <atomic>
#include <unistd.h>
#include <signal.h>

// void Semaphore::setSignalHandler(void)
// {
//     printf("setSignalHandler\n");
//     //signal(SIGINT, Semaphore::signalHandler);
//     //signal(SIGALRM, Semaphore::signalHandler);
//     signal(SIGUSR1, Semaphore::signalHandler);
//     return;
// }

// void Semaphore::signalHandler(int arg)
// {
//     printf("-----signal handler------\n");
//     return;
// }

OsSemaphore::OsSemaphore()
{
    OS_PRINTF("Semaphore constructor\n");
    write(1, "write hello\n", 6);
    return;
}

OsSemaphore::OsSemaphore(os_int32 num_sem)
{
    OS_PRINTF("Semaphore constructor %ld\n", num_sem);
    write(1, "write hello1\n", 13);
    //this->num_sem_ = num_sem;
    //std::atomic_init(&(this->num_sem_), num_sem);
    return;
}

OsSemaphore::~OsSemaphore()
{
    OS_PRINTF("Semaphore destructor\n");
    return;
}

void OsSemaphore::waitSemaphore(OsSemaphore *sem)
{
    OS_PRINTF("waitSemaphore destructor\n");
    if(sem->num_sem_ > 0) {
        (sem->num_sem_--);
    }

    return;
}

void OsSemaphore::signalSemaphore(OsSemaphore *sem)
{
    OS_PRINTF("waitSemaphore destructor\n");
    (sem->num_sem_)++;
    return;
}










