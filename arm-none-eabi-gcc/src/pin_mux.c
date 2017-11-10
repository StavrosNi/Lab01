/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v3.0
processor: MKW41Z512xxx4
package_id: MKW41Z512VHT4
mcu_data: ksdk2_0
processor_version: 2.0.1
board: USB-KW41Z
pin_labels:
- {pin_num: '33', pin_signal: ANT, label: 'ANT1[1]/RF_ANT', identifier: RF_ANT}
- {pin_num: '1', pin_signal: TSI0_CH8/PTA0/SPI0_PCS1/TPM1_CH0/SWD_DIO, label: 'J1[2]/U8[9]/KW41_SWD_DIO', identifier: KW41_SWD_DIO}
- {pin_num: '2', pin_signal: TSI0_CH9/PTA1/SPI1_PCS0/TPM1_CH1/SWD_CLK, label: 'J1[4]/U8[11]/KW41_SWD_CLK', identifier: KW41_SWD_CLK}
- {pin_num: '3', pin_signal: PTA2/TPM0_CH3/RESET_b, label: 'J1[10]/U5[E8]/SW2/RST_TGTMCU', identifier: RST_TGTMCU}
- {pin_num: '16', pin_signal: PTB0/LLWU_P8/XTAL_OUT_EN/I2C0_SCL/CMP0_OUT/TPM0_CH1/CLKOUT, label: 'U5[F7]/PTB0_KW41', identifier: PTB0_KW41}
- {pin_num: '17', pin_signal: ADC0_SE1/CMP0_IN5/PTB1/DTM_RX/I2C0_SDA/LPTMR0_ALT1/TPM0_CH2/CMT_IRO, label: 'U5[F6]/PTB1_KW41', identifier: PTB1_KW41}
- {pin_num: '18', pin_signal: ADC0_SE3/CMP0_IN3/PTB2/RF_NOT_ALLOWED/DTM_TX/TPM1_CH0, label: 'U5[E7]/SW1/PTB2_KW41', identifier: SW1;PTB2_KW41}
- {pin_num: '4', pin_signal: TSI0_CH10/PTA16/LLWU_P4/SPI1_SOUT/TPM0_CH0, label: 'U5[B3]', identifier: SPI_SOUT}
- {pin_num: '5', pin_signal: TSI0_CH11/PTA17/LLWU_P5/RF_RESET/SPI1_SIN/TPM_CLKIN1, label: 'U5[C2]', identifier: SPI_SIN}
- {pin_num: '6', pin_signal: TSI0_CH12/PTA18/LLWU_P6/SPI1_SCK/TPM2_CH0, label: 'U5[A4]', identifier: SPI_CLK}
- {pin_num: '7', pin_signal: TSI0_CH13/ADC0_SE5/PTA19/LLWU_P7/SPI1_PCS0/TPM2_CH1, label: 'U5[C3]', identifier: SPI_SS}
- {pin_num: '19', pin_signal: ADC0_SE2/CMP0_IN4/PTB3/CLKOUT/TPM1_CH1/RTC_CLKOUT, label: 'U5[A7]/PTB3_KW41', identifier: PTB3_KW41;LED_RED1}
- {pin_num: '23', pin_signal: DAC0_OUT/ADC0_SE4/CMP0_IN2/PTB18/I2C1_SCL/TPM_CLKIN0/TPM0_CH0/NMI_b, label: 'U5[B6]/PTB18_KW41', identifier: PTB18_KW41;LED_RED2}
- {pin_num: '21', pin_signal: EXTAL32K/PTB16/I2C1_SCL/TPM2_CH0, label: 'Y2[2]/EXTAL_32K', identifier: EXTAL32K}
- {pin_num: '30', pin_signal: EXTAL, label: 'Y1[1]/EXTAL_32M', identifier: EXTAL}
- {pin_num: '22', pin_signal: XTAL32K/PTB17/I2C1_SDA/TPM2_CH1/BSM_CLK, label: 'Y2[1]/XTAL_32K', identifier: XTAL32K}
- {pin_num: '31', pin_signal: XTAL, label: 'Y1[3]/XTAL_32M', identifier: XTAL}
- {pin_num: '29', pin_signal: XTAL_OUT, label: NC}
- {pin_num: '8', pin_signal: PSWITCH, label: GND}
- {pin_num: '9', pin_signal: DCDC_CFG, label: P3V3_KW41}
- {pin_num: '10', pin_signal: VDCDC_IN, label: P3V3_KW41}
- {pin_num: '20', pin_signal: VDD_0, label: P3V3_KW41}
- {pin_num: '28', pin_signal: VDDA, label: P3V3_KW41}
- {pin_num: '32', pin_signal: VDD_RF3, label: P3V3_KW41}
- {pin_num: '35', pin_signal: VDD_RF2, label: P3V3_KW41}
- {pin_num: '36', pin_signal: VDD_RF1, label: P3V3_KW41}
- {pin_num: '44', pin_signal: VDD_148, label: P3V3_KW41}
- {pin_num: '15', pin_signal: VDD_1P5OUT_PMCIN, label: P3V3_KW41}
- {pin_num: '14', pin_signal: VDD_1P8OUT, label: P3V3_KW41}
- {pin_num: '11', pin_signal: DCDC_LP, label: NC}
- {pin_num: '12', pin_signal: DCDC_LN, label: NC}
- {pin_num: '13', pin_signal: DCDC_GND, label: GND}
- {pin_num: '26', pin_signal: VSSA28, label: GND}
- {pin_num: '49', pin_signal: VSS54, label: GND}
- {pin_num: '50', pin_signal: VSS55, label: GND}
- {pin_num: '51', pin_signal: VSS56, label: GND}
- {pin_num: '52', pin_signal: VSS57, label: GND}
- {pin_num: '53', pin_signal: VSS58, label: GND}
- {pin_num: '54', pin_signal: VSS59, label: GND}
- {pin_num: '55', pin_signal: VSS60, label: GND}
- {pin_num: '56', pin_signal: VSS61, label: GND}
- {pin_num: '57', pin_signal: VSS62, label: GND}
- {pin_num: '58', pin_signal: VSS63, label: GND}
- {pin_num: '59', pin_signal: VSS64, label: GND}
- {pin_num: '60', pin_signal: VSS65, label: GND}
- {pin_num: '61', pin_signal: VSS66, label: GND}
- {pin_num: '62', pin_signal: VSS67, label: GND}
- {pin_num: '63', pin_signal: VSS68, label: GND}
- {pin_num: '64', pin_signal: VSS69, label: GND}
- {pin_num: '37', pin_signal: PTC1/ANT_B/I2C0_SDA/UART0_RTS_b/TPM0_CH2/BLE_RF_ACTIVE, label: NC}
- {pin_num: '45', pin_signal: TSI0_CH4/PTC16/LLWU_P0/SPI0_SCK/I2C0_SDA/UART0_RTS_b/TPM0_CH3, label: NC}
- {pin_num: '24', pin_signal: ADC0_DP0/CMP0_IN0, label: NC}
- {pin_num: '25', pin_signal: ADC0_DM0/CMP0_IN1, label: NC}
- {pin_num: '27', pin_signal: VREFH/VREF_OUT, label: P3V3_KW41}
- {pin_num: '34', pin_signal: GANT, label: GND}
- {pin_num: '38', pin_signal: TSI0_CH14/PTC2/LLWU_P10/TX_SWITCH/I2C1_SCL/UART0_RX/CMT_IRO/DTM_RX, label: 'U5[B4]/PTC2_KW41_I2C1_SCL', identifier: PTC2_KW41_I2C1_SCL}
- {pin_num: '39', pin_signal: TSI0_CH15/PTC3/LLWU_P11/RX_SWITCH/I2C1_SDA/UART0_TX/TPM0_CH1/DTM_TX, label: 'U5[A5]/PTC3_KW41_I2C1_SDA', identifier: PTC3_KW41_I2C1_SDA}
- {pin_num: '40', pin_signal: TSI0_CH0/PTC4/LLWU_P12/ANT_A/EXTRG_IN/UART0_CTS_b/TPM1_CH0/BSM_DATA, label: 'U5[C6]/UART0_CTS/UART_RTS', identifier: DEBUG_UART_CTS}
- {pin_num: '41', pin_signal: TSI0_CH1/PTC5/LLWU_P13/RF_NOT_ALLOWED/LPTMR0_ALT2/UART0_RTS_b/TPM1_CH1/BSM_CLK, label: 'U5[B7]/UART0_RTS/UART_CTS', identifier: DEBUG_UART_RTS}
- {pin_num: '42', pin_signal: TSI0_CH2/PTC6/LLWU_P14/XTAL_OUT_EN/I2C1_SCL/UART0_RX/TPM2_CH0/BSM_FRAME, label: 'U5[B8]/UART0_RX/UART_RXD', identifier: DEBUG_UART_RX}
- {pin_num: '43', pin_signal: TSI0_CH3/PTC7/LLWU_P15/SPI0_PCS2/I2C1_SDA/UART0_TX/TPM2_CH1/BSM_DATA, label: 'U5[C8]/UART0_TX/UART_TXD', identifier: DEBUG_UART_TX}
- {pin_num: '46', pin_signal: TSI0_CH5/PTC17/LLWU_P1/SPI0_SOUT/I2C1_SCL/UART0_RX/BSM_FRAME/DTM_RX, label: 'U5[A3]/U6[2]/K22_SS/BSM_FRAME', identifier: BSM_FRAME}
- {pin_num: '48', pin_signal: TSI0_CH7/PTC19/LLWU_P3/SPI0_PCS0/I2C0_SCL/UART0_CTS_b/BSM_CLK/BLE_RF_ACTIVE, label: 'U5[C1]/K22_SCK/BSM_SCK', identifier: BSM_SCK}
- {pin_num: '47', pin_signal: TSI0_CH6/PTC18/LLWU_P2/SPI0_SIN/I2C1_SDA/UART0_TX/BSM_DATA/DTM_TX, label: 'U5[A2]/K22_SIN/BSM_DATA', identifier: BSM_DATA}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_port.h"
#include "pin_mux.h"

/*FUNCTION**********************************************************************
 * 
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 * 
 *END**************************************************************************/
void BOARD_InitBootPins(void) {
    BOARD_InitPins();
}

#define PIN0_IDX                         0u   /*!< Pin number for pin 0 in a port */
#define PIN1_IDX                         1u   /*!< Pin number for pin 1 in a port */
#define PIN18_IDX                       18u   /*!< Pin number for pin 18 in a port */
#define PIN19_IDX                       19u   /*!< Pin number for pin 19 in a port */

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', prefix: BOARD_, coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '37', peripheral: GPIOC, signal: 'GPIO, 1', pin_signal: PTC1/ANT_B/I2C0_SDA/UART0_RTS_b/TPM0_CH2/BLE_RF_ACTIVE}
  - {pin_num: '7', peripheral: GPIOA, signal: 'GPIO, 19', pin_signal: TSI0_CH13/ADC0_SE5/PTA19/LLWU_P7/SPI1_PCS0/TPM2_CH1}
  - {pin_num: '6', peripheral: GPIOA, signal: 'GPIO, 18', pin_signal: TSI0_CH12/PTA18/LLWU_P6/SPI1_SCK/TPM2_CH0}
  - {pin_num: '16', peripheral: GPIOB, signal: 'GPIO, 0', pin_signal: PTB0/LLWU_P8/XTAL_OUT_EN/I2C0_SCL/CMP0_OUT/TPM0_CH1/CLKOUT}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/*FUNCTION**********************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 *END**************************************************************************/
void BOARD_InitPins(void) {
  CLOCK_EnableClock(kCLOCK_PortA);                           /* Port A Clock Gate Control: Clock enabled */
  CLOCK_EnableClock(kCLOCK_PortB);                           /* Port B Clock Gate Control: Clock enabled */
  CLOCK_EnableClock(kCLOCK_PortC);                           /* Port C Clock Gate Control: Clock enabled */

  PORT_SetPinMux(PORTA, PIN18_IDX, kPORT_MuxAsGpio);         /* PORTA18 (pin 6) is configured as PTA18 */
  PORT_SetPinMux(PORTA, PIN19_IDX, kPORT_MuxAsGpio);         /* PORTA19 (pin 7) is configured as PTA19 */
  PORT_SetPinMux(PORTB, PIN0_IDX, kPORT_MuxAsGpio);          /* PORTB0 (pin 16) is configured as PTB0 */
  PORT_SetPinMux(PORTC, PIN1_IDX, kPORT_MuxAsGpio);          /* PORTC1 (pin 37) is configured as PTC1 */
}


#define PIN2_IDX                         2u   /*!< Pin number for pin 2 in a port */

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitButtons:
- options: {prefix: BOARD_, coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '18', peripheral: GPIOB, signal: 'GPIO, 2', pin_signal: ADC0_SE3/CMP0_IN3/PTB2/RF_NOT_ALLOWED/DTM_TX/TPM1_CH0, identifier: SW1, direction: INPUT, slew_rate: slow,
    pull_select: up, pull_enable: enable}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/*FUNCTION**********************************************************************
 *
 * Function Name : BOARD_InitButtons
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 *END**************************************************************************/
void BOARD_InitButtons(void) {
  CLOCK_EnableClock(kCLOCK_PortB);                           /* Port B Clock Gate Control: Clock enabled */

  const port_pin_config_t portb2_pin18_config = {
    kPORT_PullUp,                                            /* Internal pull-up resistor is enabled */
    kPORT_SlowSlewRate,                                      /* Slow slew rate is configured */
    kPORT_PassiveFilterDisable,                              /* Passive filter is disabled */
    kPORT_LowDriveStrength,                                  /* Low drive strength is configured */
    kPORT_MuxAsGpio,                                         /* Pin is configured as PTB2 */
  };
  PORT_SetPinConfig(PORTB, PIN2_IDX, &portb2_pin18_config);  /* PORTB2 (pin 18) is configured as PTB2 */
}


#define PIN3_IDX                         3u   /*!< Pin number for pin 3 in a port */

#define PIN18_IDX                       18u   /*!< Pin number for pin 18 in a port */

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitLEDs:
- options: {prefix: BOARD_, coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '19', peripheral: GPIOB, signal: 'GPIO, 3', pin_signal: ADC0_SE2/CMP0_IN4/PTB3/CLKOUT/TPM1_CH1/RTC_CLKOUT, identifier: LED_RED1, direction: OUTPUT,
    slew_rate: slow, pull_select: down, pull_enable: disable}
  - {pin_num: '23', peripheral: GPIOB, signal: 'GPIO, 18', pin_signal: DAC0_OUT/ADC0_SE4/CMP0_IN2/PTB18/I2C1_SCL/TPM_CLKIN0/TPM0_CH0/NMI_b, identifier: LED_RED2,
    direction: OUTPUT, slew_rate: slow, pull_select: down, pull_enable: disable, passive_filter: disable}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/*FUNCTION**********************************************************************
 *
 * Function Name : BOARD_InitLEDs
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 *END**************************************************************************/
void BOARD_InitLEDs(void) {
  CLOCK_EnableClock(kCLOCK_PortB);                           /* Port B Clock Gate Control: Clock enabled */

  const port_pin_config_t portb18_pin23_config = {
    kPORT_PullDisable,                                       /* Internal pull-up/down resistor is disabled */
    kPORT_SlowSlewRate,                                      /* Slow slew rate is configured */
    kPORT_PassiveFilterDisable,                              /* Passive filter is disabled */
    kPORT_LowDriveStrength,                                  /* Low drive strength is configured */
    kPORT_MuxAsGpio,                                         /* Pin is configured as PTB18 */
  };
  PORT_SetPinConfig(PORTB, PIN18_IDX, &portb18_pin23_config); /* PORTB18 (pin 23) is configured as PTB18 */
  const port_pin_config_t portb3_pin19_config = {
    kPORT_PullDisable,                                       /* Internal pull-up/down resistor is disabled */
    kPORT_SlowSlewRate,                                      /* Slow slew rate is configured */
    kPORT_PassiveFilterDisable,                              /* Passive filter is disabled */
    kPORT_LowDriveStrength,                                  /* Low drive strength is configured */
    kPORT_MuxAsGpio,                                         /* Pin is configured as PTB3 */
  };
  PORT_SetPinConfig(PORTB, PIN3_IDX, &portb3_pin19_config);  /* PORTB3 (pin 19) is configured as PTB3 */
}


#define PIN4_IDX                         4u   /*!< Pin number for pin 4 in a port */
#define PIN5_IDX                         5u   /*!< Pin number for pin 5 in a port */
#define PIN6_IDX                         6u   /*!< Pin number for pin 6 in a port */
#define PIN7_IDX                         7u   /*!< Pin number for pin 7 in a port */
#define SOPT5_LPUART0ODE_DISABLED     0x00u   /*!< LPUART0 Open Drain Enable: Open drain is disabled on LPUART0. */
#define SOPT5_LPUART0RXSRC_LPUART_RX  0x00u   /*!< LPUART0 Receive Data Source Select: LPUART_RX pin */
#define SOPT5_LPUART0TXSRC_LPUART_TX  0x00u   /*!< LPUART0 Transmit Data Source Select: LPUART0_TX pin */

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitDEBUG_UART:
- options: {prefix: BOARD_, coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '43', peripheral: LPUART0, signal: TX, pin_signal: TSI0_CH3/PTC7/LLWU_P15/SPI0_PCS2/I2C1_SDA/UART0_TX/TPM2_CH1/BSM_DATA, direction: OUTPUT, slew_rate: fast,
    open_drain: disable, drive_strength: low, pull_select: down, pull_enable: disable}
  - {pin_num: '42', peripheral: LPUART0, signal: RX, pin_signal: TSI0_CH2/PTC6/LLWU_P14/XTAL_OUT_EN/I2C1_SCL/UART0_RX/TPM2_CH0/BSM_FRAME, slew_rate: fast, drive_strength: low,
    pull_select: down, pull_enable: disable}
  - {pin_num: '41', peripheral: LPUART0, signal: RTS, pin_signal: TSI0_CH1/PTC5/LLWU_P13/RF_NOT_ALLOWED/LPTMR0_ALT2/UART0_RTS_b/TPM1_CH1/BSM_CLK, slew_rate: fast,
    pull_select: down, pull_enable: disable}
  - {pin_num: '40', peripheral: LPUART0, signal: CTS, pin_signal: TSI0_CH0/PTC4/LLWU_P12/ANT_A/EXTRG_IN/UART0_CTS_b/TPM1_CH0/BSM_DATA, slew_rate: fast, pull_select: down,
    pull_enable: disable}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/*FUNCTION**********************************************************************
 *
 * Function Name : BOARD_InitDEBUG_UART
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 *END**************************************************************************/
void BOARD_InitDEBUG_UART(void) {
  CLOCK_EnableClock(kCLOCK_PortC);                           /* Port C Clock Gate Control: Clock enabled */

  const port_pin_config_t portc4_pin40_config = {
    kPORT_PullDisable,                                       /* Internal pull-up/down resistor is disabled */
    kPORT_FastSlewRate,                                      /* Fast slew rate is configured */
    kPORT_PassiveFilterDisable,                              /* Passive filter is disabled */
    kPORT_LowDriveStrength,                                  /* Low drive strength is configured */
    kPORT_MuxAlt4,                                           /* Pin is configured as UART0_CTS_b */
  };
  PORT_SetPinConfig(PORTC, PIN4_IDX, &portc4_pin40_config);  /* PORTC4 (pin 40) is configured as UART0_CTS_b */
  const port_pin_config_t portc5_pin41_config = {
    kPORT_PullDisable,                                       /* Internal pull-up/down resistor is disabled */
    kPORT_FastSlewRate,                                      /* Fast slew rate is configured */
    kPORT_PassiveFilterDisable,                              /* Passive filter is disabled */
    kPORT_LowDriveStrength,                                  /* Low drive strength is configured */
    kPORT_MuxAlt4,                                           /* Pin is configured as UART0_RTS_b */
  };
  PORT_SetPinConfig(PORTC, PIN5_IDX, &portc5_pin41_config);  /* PORTC5 (pin 41) is configured as UART0_RTS_b */
  const port_pin_config_t portc6_pin42_config = {
    kPORT_PullDisable,                                       /* Internal pull-up/down resistor is disabled */
    kPORT_FastSlewRate,                                      /* Fast slew rate is configured */
    kPORT_PassiveFilterDisable,                              /* Passive filter is disabled */
    kPORT_LowDriveStrength,                                  /* Low drive strength is configured */
    kPORT_MuxAlt4,                                           /* Pin is configured as UART0_RX */
  };
  PORT_SetPinConfig(PORTC, PIN6_IDX, &portc6_pin42_config);  /* PORTC6 (pin 42) is configured as UART0_RX */
  const port_pin_config_t portc7_pin43_config = {
    kPORT_PullDisable,                                       /* Internal pull-up/down resistor is disabled */
    kPORT_FastSlewRate,                                      /* Fast slew rate is configured */
    kPORT_PassiveFilterDisable,                              /* Passive filter is disabled */
    kPORT_LowDriveStrength,                                  /* Low drive strength is configured */
    kPORT_MuxAlt4,                                           /* Pin is configured as UART0_TX */
  };
  PORT_SetPinConfig(PORTC, PIN7_IDX, &portc7_pin43_config);  /* PORTC7 (pin 43) is configured as UART0_TX */
  SIM->SOPT5 = ((SIM->SOPT5 &
    (~(SIM_SOPT5_LPUART0TXSRC_MASK | SIM_SOPT5_LPUART0RXSRC_MASK | SIM_SOPT5_LPUART0ODE_MASK))) /* Mask bits to zero which are setting */
      | SIM_SOPT5_LPUART0TXSRC(SOPT5_LPUART0TXSRC_LPUART_TX) /* LPUART0 Transmit Data Source Select: LPUART0_TX pin */
      | SIM_SOPT5_LPUART0RXSRC(SOPT5_LPUART0RXSRC_LPUART_RX) /* LPUART0 Receive Data Source Select: LPUART_RX pin */
      | SIM_SOPT5_LPUART0ODE(SOPT5_LPUART0ODE_DISABLED)      /* LPUART0 Open Drain Enable: Open drain is disabled on LPUART0. */
    );
}


#define PIN16_IDX                       16u   /*!< Pin number for pin 16 in a port */
#define PIN17_IDX                       17u   /*!< Pin number for pin 17 in a port */

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitOSC:
- options: {prefix: BOARD_, coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '21', peripheral: RTC, signal: EXTAL32K, pin_signal: EXTAL32K/PTB16/I2C1_SCL/TPM2_CH0, slew_rate: no_init, pull_select: no_init, pull_enable: no_init}
  - {pin_num: '22', peripheral: RTC, signal: XTAL32K, pin_signal: XTAL32K/PTB17/I2C1_SDA/TPM2_CH1/BSM_CLK, slew_rate: no_init, pull_select: no_init, pull_enable: no_init}
  - {pin_num: '30', peripheral: RADIO, signal: EXTAL, pin_signal: EXTAL}
  - {pin_num: '31', peripheral: RADIO, signal: XTAL, pin_signal: XTAL}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/*FUNCTION**********************************************************************
 *
 * Function Name : BOARD_InitOSC
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 *END**************************************************************************/
void BOARD_InitOSC(void) {
  CLOCK_EnableClock(kCLOCK_PortB);                           /* Port B Clock Gate Control: Clock enabled */

  PORT_SetPinMux(PORTB, PIN16_IDX, kPORT_PinDisabledOrAnalog); /* PORTB16 (pin 21) is configured as EXTAL32K */
  PORT_SetPinMux(PORTB, PIN17_IDX, kPORT_PinDisabledOrAnalog); /* PORTB17 (pin 22) is configured as XTAL32K */
}

/*******************************************************************************
 * EOF
 ******************************************************************************/
