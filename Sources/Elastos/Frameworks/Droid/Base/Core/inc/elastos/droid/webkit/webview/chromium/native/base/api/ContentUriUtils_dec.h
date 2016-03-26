//This file is autogenerated for
//    ContentUriUtils.java
//put this file at the end of the include list
//so the type definition used in this file will be found
#ifndef ELASTOS_CONTENTURIUTILS_CALLBACK_DEC_HH
#define ELASTOS_CONTENTURIUTILS_CALLBACK_DEC_HH


#ifdef __cplusplus
extern "C"
{
#endif
    extern void Elastos_ContentUriUtils_InitCallback(Handle32 cb);
#ifdef __cplusplus
}
#endif

namespace Elastos {
namespace Droid {
namespace Webkit {
namespace Webview {
namespace Chromium {
namespace Base {

struct ElaContentUriUtilsCallback
{
    Int32 (*elastos_ContentUriUtils_openContentUriForRead)(IInterface* context, const String& uriString);
    Boolean (*elastos_ContentUriUtils_contentUriExists)(IInterface* context, const String& uriString);
};

void* ContentUriUtils::ElaContentUriUtilsCallback_Init()
{
    static ElaContentUriUtilsCallback sElaContentUriUtilsCallback;

    sElaContentUriUtilsCallback.elastos_ContentUriUtils_openContentUriForRead = &ContentUriUtils::OpenContentUriForRead;
    sElaContentUriUtilsCallback.elastos_ContentUriUtils_contentUriExists = &ContentUriUtils::ContentUriExists;

    Elastos_ContentUriUtils_InitCallback((Handle32)&sElaContentUriUtilsCallback);
    return &sElaContentUriUtilsCallback;
}

static void* sPElaContentUriUtilsCallback = ContentUriUtils::ElaContentUriUtilsCallback_Init();

} // namespace Base
} // namespace Chromium
} // namespace Webview
} // namespace Webkit
} // namespace Droid
} // namespace Elastos

#endif //ELASTOS_CONTENTURIUTILS_CALLBACK_DEC_HH