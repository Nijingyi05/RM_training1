#ifndef APP_MAIN_H
#define APP_MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"

// 声明 htim2 为外部变量（关键修复）
extern TIM_HandleTypeDef htim2;

// 函数声明
void app_init(void);
void app_main_loop(void);
void app_timer_interrupt_handler(void);

#ifdef __cplusplus
}
#endif

#endif /* APP_MAIN_H */