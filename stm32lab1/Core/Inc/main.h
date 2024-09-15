/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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
#define LED_RED_Pin GPIO_PIN_5
#define LED_RED_GPIO_Port GPIOA
#define LED_YELLOW_Pin GPIO_PIN_6
#define LED_YELLOW_GPIO_Port GPIOA
#define LED_GREEN_Pin GPIO_PIN_7
#define LED_GREEN_GPIO_Port GPIOA
#define GREEN_Pin GPIO_PIN_0
#define GREEN_GPIO_Port GPIOB
#define RED_Pin GPIO_PIN_1
#define RED_GPIO_Port GPIOB
#define YELLOW_Pin GPIO_PIN_2
#define YELLOW_GPIO_Port GPIOB
#define REDB10_Pin GPIO_PIN_10
#define REDB10_GPIO_Port GPIOB
#define YELLOWB11_Pin GPIO_PIN_11
#define YELLOWB11_GPIO_Port GPIOB
#define GREENB3_Pin GPIO_PIN_3
#define GREENB3_GPIO_Port GPIOB
#define GREENB4_Pin GPIO_PIN_4
#define GREENB4_GPIO_Port GPIOB
#define YELLOWB5_Pin GPIO_PIN_5
#define YELLOWB5_GPIO_Port GPIOB
#define REDB6_Pin GPIO_PIN_6
#define REDB6_GPIO_Port GPIOB
#define GREENB7_Pin GPIO_PIN_7
#define GREENB7_GPIO_Port GPIOB
#define YELLOWB8_Pin GPIO_PIN_8
#define YELLOWB8_GPIO_Port GPIOB
#define REDB9_Pin GPIO_PIN_9
#define REDB9_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
