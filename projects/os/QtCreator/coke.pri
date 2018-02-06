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
# Os QtCreator .pri file for coke
########################################################################
UNAME = $$system(uname)

contains(UNAME,Darwin) {
COKE_OS = macosx
} else {
COKE_OS = linux
}

#CONFIG += c++11
#CONFIG += c++0x

########################################################################
# nadir
NADIR_BLD = $${OTHER_BLD}/$${NADIR_PKG}/build/$${COKE_OS}/QtCreator/$${BUILD_CONFIG}
NADIR_LIB = $${NADIR_BLD}/lib

nadir_LIBS += \
-L$${NADIR_LIB}/libxosnadir \
-lxosnadir \

########################################################################
# coke
coke_INCLUDEPATH += \

coke_DEFINES += \

coke_LIBS += \
$${nadir_LIBS} \
$${build_coke_LIBS} \

contains(UNAME,Darwin) {
coke_LIBS += \
-lpthread \
-ldl \

} else {
coke_LIBS += \
-lpthread \
-ldl \
-lrt \

}
