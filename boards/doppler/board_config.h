#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H


/*
 *
 * DOPPLER-Board-Layout:
 *                                                                                    ---------------- FPGA Pins ------------------
 *                                                                                   LedR LedG LedB
 * DIL Pin 48   47   46   45   44   43   42   41   40   39   38   37   36   35   34   33   32   31   30   29   28   27   26   25
 *       |--O----O----O----O----O----O----O----O----O----O----O----O----O----O----O----O----O----O----O----O----O----O----O----O---|
 * name  | VIN  5V  3.3V PA11 PA10 PA09 PA08 PA07 PA06 PA05 PA04 PB09 PB08 PA02  GND  F41  F40  F39  F38  F37  F36  F35  F34  F32  |
 *       |                                                                                            ö  ö  ö  ö                   |
 *      |                                                                                             ö  ö  ö  ö         |BTN:S1|  |
 *     | USB                           DOPPLER: SamD51 <- SPI -> icE40        |BTN:RESET|             ö  ö  ö  ö                   |
 *      |         LED-PA23                                                                            ö  ö  ö  ö         |BTN:S2|  |
 *       |                                                                                                                         |
 * name  | GND PA13 PA12 PB11 PB14 PA15 PB10 PA31 PA30  RES PA19 PA20 PA21 PA22 3.3V  F11  F12  F13  F18  F19  F20  F21  F23  F25  |
 *       L--O----O----O----O----O----O----O----O----O----O----O----O----O----O----O----O----O----O----O----O----O----O----O----O---|
 * DIL Pin  1    2    3    4    5    6    7    8    9   10   11   12   13   14   15   16   17   18   19   20   21   22   23   24
 *             SCL  SDA                       SWD  SWC RES
 *             -- I2C--                       --- SWD  ---   ----- Shared  -----      ---------------- FPGA Pins ------------------
 */

 #define VENDOR_NAME "Dadamachines"
#define PRODUCT_NAME "Doppler"
#define VOLUME_LABEL "DOPPLER"
#define INDEX_URL "http://zmors.de/doppler"
#define BOARD_ID "SAMD51G19A-Doppler-v0"

#define USB_VID 0x16D0
#define USB_PID 0x0E3B

#define LED_PIN PIN_PA23

#define BOOT_USART_MODULE                 SERCOM0
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBAMASK_SERCOM0
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD3_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_PA07D_SERCOM0_PAD3
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_UNUSED
#define BOOT_USART_PAD0                   PINMUX_PA04D_SERCOM0_PAD0
#define BOOT_GCLK_ID_CORE                 SERCOM0_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM0_GCLK_ID_SLOW

#endif
