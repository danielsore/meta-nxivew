SUMMARY = "touch udev rules"
DESCRIPTION = "add udev rules to invert touch matrix"

LICENSE = "CLOSED"

SRC_URI = " \
    file://libinput.rules \
"

do_install () {
    install -d ${D}/etc/udev/rules.d/
    install -m 0666 ${WORKDIR}/libinput.rules   ${D}/etc/udev/rules.d/
}

FILES_${PN} += " /etc/udev/rules.d/libinput.rules"