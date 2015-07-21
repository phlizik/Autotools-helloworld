# Autotools-helloworld

### 源码 hello.c

#include <stdio.h>

int main(int argc, char** argv){
     printf("%s", "Hello, Linux World!\n");
     return 0;
}

### 手动输入配置 

——————— configure.ac  生成 configure  —————————— 
//可先执行autoscan自动生成configure.scan再重命名成configure.ac,再进行修改。
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([FULL-PACKAGE-NAME], [VERSION], [BUG-REPORT-ADDRESS])
AM_INIT_AUTOMAKE
AC_CONFIG_SRCDIR([hello.c])
#AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CC

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_CONFIG_FILES([Makefile])
AC_OUTPUT

——————— Makefile.am 生成 Makefile.in —————————— 
bin_PROGRAMS = hello
hello_SOURCES = hello.c


### 演示过程命令如下

mkdir hellloworld
vi hello.c

autoscan
mv configure.scan configure.ac
vi configure.ac

aclocal
autoconf   // 生成configure

vi Makefile.am
touch NEWS README AUTHORS ChangeLog
automake --add-missing //生成Makefile.in

./configure  //生成 Makefile

make all //即可生成可执行文档hello

./hello 执行命令检查运行结果。


