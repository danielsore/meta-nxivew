IMAGE_CLASSES_append = " image_type_tezi"
IMAGE_FSTYPES_append = " teziimg"
TORADEX_PRODUCT_IDS = "0036 0040 0044 0045"
TORADEX_PRODUCT_IDS[0036] = "imx6ull-colibri-novus-ihm.dtb"
TORADEX_PRODUCT_IDS[0040] = "imx6ull-colibri-novus-ihm.dtb"
TORADEX_PRODUCT_IDS[0044] = "imx6ull-colibri-novus-ihm.dtb"
TORADEX_PRODUCT_IDS[0045] = "imx6ull-colibri-novus-ihm.dtb"
TORADEX_FLASH_TYPE = "rawnand"

WIC_CREATE_EXTRA_ARGS_append = " --no-fstab-update"

MACHINE_NAME = "Colibri-iMX6ULL"

PREFERRED_PROVIDER_u-boot-default-script = "u-boot-distro-boot"
UBOOT_ENTRYPOINT_colibri-imx6ull = "0x81000000"

MACHINEOVERRIDES_append_upstream = ":use-mainline-bsp"
MACHINE_FIRMWARE_remove_use-mainline-bsp = "firmware-imx-vpu-imx6q firmware-imx-vpu-imx6d"

UBOOT_MAKE_TARGET_colibri-imx6ull = "u-boot.imx"
UBOOT_ENTRYPOINT_colibri-imx6ull = "0x81000000"
UBOOT_DTB_LOADADDRESS_colibri-imx6ull = "0x82100000"
UBOOT_DTBO_LOADADDRESS_colibri-imx6ull = "0x87000000"

KERNEL_DEVICETREE_append_use_nxp_bsp = " \
    imx6ull-colibri-aster.dtb \
    imx6ull-colibri-iris.dtb \
    imx6ull-colibri-iris-v2.dtb \
    imx6ull-colibri-wifi-aster.dtb \
    imx6ull-colibri-wifi-iris.dtb \
    imx6ull-colibri-wifi-iris-v2.dtb \
"

PREFERRED_PROVIDER_virtual/kernel = "linux-toradex"
PREFERRED_PROVIDER_virtual/kernel_preempt-rt = "linux-toradex"
PREFERRED_PROVIDER_virtual/kernel_use-mainline-bsp = "linux-toradex-mainline"
PREFERRED_PROVIDER_virtual/kernel_use-mainline-bsp_preempt-rt = "linux-toradex-mainline"
PREFERRED_PROVIDER_virtual/dtb_use-mainline-bsp = "device-tree-overlays-mainline"
