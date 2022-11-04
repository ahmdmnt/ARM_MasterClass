/*************************************************************************
 *         File: CPUDriver.h
 * 	Description: 
 * 			Global Interrupt and Critical Section handling
 * 
 *       Auther: Ahmed Montasser
 *         Date: 4, Nov, 2022 
*/

#ifndef CPU_DRIVER_H
#define CPU_DRIVER_H

	void CPUDRIVER_EnableGlobalInterrupt(void);
	void CPUDRIVER_DisableGlobalInterrupt(void);
	void CPUDRIVER_StartCriticalSection(void);
	void CPUDRIVER_StopCriticalSection(void);

#endif /* CPU_DRIVER_H */