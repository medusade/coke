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
#   File: libcoke.pri
#
# Author: $author$
#   Date: 10/19/2018
#
# QtCreator .pri file for coke library libcoke
########################################################################

########################################################################
# libcoke

# libcoke TARGET
#
libcoke_TARGET = coke
libcoke_TEMPLATE = lib
libcoke_CONFIG += staticlib

# libcoke INCLUDEPATH
#
libcoke_INCLUDEPATH += \
$${coke_INCLUDEPATH} \

# libcoke DEFINES
#
libcoke_DEFINES += \
$${coke_DEFINES} \

########################################################################
# libcoke OBJECTIVE_HEADERS
#
#libcoke_OBJECTIVE_HEADERS += \
#$${COKE_SRC}/coke/base/Base.hh \

# libcoke OBJECTIVE_SOURCES
#
#libcoke_OBJECTIVE_SOURCES += \
#$${COKE_SRC}/coke/base/Base.mm \

########################################################################
# libcoke HEADERS
#
libcoke_HEADERS += \
$${COKE_SRC}/coke/io/PrintWriter.hpp \
$${COKE_SRC}/coke/io/OutputStream.hpp \
$${COKE_SRC}/coke/io/InputStream.hpp \
$${COKE_SRC}/coke/io/BufferedWriter.hpp \
$${COKE_SRC}/coke/io/Writer.hpp \
$${COKE_SRC}/coke/io/BufferedReader.hpp \
$${COKE_SRC}/coke/io/Reader.hpp \
$${COKE_SRC}/coke/io/Serializable.hpp \
$${COKE_SRC}/coke/util/Map.hpp \
$${COKE_SRC}/coke/util/Locale.hpp \
$${COKE_SRC}/coke/util/List.hpp \
$${COKE_SRC}/coke/util/Iterator.hpp \
$${COKE_SRC}/coke/util/Enumeration.hpp \
$${COKE_SRC}/coke/util/Collection.hpp \
$${COKE_SRC}/coke/util/Array.hpp \
$${COKE_SRC}/coke/lang/String.hpp \
$${COKE_SRC}/coke/lang/Class.hpp \
$${COKE_SRC}/coke/lang/Object.hpp \
$${COKE_SRC}/coke/lang/Base.hpp \
$${COKE_SRC}/coke/lib/Version.hpp \
$${COKE_SRC}/coke/lib/coke/Version.hpp \
$${COKE_SRC}/coke/base/Types.hpp \

# libcoke SOURCES
#
libcoke_SOURCES += \
$${COKE_SRC}/coke/io/PrintWriter.cpp \
$${COKE_SRC}/coke/io/OutputStream.cpp \
$${COKE_SRC}/coke/io/InputStream.cpp \
$${COKE_SRC}/coke/io/BufferedWriter.cpp \
$${COKE_SRC}/coke/io/Writer.cpp \
$${COKE_SRC}/coke/io/BufferedReader.cpp \
$${COKE_SRC}/coke/io/Reader.cpp \
$${COKE_SRC}/coke/io/Serializable.cpp \
$${COKE_SRC}/coke/util/Map.cpp \
$${COKE_SRC}/coke/util/Locale.cpp \
$${COKE_SRC}/coke/util/List.cpp \
$${COKE_SRC}/coke/util/Iterator.cpp \
$${COKE_SRC}/coke/util/Enumeration.cpp \
$${COKE_SRC}/coke/util/Collection.cpp \
$${COKE_SRC}/coke/util/Array.cpp \
$${COKE_SRC}/coke/lang/String.cpp \
$${COKE_SRC}/coke/lang/Class.cpp \
$${COKE_SRC}/coke/lang/Object.cpp \
$${COKE_SRC}/coke/lang/Base.cpp \
$${COKE_SRC}/coke/lib/coke/Version.cpp \
$${COKE_SRC}/coke/base/Types.cpp \

########################################################################
