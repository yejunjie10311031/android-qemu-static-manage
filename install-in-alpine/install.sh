apk update
apk upgrade
apk add make samurai perl python3 gcc libc-dev pkgconf linux-headers glib-dev glib-static zlib-dev zlib-static bash xz git patch
wget https://www.cairographics.org/releases/pixman-0.42.0.tar.gz
tar -xf pixman-0.42.0.tar.gz
cd pixman-0.42.0
./configure && make && make install 
wget https://ftp.gnu.org/gnu/ncurses/ncurses-6.3.tar.gz
tar -xf ncurses-6.3.tar.gz
cd ncurses-6.3
./configure --prefix=/usr && make -j6 && make install 
export PKG_CONFIG_PATH="/usr/local/lib/pkgconfig/"
wget https://download.qemu.org/qemu-7.2.0.tar.xz
tar -xf qemu-7.2.0.tar.xz
git clone https://github.com/ziglang/qemu-static qemu-7.2.0
cd qemu-7.2.0
patch -p1 -i ./patch/linux-user__syscall.c.diff
patch -p1 -i ./patch/linux-user__signal.c.diff
mkdir build
cd build
../configure --prefix="/data/qemu" --disable-debug-info --disable-werror --enable-linux-user --static
make -j8 && make install
