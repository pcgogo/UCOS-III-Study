/*Task Control Block*/
#include "cpu.h"
typedef struct os_tcb OS_TCB;

struct os_tcb
{
	CPU_STK *StkPtr;
	CPU_STK_SIZE StkSize;
};