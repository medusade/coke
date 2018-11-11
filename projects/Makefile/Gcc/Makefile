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
# generic Gcc Makefile for framework
########################################################################

OTHER_VERSION_PKG = ${PKG}
OTHER_DEPENDS_PKG = ${PKG}/..
OTHER_THIRDPARTY_NAME = thirdparty
OTHER_THIRDPARTY_VERSION_PKG = ${OTHER_VERSION_PKG}/${OTHER_THIRDPARTY_NAME}

FRAMEWORK_PKG = ${PKG}
FRAMEWORK_SRC = ${FRAMEWORK_PKG}/src
FRAMEWORK_BLD = ${FRAMEWORK_PKG}/${BLD}/${BUILD_TYPE}
FRAMEWORK_LIB = ${FRAMEWORK_BLD}/lib
FRAMEWORK_BIN = ${FRAMEWORK_BLD}/bin


########################################################################
# framework

# framework USRDEFINES
#
framework_USRDEFINES += \
${build_framework_USRDEFINES} \

# framework USRINCLUDES
#
framework_USRINCLUDES += \
-I${FRAMEWORK_SRC} \
${build_framework_USRINCLUDES} \

# framework USRCXXFLAGS
#
framework_USRCXXFLAGS += \
${build_framework_USRCXXFLAGS} \

# framework USRLIBDIRS
#
framework_USRLIBDIRS += \
-L${FRAMEWORK_LIB} \
${build_framework_USRLIBDIRS} \

# framework LIBS
#
framework_LIBS += \
-lframework \
${build_framework_LIBS} \

########################################################################

