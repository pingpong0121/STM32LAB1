/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
void display7SEG1(int num){
	switch(num){
		case 0:
			HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin , GPIO_PIN_SET ) ;
			break;
		case 1:
			HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin , GPIO_PIN_SET ) ;
			break;
		case 2:
			HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin , GPIO_PIN_RESET ) ;
			break;
		case 3:
			HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin , GPIO_PIN_RESET ) ;
			break;
		case 4:
			HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin , GPIO_PIN_RESET ) ;
			break;
		case 5:
			HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin , GPIO_PIN_RESET ) ;
			break;
		case 6:
			HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin , GPIO_PIN_RESET ) ;
			break;
		case 7:
			HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin , GPIO_PIN_SET ) ;
			break;
		case 8:
			HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin , GPIO_PIN_RESET ) ;
			break;
		case 9:
			HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin , GPIO_PIN_RESET ) ;
			break;
		default:
			break;
	}
}
void display7SEG2(int num){
	switch(num){
		case 0:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( C_GPIO_Port , C1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , GPIO_PIN_SET ) ;
			break;
		case 1:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , GPIO_PIN_SET ) ;
			break;
		case 2:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , GPIO_PIN_RESET ) ;
			break;
		case 3:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , GPIO_PIN_RESET ) ;
			break;
		case 4:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , GPIO_PIN_RESET ) ;
			break;
		case 5:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , GPIO_PIN_RESET ) ;
			break;
		case 6:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , GPIO_PIN_RESET ) ;
			break;
		case 7:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , GPIO_PIN_SET ) ;
			break;
		case 8:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , GPIO_PIN_RESET ) ;
			break;
		case 9:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , GPIO_PIN_SET ) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , GPIO_PIN_RESET ) ;
			break;
		default:
			break;
	}
}
void ledonway1(char *led) {
    HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, led == "RED" ? RESET : SET);
    HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, led == "YELLOW" ? RESET : SET);
    HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, led == "GREEN" ? RESET : SET);
}

void ledonway2(char *led) {
    HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, led == "RED" ? RESET : SET);
    HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, led == "YELLOW" ? RESET : SET);
    HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, led == "GREEN" ? RESET : SET);
}

void update7SegmentWay1(int remainingTime) {
    display7SEG1(remainingTime);
}

void update7SegmentWay2(int remainingTime) {
    display7SEG2(remainingTime);
}

int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
 // SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  int stateWay1 = 0;
    int counterWay1 = 800;  // RED1 thời gian ban đầu = 8 giây

    int stateWay2 = 0;
    int counterWay2 = 500;  // GREEN2 thời gian ban đầu = 5 giây

    int RED_TIME_WAY1 = 8;   // Đèn đỏ đường 1 = 8 giây
    int GREEN_TIME_WAY1 = 5; // Đèn xanh đường 1 = 5 giây
    int YELLOW_TIME_WAY1 = 3; // Đèn vàng đường 1 = 3 giây

    int RED_TIME_WAY2 = 8;   // Đèn đỏ đường 2 = 8 giây
    int GREEN_TIME_WAY2 = 5; // Đèn xanh đường 2 = 5 giây
    int YELLOW_TIME_WAY2 = 3; // Đèn vàng đường 2 = 3 giây

    while (1) {
        switch (stateWay1) {
            case 0:
                ledonway1("RED");
                if (counterWay1 <= 0) {
                    stateWay1 = 1;
                    counterWay1 = 500; // GREEN1
                }
                update7SegmentWay1(counterWay1 / 100);
                break;

            case 1:
                ledonway1("GREEN");
                if (counterWay1 <= 0) {
                    stateWay1 = 2;
                    counterWay1 = 300;  // YELLOW1
                }
                update7SegmentWay1(counterWay1 / 100);
                break;

            case 2:
                ledonway1("YELLOW");
                if (counterWay1 <= 0) {
                    stateWay1 = 0;
                    counterWay1 = 800;  // RED1 = 8 giây
                }
                update7SegmentWay1(counterWay1 / 100);
                break;
        }

        switch (stateWay2) {
            case 0:
                ledonway2("GREEN");
                if (counterWay2 <= 0) {
                    stateWay2 = 1;
                    counterWay2 = 300;
                }
                update7SegmentWay2(counterWay2 / 100);
                break;

            case 1:
                ledonway2("YELLOW");
                if (counterWay2 <= 0) {
                    stateWay2 = 2;
                    counterWay2 = 800;
                }
                update7SegmentWay2(counterWay2 / 100);
                break;

            case 2:
                ledonway2("RED");
                if (counterWay2 <= 0) {
                    stateWay2 = 0;
                    counterWay2 = 500;
                }
                update7SegmentWay2(counterWay2 / 100);
                break;
        }

        counterWay1--;
        counterWay2--;

        HAL_Delay(10);
    }
  }
/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_RED2_Pin|LED_YELLOW2_Pin|LED_GREEN2_Pin|LED_RED1_Pin
                          |LED_YELLOW1_Pin|LED_GREEN1_Pin|A_Pin|B_Pin
                          |C_Pin|D_Pin|E_Pin|F_Pin
                          |G_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, A1_Pin|B1_Pin|C1_Pin|E1_Pin
                          |F1_Pin|G1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_RED2_Pin LED_YELLOW2_Pin LED_GREEN2_Pin LED_RED1_Pin
                           LED_YELLOW1_Pin LED_GREEN1_Pin A_Pin B_Pin
                           C_Pin D_Pin E_Pin F_Pin
                           G_Pin */
  GPIO_InitStruct.Pin = LED_RED2_Pin|LED_YELLOW2_Pin|LED_GREEN2_Pin|LED_RED1_Pin
                          |LED_YELLOW1_Pin|LED_GREEN1_Pin|A_Pin|B_Pin
                          |C_Pin|D_Pin|E_Pin|F_Pin
                          |G_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : A1_Pin B1_Pin C1_Pin E1_Pin
                           F1_Pin G1_Pin */
  GPIO_InitStruct.Pin = A1_Pin|B1_Pin|C1_Pin|E1_Pin
                          |F1_Pin|G1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : D1_Pin */
  GPIO_InitStruct.Pin = D1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(D1_GPIO_Port, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
