/*************************************************************************
 *         File: CPUDriver.c
 * 	Description: 
 * 			Global Interrupt and Critical Section handling
 * 
 *       Auther: Ahmed Montasser
 *         Date: 4, Nov, 2022 
*/

void CPUDRIVER_EnableGlobalInterrupt(void) {
	__asm__ __volatile__ ("CPSIE i");		//Enable Programmable Priority Interrupts
}
void CPUDRIVER_DisableGlobalInterrupt(void) {
	__asm__ __volatile__ ("CPSID i");		//Disable Programmable Priority Interrupts
}
void CPUDRIVER_StartCriticalSection(void) {
	__asm__ __volatile__ ("CPSID f");		//Enable Interrupts
}
void CPUDRIVER_StopCriticalSection(void) {
	__asm__ __volatile__ ("CPSIE f");		//Disable Interrupts
}