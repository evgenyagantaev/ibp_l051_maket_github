/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
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
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
