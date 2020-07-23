cmake_minimum_required(VERSION 3.0)
add_executable(Main os_main.cc os_ctrl.cc os_scheduler.cc os_semaphore.cc
               os_interrupt.cc)
