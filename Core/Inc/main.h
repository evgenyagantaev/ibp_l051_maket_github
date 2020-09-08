/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H__
#define __MAIN_H__

/* Includes ------------------------------------------------------------------*/

#include "stdio.h"
#include "string.h"

/* Private define ------------------------------------------------------------*/

#define u_in_Pin GPIO_PIN_0
#define u_in_GPIO_Port GPIOA
#define t_in_Pin GPIO_PIN_1
#define t_in_GPIO_Port GPIOA
#define i_in_Pin GPIO_PIN_2
#define i_in_GPIO_Port GPIOA
#define aux_out_Pin GPIO_PIN_3
#define aux_out_GPIO_Port GPIOA
#define heater_out_Pin GPIO_PIN_4
#define heater_out_GPIO_Port GPIOA
#define addr0_out_Pin GPIO_PIN_0
#define addr0_out_GPIO_Port GPIOB
#define addr1_out_Pin GPIO_PIN_1
#define addr1_out_GPIO_Port GPIOB
#define addr2_out_Pin GPIO_PIN_2
#define addr2_out_GPIO_Port GPIOB
#define spi2_clock_out_Pin GPIO_PIN_13
#define spi2_clock_out_GPIO_Port GPIOB
#define usec_gen_out_Pin GPIO_PIN_8
#define usec_gen_out_GPIO_Port GPIOA
#define pos_pack_gen_out_Pin GPIO_PIN_9
#define pos_pack_gen_out_GPIO_Port GPIOA
#define neg_pack_gen_out_Pin GPIO_PIN_10
#define neg_pack_gen_out_GPIO_Port GPIOA
#define f3_out_Pin GPIO_PIN_11
#define f3_out_GPIO_Port GPIOA
#define sound_out_Pin GPIO_PIN_12
#define sound_out_GPIO_Port GPIOA
#define addr3_out_Pin GPIO_PIN_3
#define addr3_out_GPIO_Port GPIOB
#define led_out_Pin GPIO_PIN_4
#define led_out_GPIO_Port GPIOB

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1U */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
