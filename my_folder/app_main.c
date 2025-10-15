#include "app_main.h"

volatile uint32_t ms_ticks = 0;

// 应用程序初始化
void app_init(void) {
    // 现在 htim2 可以通过 extern 声明访问
    HAL_TIM_Base_Start_IT(&htim2);
}

void app_timer_interrupt_handler(void) {
    ms_ticks++;
}

void app_main_loop(void) {
    static uint32_t last_toggle = 0;
    
    if (ms_ticks - last_toggle >= 500) {
        HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
        last_toggle = ms_ticks;
    }
}