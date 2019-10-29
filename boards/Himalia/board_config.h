#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H


#define VENDOR_NAME "IO-Instruments"
#define PRODUCT_NAME "Himalia"
#define VOLUME_LABEL "Himalia"
#define INDEX_URL "http://https://io-instruments.de/himalia"
#define BOARD_ID "SAMD51J20A-Himalia--v0"

#define USB_VID 0x16D0
#define USB_PID 0x0b4F

#define LED_PIN PIN_PA23

#define BOOT_USART_MODULE                 SERCOM0
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBAMASK_SERCOM0
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_PA09C_SERCOM0_PAD1
#define BOOT_USART_PAD0                   PINMUX_PA08C_SERCOM0_PAD0
#define BOOT_GCLK_ID_CORE                 SERCOM0_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM0_GCLK_ID_SLOW

#endif
