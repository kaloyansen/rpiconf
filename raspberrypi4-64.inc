# raspberrypi-64.inc
# machine dependent configuration

IMAGE_FSTYPES:append = " wic"

BOOT_DELAY = "0"
BOOT_DELAY_MS = "0"

DISABLE_OVERSCAN = "0"
DISABLE_RPI_BOOT_LOGO = "1"
DISABLE_SPLASH = "1"
DISABLE_VC4GRAPHICS = "0"

ENABLE_I2C = "0"
ENABLE_UART = "0"

RPI_USE_U_BOOT = "0"
