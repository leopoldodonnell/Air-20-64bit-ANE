#include "hello_ane.h"
#include <stdio.h>
#include <string.h>

#define DEFINE_ANE_FUNCTION(fn) extern "C" FREObject (fn)(FREContext context, void* functionData, uint32_t argc, FREObject argv[])

#define MAP_FUNCTION(fn, data) { (const uint8_t*)(#fn), (data), &(fn) }

DEFINE_ANE_FUNCTION( say_hi )
{
    FREObject returnString;
    
    const char msg[] = "Oh Happy Day! We have a working 64-bit ANE.";
    FRENewObjectFromUTF8(sizeof(msg), (uint8_t*) msg, &returnString);
    
    return returnString;
}


void contextInitializer(void* extData, const uint8_t* ctxType, FREContext ctx, uint32_t* numFunctions, const FRENamedFunction** functions)
{
    static FRENamedFunction functionMap[] = {
        MAP_FUNCTION( say_hi, NULL )
    };
    *numFunctions = sizeof( functionMap ) / sizeof( FRENamedFunction );
    *functions = functionMap;
}

void contextFinalizer(FREContext ctx)
{
    return;
}

void helloAneExtensionInitializer(void** extData, FREContextInitializer* ctxInitializer, FREContextFinalizer* ctxFinalizer)
{
    *ctxInitializer = &contextInitializer;
    *ctxFinalizer = &contextFinalizer;
}

void helloAneExtensionFinalizer(void* extData)
{
    return;
}

