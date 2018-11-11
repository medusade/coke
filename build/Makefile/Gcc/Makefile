########################################################################
# Copyright (c) 1988-2018 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: Makefile
#
# Author: $author$
#   Date: 10/19/2018
#
# build Gcc Makefile for framework
########################################################################


########################################################################
# depends
#
# pkg-config --cflags --libs depends
#

ifndef USE_HOME_BUILD_depends
USE_HOME_BUILD_depends = no
endif

ifeq ($(USE_HOME_BUILD_depends),yes)
#
# home build depends
#
build_depends_USRDEFINES += \

build_depends_USRINCLUDES += \
-I$(HOME)/build/depends/include \

build_depends_USRCXXFLAGS += \

build_depends_USRLIBDIRS += \
-L$(HOME)/build/depends/lib \

build_depends_LIBS += \
-ldepends \

build_depends_FRAMEWORKS += \

else
#
# build depends
#
build_depends_USRDEFINES += \

build_depends_USRINCLUDES += \

build_depends_USRCXXFLAGS += \

build_depends_USRLIBDIRS += \

build_depends_LIBS += \

build_depends_FRAMEWORKS += \

endif

########################################################################
# framework

# build framework USRDEFINES
#
build_framework_USRDEFINES += \
${build_depends_USRDEFINES} \


# build framework USRINCLUDES
#
build_framework_USRINCLUDES += \
${build_depends_USRINCLUDES} \


# build framework USRCXXFLAGS
#
build_framework_USRCXXFLAGS += \
${build_depends_USRCXXFLAGS} \


# build framework USRLIBDIRS
#
build_framework_USRLIBDIRS += \
${build_depends_USRLIBDIRS} \


# build framework FRAMEWORKS
#
build_framework_FRAMEWORKS += \
${build_depends_FRAMEWORKS} \


# build framework LIBS
#
build_framework_LIBS += \
${build_depends_LIBS} \
${build_framework_FRAMEWORKS}


