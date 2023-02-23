Compiling test.c

Install Keil toolchain:
sudo mkdir /opt/toolchain
cd /opt/toolchain
sudo wget https://armkeil.blob.core.windows.net/developer/Files/downloads/gnu-a/9.2-2019.12/binrel/gcc-arm-9.2-2019.12-x86_64-aarch64-none-linux-gnu.tar.xz
sudo tar xpf gcc-arm-9.2-2019.12-x86_64-aarch64-none-linux-gnu.tar.xz

Install the build dependencies:
sudo apt install git bc bison flex libssl-dev make libc6-dev libncurses5-dev

Open a terminal on your host and export the path to the compiler:
export PATH=$PATH:/opt/toolchain/gcc-arm-9.2-2019.12-x86_64-aarch64-none-linux-gnu/bin

Build the ArmV8a 64-bit application with dynamic linking on the host:
aarch64-none-linux-gnu-gcc test.c -o test-armv8a

Check the executable type:
file test-armv8a
test-armv8a: ELF 64-bit LSB executable, ARM aarch64, version 1 (SYSV), dynamically linked, interpreter /lib/ld-linux-aarch64.so.1, for GNU/Linux 3.7.0, with debug_info, not stripped

Copy the executable from the host to the Model A board in the debix user home directory:
scp test-armv8a debix@imx8mpevk:~/

Login to the Debix target and run the executable:
./test-armv8a

