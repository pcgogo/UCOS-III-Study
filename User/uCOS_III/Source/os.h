/*Task Control Block*/
#include "cpu.h"
typedef struct os_tcb OS_TCB;

struct os_tcb
{
	CPU_STK *StkPtr;
	CPU_STK_SIZE StkSize;
};

/*OS_TASK_PTR (function pointer, name of task)*/
typedef void(*OS_TASK_PTR) (void *p_arg);//define OS_TASK_PTR type, a pointer to function, 
                                         //which get a parameter of (void *p_arg) and return a void type.
                                         //than we can use OS_TASK_PTR as void*
                                         //OS_TASK_PTR is a type which define a pointer to function (return void ,parameter void*)

/*ERROR LIST*/
typedef enum os_err
{
	OS_ERR_NONE 			=	0u,
	OS_ERR_A 					=10000u,
	OS_ERR_ACCEPT_ISR	=	10001u,
	OS_ERR_B 					= 11000u,
	OS_ERR_C 					= 12000u,
	
	OS_ERR_X 					= 33000u,
	OS_ERR_Y 					= 34000u,
	OS_ERR_YIELD_ISR 	= 34001u,
	OS_ERR_Z 					= 35000u
}OS_ERR;

CPU_STK *OSTaskStkInit(OS_TASK_PTR  p_task,
											void        *p_arg,
											CPU_STK     *p_stk_base,
											CPU_STK_SIZE stk_size);
											