/*
 * @Author: Ni Jingyi 3230102776@zju.edu.cn
 * @Date: 2025-10-15 14:33:22
 * @LastEditors: Ni Jingyi 3230102776@zju.edu.cn
 * @LastEditTime: 2025-10-15 14:34:26
 * @FilePath: \Lab01\my_folder\app_main.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "app_main.h"

void App_Init() {
    // 初始化业务模块（非硬件相关）
}

void App_MainLoop() {
    while (1) {
        // 业务逻辑示例：LED闪烁
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET); // 点亮
        HAL_Delay(500);
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);   // 熄灭
        HAL_Delay(500);
    }
}