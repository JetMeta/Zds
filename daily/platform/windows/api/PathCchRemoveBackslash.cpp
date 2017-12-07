/* #FH #CC
       Zey_S : //z 17-12-07 18:07:14 L.24 '21166 T427401943 .K ~0   --+----+----+----+----+----+
		//k
		r#
		znote
		zsp
		zban
       Zey_E : //z 17-12-07 18:07:14 L.24 '21166 T427401943 .K ~0   --+----+----+----+----+----+
       Zcl_S : //z 17-12-07 18:07:14 L.24 '21166 T427401943 .K ~0   --+----+----+----+----+----+
       Zcl_E : //z 17-12-07 18:07:14 L.24 '21166 T427401943 .K ~0   --+----+----+----+----+----+
      ZdoIdx : //z 17-12-07 18:07:14 L.24 '21166 T427401943 .K ~0   --+----+----+----+----+----+
      KmtIdx : //z 17-12-07 18:07:14 L.24 '21166 T427401943 .K ~0   --+----+----+----+----+----+
     TimeCnt : //z 17-12-07 18:07:14 L.24 '21166 T427401943 .K ~0   --+----+----+----+----+----+
     Reg.Cnt : //z 17-12-07 18:17:10 L.24 '20570 T428587860 .K ~2   --+----+----+----+----+----+
     Version : //z 17-12-07 18:21:11 L.24 '20329 T429558160 .K ~57      R+.1    L+.47   --+----+
     Zndex_S : //z 17-12-07 18:07:14 L.24 '21166 T427401943 .K ~0   --+----+----+----+----+----+
     Zndex_E : //z 17-12-07 18:21:11 L.24 '20329 T429558160 .K ~55  --+----+----+----+----+----+
\* #HE //z 2017-12-07 18:07:14 L.24 '21166 BG57IV3 T427401943 .K*******************************/

#region 12-07 R#.1  @PathCchRemoveBackslash
01. 
---
kitem 从一个 path 字符串末尾删除 backslash
Removes the trailing backslash from the end of a path string.

kitem This function differs from PathRemoveBackslash in that it accepts paths with "\\", "\\?\" and "\\?\UNC\" prefixes.
---
HRESULT PathCchRemoveBackslash(
    _Inout_ PWSTR  pszPath,
    _In_    size_t cchPath
);
---
Parameters
pszPath [in, out]
A pointer to the path string. When this function returns successfully, the string contains the path with any trailing backslash removed. If no trailing backslash was found, the string is unchanged.

cchPath [in]
The size of the buffer pointed to by pszPath, in characters.

---
Return value
kitem This function returns S_OK if the function was successful, S_FALSE if the string was a root path or if no backslash was found, or an error code otherwise.

Remarks
znote This function will not remove the backslash from a root path string, such as "C:\".
---
zban windows 7 不能用，使用者很少。
kitem Minimum supported client Windows 8 [desktop apps only]
Minimum supported server Windows Server 2012 [desktop apps only]
Header Pathcch.h
Library Pathcch.lib
#endregion //z 2017-12-07 18:07:20 L.24 '21160 BG57IV3 T427401972 .K.F16008402  [V2]-+----+----+

#region 12-07 R#.2  @PathCchRemoveBackslash example
01. 
wstr_t strip_slash(const wstr_t &path)
{
    wcscpy_s(PATH_BUFFER, MAX_PATH, path.c_str());
    if (S_OK == PathCchRemoveBackslash(PATH_BUFFER, MAX_PATH))
    {
        return wstr_t(PATH_BUFFER);
    }

    return path;
}

wstr_t add_slash(const wstr_t &path)
{
    //path.copy(PATH_BUFFER, MAX_PATH);
    wcscpy_s(PATH_BUFFER, path.c_str());

    if (S_OK == PathCchAddBackslash(PATH_BUFFER, MAX_PATH))
    {
        return wstr_t(PATH_BUFFER);
    }

    return path;
}

// managed code
static String^ PathCchRemoveBackslash(String^ path)
{
    pin_ptr<const wchar_t> pszPath = PtrToStringChars(path);
	
    const int buflen = path->Length + 1;
    wchar_t *buf = new wchar_t[buflen];

    wmemcpy_s(buf, buflen, pszPath, path->Length + 1);

    HRESULT result = ::PathCchRemoveBackslash(buf, buflen);

    return HandleHResult(result, buf, path);
}

static String^ HandleHResult(HRESULT result, wchar_t *buf, String^ path)
{
    if (result == S_OK)
    {
        String^ pathOut = gcnew String(buf);

        delete buf;
        return pathOut;
    }
    else if (result == S_FALSE)
    {
        delete buf;

        return path;
    }
    else
    {
        delete buf;
        throw gcnew Win32Exception(result);
    }
}

static String^ HandleHResult(HRESULT result, wchar_t *buf)
{
    if (result == S_OK)
    {
        String^ pathOut = gcnew String(buf);
        delete buf;
        return pathOut;
    }
    else
    {
        delete buf;
        throw gcnew Win32Exception(result);
    }
}

static void HandleHResult(HRESULT result)
{
    if (result != S_OK)
    {
        throw gcnew Win32Exception(result);
    }
}
#endregion //z 2017-12-07 18:17:10 L.24 '20570 BG57IV3 T428587860 .K.F16008402  [V42]+----+----+
