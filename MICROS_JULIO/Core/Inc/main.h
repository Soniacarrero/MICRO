/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define potenciometro_Pin GPIO_PIN_1
#define potenciometro_GPIO_Port GPIOA
#define LDR_Pin GPIO_PIN_3
#define LDR_GPIO_Port GPIOA
#define boton_Pin GPIO_PIN_5
#define boton_GPIO_Port GPIOA
#define boton_EXTI_IRQn EXTI9_5_IRQn
#define infrarrojo_entrada_Pin GPIO_PIN_6
#define infrarrojo_entrada_GPIO_Port GPIOA
#define infrarrojo_salida_Pin GPIO_PIN_7
#define infrarrojo_salida_GPIO_Port GPIOA
#define servomotor_Pin GPIO_PIN_9
#define servomotor_GPIO_Port GPIOE
#define led_v_Pin GPIO_PIN_13
#define led_v_GPIO_Port GPIOE
#define led_r_Pin GPIO_PIN_15
#define led_r_GPIO_Port GPIOE
#define led_Pin GPIO_PIN_12
#define led_GPIO_Port GPIOD

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
