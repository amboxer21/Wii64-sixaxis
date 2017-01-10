# Wii64-sixaxis
A Wii64 port with sixaxis support enabled.

Environment variables to export:
#For Wii HBC DevkitPPC
export WIILOAD=tcp:192.168.1.15

export DEVKITPRO="/opt/wii64-sixaxis/devkitpro"

export DEVKITPPC="/opt/wii64-sixaxis/devkitpro/devkitPPC"

export PATH="$PATH:/opt/wii64-sixaxis/devkitpro/devkitPPC/bin"


zlib must be cross compied with ppc and linked in the make file in order for this to compile properly:

CC=powerpc-eabi-gcc ./configure --prefix=/opt/wii64-sixaxis/devkitpro/libz/
