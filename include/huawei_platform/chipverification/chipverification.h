


#ifndef	__CHIP_VERIFICATION_H__
#define	__CHIP_VERIFICATION_H__

#include <linux/types.h>

#define CHIP_VERIFICATION_DEBUG_SUCCESS  0
#define CHIP_VERIFICATION_DEBUG_FAILURE  1

#define CHIP_VERIFICATION_DEBUG_HARD_ERR  2
#define CHIP_VERIFICATION_DEBUG_SOFT_ERR  3




#define  CHIP_VERIFICATION_NO_DEBUG  		0
#define  CHIP_VERIFICATION_I2C_DEBUG  		1
#define  CHIP_VERIFICATION_UART_DEBUG  		2
#define  CHIP_VERIFICATION_eMMC_DEBUG   	4
#define  CHIP_VERIFICATION_DDR_DEBUG  		8
#define  CHIP_VERIFICATION_GPIO_DEBUG  		16
#define  CHIP_VERIFICATION_I2S_DEBUG  		32
#define  CHIP_VERIFICATION_WAKEUP_DEBUG  	64
#define  CHIP_VERIFICATION_USB_DEBUG  		128
#define  CHIP_VERIFICATION_SDIO_DEBUG  		256
#define  CHIP_VERIFICATION_PMU_DEBUG  		512



u32 Chip_Verification_Set_Debug(u32 DebugFlag);
u32 Chip_Verification_Get_Debug(void);
bool Chip_Verification_Check_Debug(u32  ModuleFlag);
bool Chip_Verification_Uart_LB_Test(u32 UartIndex, u8 TxData, u32 times);
bool Chip_Verification_Uart_Tx_Test(u32 UartIndex, u8 TxData, u32 times);
/*begin wangjing for SIO*/
bool Chip_Verification_SIO_LB_Test(u32 SIOBusIndex, u32 SIOTxData, u32 times);
/*end wangjing*/
/*begin add by wangjing for ssi*/
bool Chip_Verification_SSI_Test(u32 times);
/*end add by wangjing for ssi*/

#endif	/* __CHIP_VERIFICATION_H__ */
