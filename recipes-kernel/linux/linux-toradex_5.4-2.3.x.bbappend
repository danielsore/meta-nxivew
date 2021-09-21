FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

unset KBUILD_DEFCONFIG

SRC_URI += "\
    file://logo/logo_custom_clut224.ppm \
    file://dts/imx6ull-colibri-novus-ihm.dts \
    file://dts/imx6ull-colibri-novus-ihm.dtsi \
    file://defconfig \
"

do_patchextra () {
    install -d ${STAGING_KERNEL_DIR}/drivers/video/logo/
    install -m 0644 ${WORKDIR}/logo/logo_custom_clut224.ppm ${STAGING_KERNEL_DIR}/drivers/video/logo/

    install -d ${STAGING_KERNEL_DIR}/arch/arm/boot/dts/
    install -m 0644 ${WORKDIR}/dts/imx6ull-colibri-novus-ihm.dts ${STAGING_KERNEL_DIR}/arch/arm/boot/dts/
    install -m 0644 ${WORKDIR}/dts/imx6ull-colibri-novus-ihm.dtsi ${STAGING_KERNEL_DIR}/arch/arm/boot/dts/
}

addtask patchextra after do_patch before do_compile
