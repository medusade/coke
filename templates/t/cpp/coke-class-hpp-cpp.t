%########################################################################
%# Copyright (c) 1988-2018 $organization$
%#
%# This software is provided by the author and contributors ``as is'' 
%# and any express or implied warranties, including, but not limited to, 
%# the implied warranties of merchantability and fitness for a particular 
%# purpose are disclaimed. In no event shall the author or contributors 
%# be liable for any direct, indirect, incidental, special, exemplary, 
%# or consequential damages (including, but not limited to, procurement 
%# of substitute goods or services; loss of use, data, or profits; or 
%# business interruption) however caused and on any theory of liability, 
%# whether in contract, strict liability, or tort (including negligence 
%# or otherwise) arising in any way out of the use of this software, 
%# even if advised of the possibility of such damage.
%#
%#   File: coke-class-hpp-cpp.t
%#
%# Author: $author$
%#   Date: 2/2/2018
%########################################################################
%with(%
%input,%(%else-then(%input%,%(%input()%)%)%)%,%
%Input,%(%else-then(%Input%,%(%input%)%)%)%,%
%INPUT,%(%else-then(%INPUT%,%(%toupper(%Input%)%)%)%)%,%
%input,%(%else-then(%_Input%,%(%tolower(%Input%)%)%)%)%,%
%inputfile,%(%else-then(%inputfile%,%(%filename(%Input%)%)%)%)%,%
%InputFile,%(%else-then(%InputFile%,%(%inputfile%)%)%)%,%
%INPUTFILE,%(%else-then(%INPUTFILE%,%(%toupper(%InputFile%)%)%)%)%,%
%inputfile,%(%else-then(%_InputFile%,%(%tolower(%InputFile%)%)%)%)%,%
%inputpath,%(%else-then(%inputpath%,%(%filepath(%Input%)%)%)%)%,%
%InputPath,%(%else-then(%InputPath%,%(%inputpath%)%)%)%,%
%INPUTPATH,%(%else-then(%INPUTPATH%,%(%toupper(%InputPath%)%)%)%)%,%
%inputpath,%(%else-then(%_InputPath%,%(%tolower(%InputPath%)%)%)%)%,%
%inputbase,%(%else-then(%inputbase%,%(%filebase(%Input%)%)%)%)%,%
%InputBase,%(%else-then(%InputBase%,%(%inputbase%)%)%)%,%
%INPUTBASE,%(%else-then(%INPUTBASE%,%(%toupper(%InputBase%)%)%)%)%,%
%inputbase,%(%else-then(%_InputBase%,%(%tolower(%InputBase%)%)%)%)%,%
%inputextension,%(%else-then(%inputextension%,%(%fileextension(%Input%)%)%)%)%,%
%InputExtension,%(%else-then(%InputExtension%,%(%inputextension%)%)%)%,%
%INPUTEXTENSION,%(%else-then(%INPUTEXTENSION%,%(%toupper(%InputExtension%)%)%)%)%,%
%inputextension,%(%else-then(%_InputExtension%,%(%tolower(%InputExtension%)%)%)%)%,%
%organization,%(%else-then(%organization%,%($organization)%)%)%,%
%Organization,%(%else-then(%Organization%,%(%organization%)%)%)%,%
%ORGANIZATION,%(%else-then(%ORGANIZATION%,%(%toupper(%Organization%)%)%)%)%,%
%organization,%(%else-then(%_Organization%,%(%tolower(%Organization%)%)%)%)%,%
%author,%(%else-then(%author%,%($author)%)%)%,%
%Author,%(%else-then(%Author%,%(%author%)%)%)%,%
%AUTHOR,%(%else-then(%AUTHOR%,%(%toupper(%Author%)%)%)%)%,%
%author,%(%else-then(%_Author%,%(%tolower(%Author%)%)%)%)%,%
%year,%(%else-then(%year()%,%(2018)%)%)%,%
%Year,%(%else-then(%Year%,%(%year%)%)%)%,%
%YEAR,%(%else-then(%YEAR%,%(%toupper(%Year%)%)%)%)%,%
%year,%(%else-then(%_Year%,%(%tolower(%Year%)%)%)%)%,%
%date,%(%else-then(%date()%,%(2/2/2018)%)%)%,%
%Date,%(%else-then(%Date%,%(%date%)%)%)%,%
%DATE,%(%else-then(%DATE%,%(%toupper(%Date%)%)%)%)%,%
%date,%(%else-then(%_Date%,%(%tolower(%Date%)%)%)%)%,%
%namespace,%(%else-then(%namespace%,%(coke/lang)%)%)%,%
%Namespace,%(%else-then(%Namespace%,%(%namespace%)%)%)%,%
%NAMESPACE,%(%else-then(%NAMESPACE%,%(%toupper(%Namespace%)%)%)%)%,%
%namespace,%(%else-then(%_Namespace%,%(%tolower(%Namespace%)%)%)%)%,%
%ifndef,%(%else-then(%ifndef%,%(%Namespace%)%)%)%,%
%Ifndef,%(%else-then(%Ifndef%,%(%ifndef%)%)%)%,%
%Ifndef,%(%parse(%Ifndef%,/,,_)%)%,%
%IFNDEF,%(%else-then(%IFNDEF%,%(%toupper(%Ifndef%)%)%)%)%,%
%ifndef,%(%else-then(%_Ifndef%,%(%tolower(%Ifndef%)%)%)%)%,%
%include,%(%else-then(%include%,%(coke/lang/Object.hpp)%)%)%,%
%Include,%(%else-then(%Include%,%(%include%)%)%)%,%
%INCLUDE,%(%else-then(%INCLUDE%,%(%toupper(%Include%)%)%)%)%,%
%include,%(%else-then(%_Include%,%(%tolower(%Include%)%)%)%)%,%
%sysinclude,%(%else-then(%sysinclude%,%()%)%)%,%
%SysInclude,%(%else-then(%SysInclude%,%(%sysinclude%)%)%)%,%
%SYSINCLUDE,%(%else-then(%SYSINCLUDE%,%(%toupper(%SysInclude%)%)%)%)%,%
%sysinclude,%(%else-then(%_SysInclude%,%(%tolower(%SysInclude%)%)%)%)%,%
%Includes,%(%parse(%Include%,;,,,,%(#include "%Include%"
)%,Include)%)%,%
%SysIncludes,%(%parse(%SysInclude%,;,,,,%(#include <%Include%>
)%,Include)%)%,%
%class,%(%else-then(%do(%class%)%,%(Class)%)%)%,%
%Class,%(%else-then(%do(%Class%)%,%(%class%)%)%)%,%
%CLASS,%(%else-then(%CLASS%,%(%toupper(%Class%)%)%)%)%,%
%class,%(%else-then(%_Class%,%(%tolower(%Class%)%)%)%)%,%
%classimplements,%(%else-then(%classimplements%,%(::coke::lang::ImplementBase)%)%)%,%
%ClassImplements,%(%else-then(%ClassImplements%,%(%classimplements%)%)%)%,%
%CLASSIMPLEMENTS,%(%else-then(%CLASSIMPLEMENTS%,%(%toupper(%ClassImplements%)%)%)%)%,%
%classimplements,%(%else-then(%_ClassImplements%,%(%tolower(%ClassImplements%)%)%)%)%,%
%classextends,%(%else-then(%classextends%,%()%)%)%,%
%ClassExtends,%(%else-then(%ClassExtends%,%(%classextends%)%)%)%,%
%CLASSEXTENDS,%(%else-then(%CLASSEXTENDS%,%(%toupper(%ClassExtends%)%)%)%)%,%
%classextends,%(%else-then(%_ClassExtends%,%(%tolower(%ClassExtends%)%)%)%)%,%
%classtype,%(%else-then(%classtype%,%(%else(%ClassExtends%,interface,class)%)%)%)%,%
%ClassType,%(%else-then(%ClassType%,%(%classtype%)%)%)%,%
%CLASSTYPE,%(%else-then(%CLASSTYPE%,%(%toupper(%ClassType%)%)%)%)%,%
%classtype,%(%else-then(%_ClassType%,%(%tolower(%ClassType%)%)%)%)%,%
%isinterface,%(%else-then(%isinterface%,%(IsInterface)%)%)%,%
%IsInterface,%(%else-then(%IsInterface%,%(%isinterface%)%)%)%,%
%ISINTERFACE,%(%else-then(%ISINTERFACE%,%(%toupper(%IsInterface%)%)%)%)%,%
%isinterface,%(%else-then(%_IsInterface%,%(%tolower(%IsInterface%)%)%)%)%,%
%isabstract,%(%else-then(%isabstract%,%(IsAbstract)%)%)%,%
%IsAbstract,%(%else-then(%IsAbstract%,%(%isabstract%)%)%)%,%
%ISABSTRACT,%(%else-then(%ISABSTRACT%,%(%toupper(%IsAbstract%)%)%)%)%,%
%isabstract,%(%else-then(%_IsAbstract%,%(%tolower(%IsAbstract%)%)%)%)%,%
%isclass,%(%else-then(%isclass%,%(IsClass)%)%)%,%
%IsClass,%(%else-then(%IsClass%,%(%isclass%)%)%)%,%
%ISCLASS,%(%else-then(%ISCLASS%,%(%toupper(%IsClass%)%)%)%)%,%
%isclass,%(%else-then(%_IsClass%,%(%tolower(%IsClass%)%)%)%)%,%
%includeheader,%(%else-then(%includeheader%,%(%Namespace%/%Class%)%)%)%,%
%IncludeHeader,%(%else-then(%IncludeHeader%,%(%includeheader%)%)%)%,%
%INCLUDEHEADER,%(%else-then(%INCLUDEHEADER%,%(%toupper(%IncludeHeader%)%)%)%)%,%
%includeheader,%(%else-then(%_IncludeHeader%,%(%tolower(%IncludeHeader%)%)%)%)%,%
%HeaderIncludes,%(%parse(%IncludeHeader%,;,,,,%(#include "%HeaderInclude%.hpp"
)%,HeaderInclude)%)%,%
%extension,%(%else-then(%extension%,%(%else-then(%fileextension(%file%)%,%(%else-then(%fileextension(%File%)%,%(cpp)%)%)%)%)%)%)%,%
%Extension,%(%else-then(%Extension%,%(%extension%)%)%)%,%
%EXTENSION,%(%else-then(%EXTENSION%,%(%toupper(%Extension%)%)%)%)%,%
%extension,%(%else-then(%_Extension%,%(%tolower(%Extension%)%)%)%)%,%
%file,%(%else-then(%filebase(%do(%file%)%)%,%(%Class%)%)%)%,%
%File,%(%else-then(%filebase(%do(%File%)%)%,%(%file%)%)%)%,%
%FILE,%(%else-then(%FILE%,%(%toupper(%File%)%)%)%)%,%
%file,%(%else-then(%_File%,%(%tolower(%File%)%)%)%)%,%
%Namespace_begin,%(%else-then(%Namespace_begin%,%(%parse(%Namespace%,/,,,,%(namespace %Namespace% {
)%,Namespace)%)%)%)%,%
%Namespace_end,%(%else-then(%Namespace_end%,%(%reverse-parse(%Namespace%,/,,,,%(} // namespace %Namespace%
)%,Namespace)%)%)%)%,%
%%(%
%%include(%InputPath%/coke-file-hpp-cpp.t)%%
%%include(%InputPath%/coke-class-%Extension%.t)%%
%)%)%