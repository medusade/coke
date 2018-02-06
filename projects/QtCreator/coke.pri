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
#   File: coke.pri
#
# Author: $author$
#   Date: 2/5/2018
#
# QtCreator .pri file for coke
########################################################################

OTHER_FWK = ../../../../../../../../..
OTHER_PKG = ../../../../../../..
OTHER_BLD = ..

########################################################################
# nadir
NADIR_PKG = $${OTHER_FWK}/nadir
NADIR_PRJ = $${NADIR_PKG}
NADIR_SRC = $${NADIR_PKG}/src

nadir_INCLUDEPATH += \
$${NADIR_SRC} \

nadir_DEFINES += \
NO_USE_XOS_LOGGER_INTERFACE \

nadir_LIBS += \

########################################################################
# coke
COKE_PKG = ../../../../..
COKE_BLD = ../..

COKE_PRJ = $${COKE_PKG}
COKE_BIN = $${COKE_BLD}/bin
COKE_LIB = $${COKE_BLD}/lib
COKE_SRC = $${COKE_PKG}/src

CONFIG(debug, debug|release) {
BUILD_CONFIG = Debug
coke_DEFINES += DEBUG_BUILD
} else {
BUILD_CONFIG = Release
coke_DEFINES += RELEASE_BUILD
}

coke_INCLUDEPATH += \
$${COKE_SRC} \
$${nadir_INCLUDEPATH} \
$${build_coke_INCLUDEPATH} \

coke_DEFINES += \
$${nadir_DEFINES} \
$${build_coke_DEFINES} \

coke_LIBS += \
-L$${COKE_LIB}/libcoke \
-lcoke \
