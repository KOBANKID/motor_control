#ifndef INIT_H_
#define INIT_H_

#include <stdint.h>

/**
 * UML Description
@startuml
Class SystemInitializer {
    +bool Init(void)
    -bool InitHardware(void)
    -bool InitHardwareAbstraction(void)
    -bool InitMiddleware(void)
    -static bool InitApplication(void)
}
@enduml
*/

class SystemInitializer
{
public:
    static bool Init(void);
    SystemInitializer();
    ~SystemInitializer();

private:
    static bool InitHardware(void);
    static bool InitHardwareAbstraction(void);
    static bool InitMiddleware(void);
    static bool InitApplication(void);
};

#endif

