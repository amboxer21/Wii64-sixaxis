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
    
  <dt>To compile:</dt>  
    <dd>Go into the *devkitpro/wii64_beta/* directory and run:</dd>
</dl>
> make -f Makefile.GX_gfx_wii

<dl>
  <dt>*Note:*</dt>
    <dd>For above make command, you can pass any make file to make. There are a few others in this dir. Use the -d switch to get verbose output.</dd>
  <dt>Example:</dt>
</dl>
> make -df Makefile.GX_gfx_wii
