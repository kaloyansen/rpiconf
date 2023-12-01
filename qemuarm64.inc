# qemuarm64.inc
# target build configuration

QB_MEM = "-m 4096"
QB_CPU = "-cpu cortex-a72"
QB_CPU = "-cpu host"

MACHINE_FEATURES:append = " wifi"
# MACHINE_FEATURES:append = " pci"
# MACHINE_FEATURES:append = " apm"
# MACHINE_FEATURES:append = " usbhost"
# MACHINE_FEATURES:append = " sdio"
# MACHINE_FEATURES:append = " vc4graphics"

#IMAGE_INSTALL:append = " hostapd libnl"
