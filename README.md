# Wii64-sixaxis
> A Wii64 port with sixaxis support enabled.

<dl>
  <dt>Environment variables to export:</dt>
    <dd>#For Wii HBC DevkitPPC</dd>
    <dd>export WIILOAD=tcp:192.168.1.15</dd>
    <dd>export DEVKITPRO="/opt/wii64-sixaxis/devkitpro"</dd>
    <dd>export DEVKITPPC="/opt/wii64-sixaxis/devkitpro/devkitPPC"</dd>
    <dd>export PATH="$PATH:/opt/wii64-sixaxis/devkitpro/devkitPPC/bin"</dd>

  <dt>zlib must be cross compied with ppc and linked in the make file in order for this to compile properly:</dt>
    <dd>CC=powerpc-eabi-gcc ./configure --prefix=/opt/wii64-sixaxis/devkitpro/libz/</dd>
</dl>
