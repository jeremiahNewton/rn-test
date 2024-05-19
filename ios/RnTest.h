
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNRnTestSpec.h"

@interface RnTest : NSObject <NativeRnTestSpec>
#else
#import <React/RCTBridgeModule.h>

@interface RnTest : NSObject <RCTBridgeModule>
#endif

@end
