#ifndef OS_SYSTEM_
#define OS_SYSTEM_

class OsSystem
{
 public:
    typedef enum SysCallId_
    {
        WAI_SEM = 0;
        SIG_SEM;
    } SysCallId;
    OsSystem();
    ~OsSystem();
    static void callSystem(SysCallId sys_call_id);

 private:
    static void signalHandler(SysCallId arg);
    static void setSignalHandler(void);
};


#endif
