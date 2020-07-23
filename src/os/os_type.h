#ifndef OS_TYPE_H_
#define OS_TYPE_H_

typedef unsigned char      os_uint8;
typedef unsigned short     os_uint16; 
typedef unsigned long      os_uint32;
typedef unsigned long long os_uint64;
typedef signed   char      os_int8;
typedef signed   short     os_int16; 
typedef signed   long      os_int32;
typedef signed   long long os_int64; 

#define OS_PRINTF(...) printf(__VA_ARGS__)

#endif  /* OS_TYPE_H_ */
