/*
 * Copyright (c) 2022 Teslabs Engineering S.L.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_GD32E10X_CLOCKS_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_GD32E10X_CLOCKS_H_

#include "gd32-clocks-common.h"

/**
 * @name Register offsets
 * @{
 */

#define GD32_AHBEN_OFFSET        0x14U
#define GD32_APB1EN_OFFSET       0x1CU
#define GD32_APB2EN_OFFSET       0x18U
#define GD32_ADDAPB1EN_OFFSET    0xE4U

/** @} */

/**
 * @name Clock enable/disable definitions for peripherals
 * @{
 */

/* AHB peripherals */
#define GD32_CLOCK_DMA0       GD32_CLOCK_CONFIG(AHBEN, 0U)
#define GD32_CLOCK_DMA1       GD32_CLOCK_CONFIG(AHBEN, 1U)
#define GD32_CLOCK_SRAMSP     GD32_CLOCK_CONFIG(AHBEN, 2U)
#define GD32_CLOCK_FMCSP      GD32_CLOCK_CONFIG(AHBEN, 4U)
#define GD32_CLOCK_CRC        GD32_CLOCK_CONFIG(AHBEN, 6U)
#define GD32_CLOCK_EXMC       GD32_CLOCK_CONFIG(AHBEN, 8U)
#define GD32_CLOCK_USBFS      GD32_CLOCK_CONFIG(AHBEN, 12U)

/* APB1 peripherals */
#define GD32_CLOCK_TIMER1     GD32_CLOCK_CONFIG(APB1EN, 0U)
#define GD32_CLOCK_TIMER2     GD32_CLOCK_CONFIG(APB1EN, 1U)
#define GD32_CLOCK_TIMER3     GD32_CLOCK_CONFIG(APB1EN, 2U)
#define GD32_CLOCK_TIMER4     GD32_CLOCK_CONFIG(APB1EN, 3U)
#define GD32_CLOCK_TIMER5     GD32_CLOCK_CONFIG(APB1EN, 4U)
#define GD32_CLOCK_TIMER6     GD32_CLOCK_CONFIG(APB1EN, 5U)
#define GD32_CLOCK_TIMER11    GD32_CLOCK_CONFIG(APB1EN, 6U)
#define GD32_CLOCK_TIMER12    GD32_CLOCK_CONFIG(APB1EN, 7U)
#define GD32_CLOCK_TIMER13    GD32_CLOCK_CONFIG(APB1EN, 8U)
#define GD32_CLOCK_WWDGT      GD32_CLOCK_CONFIG(APB1EN, 11U)
#define GD32_CLOCK_SPI1       GD32_CLOCK_CONFIG(APB1EN, 14U)
#define GD32_CLOCK_SPI2       GD32_CLOCK_CONFIG(APB1EN, 15U)
#define GD32_CLOCK_USART1     GD32_CLOCK_CONFIG(APB1EN, 17U)
#define GD32_CLOCK_USART2     GD32_CLOCK_CONFIG(APB1EN, 18U)
#define GD32_CLOCK_UART3      GD32_CLOCK_CONFIG(APB1EN, 19U)
#define GD32_CLOCK_UART4      GD32_CLOCK_CONFIG(APB1EN, 20U)
#define GD32_CLOCK_I2C0       GD32_CLOCK_CONFIG(APB1EN, 21U)
#define GD32_CLOCK_I2C1       GD32_CLOCK_CONFIG(APB1EN, 22U)
#define GD32_CLOCK_BKPI       GD32_CLOCK_CONFIG(APB1EN, 27U)
#define GD32_CLOCK_PMU        GD32_CLOCK_CONFIG(APB1EN, 28U)
#define GD32_CLOCK_DAC        GD32_CLOCK_CONFIG(APB1EN, 29U)

/* APB2 peripherals */
#define GD32_CLOCK_AFIO       GD32_CLOCK_CONFIG(APB2EN, 0U)
#define GD32_CLOCK_GPIOA      GD32_CLOCK_CONFIG(APB2EN, 2U)
#define GD32_CLOCK_GPIOB      GD32_CLOCK_CONFIG(APB2EN, 3U)
#define GD32_CLOCK_GPIOC      GD32_CLOCK_CONFIG(APB2EN, 4U)
#define GD32_CLOCK_GPIOD      GD32_CLOCK_CONFIG(APB2EN, 5U)
#define GD32_CLOCK_GPIOE      GD32_CLOCK_CONFIG(APB2EN, 6U)
#define GD32_CLOCK_ADC0       GD32_CLOCK_CONFIG(APB2EN, 9U)
#define GD32_CLOCK_ADC1       GD32_CLOCK_CONFIG(APB2EN, 10U)
#define GD32_CLOCK_TIMER0     GD32_CLOCK_CONFIG(APB2EN, 11U)
#define GD32_CLOCK_SPI0       GD32_CLOCK_CONFIG(APB2EN, 12U)
#define GD32_CLOCK_TIMER7     GD32_CLOCK_CONFIG(APB2EN, 13U)
#define GD32_CLOCK_USART0     GD32_CLOCK_CONFIG(APB2EN, 14U)
#define GD32_CLOCK_TIMER8     GD32_CLOCK_CONFIG(APB2EN, 19U)
#define GD32_CLOCK_TIMER9     GD32_CLOCK_CONFIG(APB2EN, 20U)
#define GD32_CLOCK_TIMER10    GD32_CLOCK_CONFIG(APB2EN, 21U)

/* APB1 additional peripherals */
#define GD32_CLOCK_CTC        GD32_CLOCK_CONFIG(ADDAPB1EN, 27U)

/** @} */

#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_GD32E10X_CLOCKS_H_ */
