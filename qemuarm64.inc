# qemuarm64.inc
# target build configuration

QB_MEM = "-m 4096"
QB_CPU = "-cpu cortex-a72"

# MACHINE_FEATURES:append = " wifi"
# MACHINE_FEATURES:append = " pci"
# MACHINE_FEATURES:append = " apm"
# MACHINE_FEATURES:append = " usbhost"
# MACHINE_FEATURES:append = " sdio"
# MACHINE_FEATURES:append = " vc4graphics"

#IMAGE_INSTALL:append = " hostapd libnl"

# -netdev user,id=wlan0 -device virtio-net-pci,netdev=wlan0

#QB_NETWORK_DEVICE:append = " -device virtio-net-pci,netdev=net1,mac=@MAC@"
#QB_TAP_OPT:append = " -netdev tap,id=net1,ifname=@TAP@,script=no,downscript=no"


PACKAGECONFIG:append:pn-qemu-system-native = " sdl"
#ASSUME_PROVIDED += "libsdl2-native"
#PACKAGECONFIG:append:pn-qemu-system-native = " gtk+"
