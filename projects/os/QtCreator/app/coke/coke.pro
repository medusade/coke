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
#   File: coke.pro
#
# Author: $author$
#   Date: 10/19/2018
#
# QtCreator .pro file for coke executable coke
########################################################################
include(../../../../../build/QtCreator/coke.pri)
include(../../../../QtCreator/coke.pri)
include(../../coke.pri)
include(../../../../QtCreator/app/coke/coke.pri)

TARGET = $${coke_exe_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${coke_exe_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${coke_exe_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${coke_exe_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
SOURCES += \
$${coke_exe_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${coke_exe_HEADERS} \

# SOURCES
#
SOURCES += \
$${coke_exe_SOURCES} \
$${OBJECTIVE_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${coke_exe_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${coke_exe_LIBS} \
$${FRAMEWORKS} \


