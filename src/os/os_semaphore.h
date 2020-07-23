/**
 * @file   os_semaphore.h
 * @author Toshi <Toshi@Toshi-no-MacBook-Pro.local>
 * @date   Wed Nov 27 01:09:35 2019
 * 
 * @brief  
 * 
 * 
 */
#ifndef OS_SEMAPHORE_H_
#define OS_SEMAPHORE_H_

#include "semaphore.h"
#include "os_type.h"
//#include <stdatomic.h>
#include <atomic>

class OsSemaphore
{
 public:
    OsSemaphore();
    OsSemaphore(os_int32 num_sem);
    ~OsSemaphore();
    void waitSemaphore(OsSemaphore *sem);
    void signalSemaphore(OsSemaphore *sem);


 private:
    volatile os_int32 num_sem_;
    std::atomic<int> amo_num_sem_;
};


#endif  /* SEMAPHORE_H_ */
