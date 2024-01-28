# dell.conf
# host build configuration

MACHINE = "qemuarm64"

BUILDELL      = "/sd"
SSTATE_DIR   ?= "${BUILDELL}/sstate-cache"
DL_DIR       ?= "${BUILDELL}/downloads"

# BUILDELL:append = "${@'' if d.getVar('MACHINE') == 'raspberrypi4-64' else '/' + d.getVar('MACHINE')}"

# IMAGE_FSTYPES:remove = "${@'ext4' if d.getVar('MACHINE') == 'raspberrypi4-64' else 'wic'}"

TMPDIR        = "${BUILDELL}/tmp/${MACHINE}"

# INHERIT:remove = "rm_work"

RM_WORK_EXCLUDE ?= "core-image-thc"
RM_WORK_EXCLUDE:append = " linux-raspberrypi"
RM_WORK_EXCLUDE:append = " linux-yocto"
RM_WORK_EXCLUDE:append = " qemu-system-native"
RM_WORK_EXCLUDE:append = " openssl"
RM_WORK_EXCLUDE:append = " python3"
RM_WORK_EXCLUDE:append = " perl"
RM_WORK_EXCLUDE:append = " mesa"
RM_WORK_EXCLUDE:append = " coreutils"
RM_WORK_EXCLUDE:append = " gtk+3"
RM_WORK_EXCLUDE:append = " glibc-locale"
RM_WORK_EXCLUDE:append = " gcc"
RM_WORK_EXCLUDE:append = " binutils"

RM_WORK_EXCLUDE:append = " imgui"
RM_WORK_EXCLUDE:append = " thcp"
RM_WORK_EXCLUDE:append = " glfw"
RM_WORK_EXCLUDE:append = " msmtp"
RM_WORK_EXCLUDE:append = " initscripts"
RM_WORK_EXCLUDE:append = " procps"

SANITY_TESTED_DISTROS:append = " opensusetumbleweed-*"

#EXTRA_IMAGE_FEATURES:remove = "ssh-server-dropbear"