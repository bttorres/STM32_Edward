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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define my_button_Pin GPIO_PIN_13
#define my_button_GPIO_Port GPIOC
#define my_button_EXTI_IRQn EXTI15_10_IRQn
#define right_IR_Pin GPIO_PIN_2
#define right_IR_GPIO_Port GPIOC
#define right_IR_power_Pin GPIO_PIN_3
#define right_IR_power_GPIO_Port GPIOC
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define my_led_Pin GPIO_PIN_5
#define my_led_GPIO_Port GPIOA
#define left_IR_Pin GPIO_PIN_4
#define left_IR_GPIO_Port GPIOC
#define left_IR_power_Pin GPIO_PIN_13
#define left_IR_power_GPIO_Port GPIOB
#define my_trig_Pin GPIO_PIN_7
#define my_trig_GPIO_Port GPIOC
#define my_echo_Pin GPIO_PIN_9
#define my_echo_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define left_cliff_Pin GPIO_PIN_10
#define left_cliff_GPIO_Port GPIOC
#define left_cliff_power_Pin GPIO_PIN_11
#define left_cliff_power_GPIO_Port GPIOC
#define right_cliff_Pin GPIO_PIN_12
#define right_cliff_GPIO_Port GPIOC
#define right_cliff_power_Pin GPIO_PIN_2
#define right_cliff_power_GPIO_Port GPIOD
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
