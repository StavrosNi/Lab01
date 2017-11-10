#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_


/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
  kPIN_MUX_DirectionInput = 0U,         /* Input direction */
  kPIN_MUX_DirectionOutput = 1U,        /* Output direction */
  kPIN_MUX_DirectionInputOrOutput = 2U  /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/* PORTA19 (number 7), U5[C3] */
#define BOARD_SPI_SS_GPIO                                                  GPIOA   /*!< GPIO device name: GPIOA */
#define BOARD_SPI_SS_PORT                                                  PORTA   /*!< PORT device name: PORTA */
#define BOARD_SPI_SS_GPIO_PIN                                                19U   /*!< PORTA pin index: 19 */
#define BOARD_SPI_SS_PIN_NAME                                              PTA19   /*!< Pin name */
#define BOARD_SPI_SS_LABEL                                              "U5[C3]"   /*!< Label */
#define BOARD_SPI_SS_NAME                                               "SPI_SS"   /*!< Identifier name */

/* PORTA18 (number 6), U5[A4] */
#define BOARD_SPI_CLK_GPIO                                                 GPIOA   /*!< GPIO device name: GPIOA */
#define BOARD_SPI_CLK_PORT                                                 PORTA   /*!< PORT device name: PORTA */
#define BOARD_SPI_CLK_GPIO_PIN                                               18U   /*!< PORTA pin index: 18 */
#define BOARD_SPI_CLK_PIN_NAME                                             PTA18   /*!< Pin name */
#define BOARD_SPI_CLK_LABEL                                             "U5[A4]"   /*!< Label */
#define BOARD_SPI_CLK_NAME                                             "SPI_CLK"   /*!< Identifier name */

/* PORTB0 (number 16), U5[F7]/PTB0_KW41 */
#define BOARD_PTB0_KW41_GPIO                                               GPIOB   /*!< GPIO device name: GPIOB */
#define BOARD_PTB0_KW41_PORT                                               PORTB   /*!< PORT device name: PORTB */
#define BOARD_PTB0_KW41_GPIO_PIN                                              0U   /*!< PORTB pin index: 0 */
#define BOARD_PTB0_KW41_PIN_NAME                                            PTB0   /*!< Pin name */
#define BOARD_PTB0_KW41_LABEL                                 "U5[F7]/PTB0_KW41"   /*!< Label */
#define BOARD_PTB0_KW41_NAME                                         "PTB0_KW41"   /*!< Identifier name */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

/* PORTB2 (number 18), U5[E7]/SW1/PTB2_KW41 */
#define BOARD_SW1_GPIO                                                     GPIOB   /*!< GPIO device name: GPIOB */
#define BOARD_SW1_PORT                                                     PORTB   /*!< PORT device name: PORTB */
#define BOARD_SW1_GPIO_PIN                                                    2U   /*!< PORTB pin index: 2 */
#define BOARD_SW1_PIN_NAME                                                  PTB2   /*!< Pin name */
#define BOARD_SW1_LABEL                                   "U5[E7]/SW1/PTB2_KW41"   /*!< Label */
#define BOARD_SW1_NAME                                                     "SW1"   /*!< Identifier name */
#define BOARD_SW1_DIRECTION                              kPIN_MUX_DirectionInput   /*!< Direction */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitButtons(void);

/* PORTB3 (number 19), U5[A7]/PTB3_KW41 */
#define BOARD_LED_RED1_GPIO                                                GPIOB   /*!< GPIO device name: GPIOB */
#define BOARD_LED_RED1_PORT                                                PORTB   /*!< PORT device name: PORTB */
#define BOARD_LED_RED1_GPIO_PIN                                               3U   /*!< PORTB pin index: 3 */
#define BOARD_LED_RED1_PIN_NAME                                             PTB3   /*!< Pin name */
#define BOARD_LED_RED1_LABEL                                  "U5[A7]/PTB3_KW41"   /*!< Label */
#define BOARD_LED_RED1_NAME                                           "LED_RED1"   /*!< Identifier name */
#define BOARD_LED_RED1_DIRECTION                        kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTB18 (number 23), U5[B6]/PTB18_KW41 */
#define BOARD_LED_RED2_GPIO                                                GPIOB   /*!< GPIO device name: GPIOB */
#define BOARD_LED_RED2_PORT                                                PORTB   /*!< PORT device name: PORTB */
#define BOARD_LED_RED2_GPIO_PIN                                              18U   /*!< PORTB pin index: 18 */
#define BOARD_LED_RED2_PIN_NAME                                            PTB18   /*!< Pin name */
#define BOARD_LED_RED2_LABEL                                 "U5[B6]/PTB18_KW41"   /*!< Label */
#define BOARD_LED_RED2_NAME                                           "LED_RED2"   /*!< Identifier name */
#define BOARD_LED_RED2_DIRECTION                        kPIN_MUX_DirectionOutput   /*!< Direction */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitLEDs(void);

/* PORTC7 (number 43), U5[C8]/UART0_TX/UART_TXD */
#define BOARD_DEBUG_UART_TX_PERIPHERAL                                   LPUART0   /*!< Device name: LPUART0 */
#define BOARD_DEBUG_UART_TX_SIGNAL                                            TX   /*!< LPUART0 signal: TX */
#define BOARD_DEBUG_UART_TX_PIN_NAME                                    UART0_TX   /*!< Pin name */
#define BOARD_DEBUG_UART_TX_LABEL                     "U5[C8]/UART0_TX/UART_TXD"   /*!< Label */
#define BOARD_DEBUG_UART_TX_NAME                                 "DEBUG_UART_TX"   /*!< Identifier name */
#define BOARD_DEBUG_UART_TX_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTC6 (number 42), U5[B8]/UART0_RX/UART_RXD */
#define BOARD_DEBUG_UART_RX_PERIPHERAL                                   LPUART0   /*!< Device name: LPUART0 */
#define BOARD_DEBUG_UART_RX_SIGNAL                                            RX   /*!< LPUART0 signal: RX */
#define BOARD_DEBUG_UART_RX_PIN_NAME                                    UART0_RX   /*!< Pin name */
#define BOARD_DEBUG_UART_RX_LABEL                     "U5[B8]/UART0_RX/UART_RXD"   /*!< Label */
#define BOARD_DEBUG_UART_RX_NAME                                 "DEBUG_UART_RX"   /*!< Identifier name */

/* PORTC5 (number 41), U5[B7]/UART0_RTS/UART_CTS */
#define BOARD_DEBUG_UART_RTS_PERIPHERAL                                  LPUART0   /*!< Device name: LPUART0 */
#define BOARD_DEBUG_UART_RTS_SIGNAL                                          RTS   /*!< LPUART0 signal: RTS */
#define BOARD_DEBUG_UART_RTS_PIN_NAME                                UART0_RTS_b   /*!< Pin name */
#define BOARD_DEBUG_UART_RTS_LABEL                   "U5[B7]/UART0_RTS/UART_CTS"   /*!< Label */
#define BOARD_DEBUG_UART_RTS_NAME                               "DEBUG_UART_RTS"   /*!< Identifier name */

/* PORTC4 (number 40), U5[C6]/UART0_CTS/UART_RTS */
#define BOARD_DEBUG_UART_CTS_PERIPHERAL                                  LPUART0   /*!< Device name: LPUART0 */
#define BOARD_DEBUG_UART_CTS_SIGNAL                                          CTS   /*!< LPUART0 signal: CTS */
#define BOARD_DEBUG_UART_CTS_PIN_NAME                                UART0_CTS_b   /*!< Pin name */
#define BOARD_DEBUG_UART_CTS_LABEL                   "U5[C6]/UART0_CTS/UART_RTS"   /*!< Label */
#define BOARD_DEBUG_UART_CTS_NAME                               "DEBUG_UART_CTS"   /*!< Identifier name */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitDEBUG_UART(void);

/* PORTB16 (number 21), Y2[2]/EXTAL_32K */
#define BOARD_EXTAL32K_PERIPHERAL                                            RTC   /*!< Device name: RTC */
#define BOARD_EXTAL32K_SIGNAL                                           EXTAL32K   /*!< RTC signal: EXTAL32K */
#define BOARD_EXTAL32K_PIN_NAME                                         EXTAL32K   /*!< Pin name */
#define BOARD_EXTAL32K_LABEL                                   "Y2[2]/EXTAL_32K"   /*!< Label */
#define BOARD_EXTAL32K_NAME                                           "EXTAL32K"   /*!< Identifier name */

/* PORTB17 (number 22), Y2[1]/XTAL_32K */
#define BOARD_XTAL32K_PERIPHERAL                                             RTC   /*!< Device name: RTC */
#define BOARD_XTAL32K_SIGNAL                                             XTAL32K   /*!< RTC signal: XTAL32K */
#define BOARD_XTAL32K_PIN_NAME                                           XTAL32K   /*!< Pin name */
#define BOARD_XTAL32K_LABEL                                     "Y2[1]/XTAL_32K"   /*!< Label */
#define BOARD_XTAL32K_NAME                                             "XTAL32K"   /*!< Identifier name */

/* EXTAL (number 30), Y1[1]/EXTAL_32M */
#define BOARD_EXTAL_PERIPHERAL                                             RADIO   /*!< Device name: RADIO */
#define BOARD_EXTAL_SIGNAL                                                 EXTAL   /*!< RADIO signal: EXTAL */
#define BOARD_EXTAL_PIN_NAME                                               EXTAL   /*!< Pin name */
#define BOARD_EXTAL_LABEL                                      "Y1[1]/EXTAL_32M"   /*!< Label */
#define BOARD_EXTAL_NAME                                                 "EXTAL"   /*!< Identifier name */

/* XTAL (number 31), Y1[3]/XTAL_32M */
#define BOARD_XTAL_PERIPHERAL                                              RADIO   /*!< Device name: RADIO */
#define BOARD_XTAL_SIGNAL                                                   XTAL   /*!< RADIO signal: XTAL */
#define BOARD_XTAL_PIN_NAME                                                 XTAL   /*!< Pin name */
#define BOARD_XTAL_LABEL                                        "Y1[3]/XTAL_32M"   /*!< Label */
#define BOARD_XTAL_NAME                                                   "XTAL"   /*!< Identifier name */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitOSC(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/*******************************************************************************
 * EOF
 ******************************************************************************/
