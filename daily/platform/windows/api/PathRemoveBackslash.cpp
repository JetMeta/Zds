/* #FH #CC
       Zey_S : //z 17-12-07 17:46:12 L.24 '22428 T3435609015.K ~0   --+----+----+----+----+----+
		//k
		r#
		znote
       Zey_E : //z 17-12-07 17:46:12 L.24 '22428 T3435609015.K ~0   --+----+----+----+----+----+
       Zcl_S : //z 17-12-07 17:46:12 L.24 '22428 T3435609015.K ~0   --+----+----+----+----+----+
       Zcl_E : //z 17-12-07 17:46:12 L.24 '22428 T3435609015.K ~0   --+----+----+----+----+----+
      ZdoIdx : //z 17-12-07 17:46:12 L.24 '22428 T3435609015.K ~0   --+----+----+----+----+----+
      KmtIdx : //z 17-12-07 17:46:12 L.24 '22428 T3435609015.K ~0   --+----+----+----+----+----+
     TimeCnt : //z 17-12-07 17:46:12 L.24 '22428 T3435609015.K ~0   --+----+----+----+----+----+
     Reg.Cnt : //z 17-12-07 17:46:14 L.24 '22426 T3435609017.K ~2   --+----+----+----+----+----+
     Version : //z 17-12-07 17:55:41 L.24 '21859 T3436759097.K ~25      R+.-1   L+.5    --+----+
     Zndex_S : //z 17-12-07 17:46:12 L.24 '22428 T3435609015.K ~0   --+----+----+----+----+----+
     Zndex_E : //z 17-12-07 17:55:41 L.24 '21859 T3436759097.K ~23  --+----+----+----+----+----+
\* #HE //z 2017-12-07 17:46:12 L.24 '22428 BG57IV3 T3435609015.K*******************************/

#region 12-07 R#.2  @PathRemoveBackslash
01. 从字符串末尾移除backslash，如果没有
---
LPTSTR PathRemoveBackslash(
    _Inout_ LPTSTR lpszPath
);

Parameters
lpszPath [in, out]
Type: LPTSTR
A pointer to a null-terminated string of length MAX_PATH that contains the path from which to remove the backslash.

Return value
Type: LPTSTR
A pointer that, when this function returns successfully and if a backslash has been removed, points to the terminating null character that has replaced the backslash at the end of the string. If the path did not include a trailing backslash, this value will point to the final character in the string.

---
#include <windows.h>
#include <iostream.h>
#include "Shlwapi.h"

void main( void )
{
    // Path with backslash.
    char buffer_1[ ] = "c:\\a\\b\\File\\";
    char *lpStr1;
    lpStr1 = buffer_1;

    // Path before "PathRemoveBackslash".
    cout << "Path before calling \"PathRemoveBackslash\": " << lpStr1 << endl;

    // Call function "PathRemoveBackslash".
    PathRemoveBackslash(lpStr1);

	// Path after "PathRemoveBackslash".
    cout << "Path after calling \"PathRemoveBackslash\": " << lpStr1 << endl;
}

OUTPUT:
==================
Path before calling "PathRemoveBackslash": c:\a\b\File\
Path after calling "PathRemoveBackslash": c:\a\b\File
---
Header Shlwapi.h
Library Shlwapi.lib
DLL Shlwapi.dll (version 4.71 or later)
---
znote Note  This function is deprecated. We recommend the use of the PathCchRemoveBackslash or PathCchRemoveBackslashEx function in its place.
#endregion //z 2017-12-07 17:46:14 L.24 '22426 BG57IV3 T3435609017.K.F4072804356[V4]-+----+----+
