#ifndef INC_STEPPER_H_
#define INC_STEPPER_H_

#include "delay_us.h"
#include "main.h"

#define STEP_PER_RESOLUTION 4096
#define DIR_CW              0 // 시계
#define DIR_CCW             1 // 반시계
#define IN1_PIN   GPIO_PIN_2
#define IN1_PORT  GPIOB
#define IN2_PIN   GPIO_PIN_1
#define IN2_PORT  GPIOB
#define IN3_PIN   GPIO_PIN_14
#define IN3_PORT  GPIOB
#define IN4_PIN   GPIO_PIN_13
#define IN4_PORT  GPIOB
// 포트를 바꾸면 이것만 손대주면 됨
#endif /* INC_STEPPER_H_ */

static const uint8_t HALF_STEP_SEQ[8][4] =
    {
        {1,0,0,0},
        {1,1,0,0},
        {0,1,0,0},
        {0,1,1,0},
        {0,0,1,0},
        {0,0,1,1},
        {0,0,0,1},
        {1,0,0,1},
    };

void stepMotor(uint8_t step);
void rotateSteps(uint16_t steps, uint8_t direction);
void rotateDegrees(uint16_t degrees, uint8_t direction);
