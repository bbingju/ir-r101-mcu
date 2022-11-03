/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"

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
#define FAN_CTRL_Pin GPIO_PIN_5
#define FAN_CTRL_GPIO_Port GPIOA
#define RELAY_EXT_CTRL_Pin GPIO_PIN_0
#define RELAY_EXT_CTRL_GPIO_Port GPIOB
#define EXT_CTRL_Pin GPIO_PIN_1
#define EXT_CTRL_GPIO_Port GPIOB
#define RELAY_EXT_CTRL2_Pin GPIO_PIN_2
#define RELAY_EXT_CTRL2_GPIO_Port GPIOB
#define FRONT_LED3_Pin GPIO_PIN_10
#define FRONT_LED3_GPIO_Port GPIOB
#define FRONT_LED4_Pin GPIO_PIN_12
#define FRONT_LED4_GPIO_Port GPIOB
#define AUDIO_MUX_A_Pin GPIO_PIN_13
#define AUDIO_MUX_A_GPIO_Port GPIOB
#define LTE_UART_TXD_Pin GPIO_PIN_9
#define LTE_UART_TXD_GPIO_Port GPIOA
#define LTE_UART_RXD_Pin GPIO_PIN_10
#define LTE_UART_RXD_GPIO_Port GPIOA
#define FRONT_LED1_Pin GPIO_PIN_8
#define FRONT_LED1_GPIO_Port GPIOB
#define FRONT_LED2_Pin GPIO_PIN_9
#define FRONT_LED2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
