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

RM_WORK_EXCLUDE ?= "core-image-minimal"
RM_WORK_EXCLUDE:append = " core-image-thc"
RM_WORK_EXCLUDE:append = " core-image-x11"
RM_WORK_EXCLUDE:append = " core-image-weston"
RM_WORK_EXCLUDE:append = " linux-raspberrypi"
RM_WORK_EXCLUDE:append = " imgui"
RM_WORK_EXCLUDE:append = " thcp"
RM_WORK_EXCLUDE:append = " glfw"
RM_WORK_EXCLUDE:append = " msmtp"

SANITY_TESTED_DISTROS:append = " opensusetumbleweed-*"

#EXTRA_IMAGE_FEATURES:remove = "ssh-server-dropbear"