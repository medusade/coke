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
#   File: libcoke.pro
#
# Author: $author$
#   Date: 10/19/2018
#
# QtCreator .pro file for coke library libcoke
########################################################################
include(../../../../../build/QtCreator/coke.pri)
include(../../../../QtCreator/coke.pri)
include(../../coke.pri)
include(../../../../QtCreator/lib/libcoke/libcoke.pri)

TARGET = $${libcoke_TARGET}
TEMPLATE = $${libcoke_TEMPLATE}
CONFIG += $${libcoke_CONFIG}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${libcoke_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${libcoke_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${libcoke_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${libcoke_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${libcoke_HEADERS} \

# SOURCES
#
SOURCES += \
$${libcoke_SOURCES} \

########################################################################


