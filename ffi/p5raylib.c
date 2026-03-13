#include <ffi_platypus_bundle.h>
#include <raylib.h>
#include <string.h>

RenderTexture2D* rlffi_LoadRenderTexture( int width, int height ) {
    RenderTexture2D* rt2d = (RenderTexture2D*)malloc( sizeof( RenderTexture2D ) );
    RenderTexture2D local_rt2d = LoadRenderTexture( width, height );
    memcpy( rt2d, &local_rt2d, sizeof( rt2d ) );
    return rt2d;
}
