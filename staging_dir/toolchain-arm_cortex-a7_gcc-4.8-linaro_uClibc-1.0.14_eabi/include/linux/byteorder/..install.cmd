cmd_/home/lancer/workspace/gl-image/qsdk53/build_dir/toolchain-arm_cortex-a7_gcc-4.8-linaro_uClibc-1.0.14_eabi/linux-dev//include/linux/byteorder/.install := bash scripts/headers_install.sh /home/lancer/workspace/gl-image/qsdk53/build_dir/toolchain-arm_cortex-a7_gcc-4.8-linaro_uClibc-1.0.14_eabi/linux-dev//include/linux/byteorder ./include/uapi/linux/byteorder big_endian.h little_endian.h; bash scripts/headers_install.sh /home/lancer/workspace/gl-image/qsdk53/build_dir/toolchain-arm_cortex-a7_gcc-4.8-linaro_uClibc-1.0.14_eabi/linux-dev//include/linux/byteorder ./include/linux/byteorder ; bash scripts/headers_install.sh /home/lancer/workspace/gl-image/qsdk53/build_dir/toolchain-arm_cortex-a7_gcc-4.8-linaro_uClibc-1.0.14_eabi/linux-dev//include/linux/byteorder ./include/generated/uapi/linux/byteorder ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/lancer/workspace/gl-image/qsdk53/build_dir/toolchain-arm_cortex-a7_gcc-4.8-linaro_uClibc-1.0.14_eabi/linux-dev//include/linux/byteorder/$$F; done; touch /home/lancer/workspace/gl-image/qsdk53/build_dir/toolchain-arm_cortex-a7_gcc-4.8-linaro_uClibc-1.0.14_eabi/linux-dev//include/linux/byteorder/.install