# hp.inc
# host build configuration

INHERIT:remove = "rm_work"
# SANITY_TESTED_DISTROS:append = " manjaro"

MACHINE = "qemuarm64"

#INHERIT:append = " devshell"


# TUNE_FEATURES:remove = "cortexa57"
# TUNE_FEATURES:append = " cortexa72"
# DEFAULTTUNE = "cortexa72"

# Qemu configuration
#PACKAGECONFIG:append:pn-qemu-system-native = " sdl"
#ASSUME_PROVIDED += "libsdl2-native"
#PACKAGECONFIG:append:pn-qemu-system-native = " gtk+"


# MACHINE_FEATURES:append = " xf86-video-fbdev"
# MACHINE_FEATURES:append = " vc4graphics"
# next line includes iw, wpa
# MACHINE_FEATURES:append = " wifi"
# MACHINE_FEATURES:append = " touchscreen"

# EXTRA_IMAGE_FEATURES:append = " hwcodecs"
# EXTRA_IMAGE_FEATURES:append = " x11"

#DISTRO_FEATURES:append = " fbdev"
#DISTRO_FEATURES:append = " directfb"
#DISTRO_FEATURES:append = " keyboard"
#DISTRO_FEATURES:append = " opengl"
#DISTRO_FEATURES:append = " x11"
#DISTRO_FEATURES:append = " wifi"

#CORE_IMAGE_EXTRA_INSTALL:append = " xf86-video-modesetting"
#CORE_IMAGE_EXTRA_INSTALL:append = " packagegroup-core-x11"
#CORE_IMAGE_EXTRA_INSTALL:append = " packagegroup-base-wifi"
#CORE_IMAGE_EXTRA_INSTALL:append = " xserver-xorg-extension-glx"
#CORE_IMAGE_EXTRA_INSTALL:append = " fontconfig"
#CORE_IMAGE_EXTRA_INSTALL:append = " fontconfig-utils"
#CORE_IMAGE_EXTRA_INSTALL:append = " kernel-modules"


# PACKAGE_INSTALL:append = " xf86-video-fbdev"
# PACKAGE_INSTALL:prepend = "linux-libc-headers "
# PACKAGE_INSTALL:append = " dhcpcd"
# PACKAGE_INSTALL:append = " mesa"
#PACKAGE_INSTALL:append = " glfw"
# PACKAGE_INSTALL:append = " xf86-video-vmware"
# PACKAGE_INSTALL:remove = " mesa"
# PACKAGE_INSTALL:append = " iw"
# PACKAGE_INSTALL:append = " wpa-supplicant"
#PACKAGE_INSTALL:append = " xserver-xf86-config"
#PACKAGE_INSTALL:append = " hwlatdetect"
#PACKAGE_INSTALL:append = " virglrenderer"
#PACKAGE_INSTALL:append = " directfb"
#PACKAGE_INSTALL:append = " xorg-fonts-100dpi"
# PACKAGE_INSTALL:append = " mesa-demos"
# PACKAGE_INSTALL:append = " opengl-es-cts"


# BB_DISKMON_DIRS ??= "\
#     STOPTASKS,${TMPDIR},1G,100K \
#     STOPTASKS,${DL_DIR},1G,100K \
#     STOPTASKS,${SSTATE_DIR},1G,100K \
#     STOPTASKS,/tmp,100M,100K \
#     HALT,${TMPDIR},100M,1K \
#     HALT,${DL_DIR},100M,1K \
#     HALT,${SSTATE_DIR},100M,1K \
#     HALT,/tmp,10M,1K"


# USER_CLASSES ?= "buildstats"
# PATCHRESOLVE = "noop"
