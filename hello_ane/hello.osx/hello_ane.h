
#include <Adobe AIR/Adobe AIR.h>

extern "C" {
    //initializer / finalizer
    void contextInitializer(void* extData, const uint8_t* ctxType, FREContext ctx, uint32_t* numFunctions, const FRENamedFunction** functions);
    void contextFinalizer(FREContext ctx);
    
    void helloAneExtensionInitializer(void** extData, FREContextInitializer* ctxInitializer, FREContextFinalizer* ctxFinalizer);
    void helloAneExtensionFinalizer(void* extData);
}
