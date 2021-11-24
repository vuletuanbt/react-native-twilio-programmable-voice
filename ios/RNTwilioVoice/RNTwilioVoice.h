#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>
@class PKPushCredentials;

@interface RNTwilioVoice : RCTEventEmitter <RCTBridgeModule>
- (void)initPushRegistry;
- (NSString *)fetchAccessToken;
- (void) didUpdatePushCredentials:(PKPushCredentials *)credentials forType:(NSString *)type;
- (void) reRegisterWithAccessToken;
- (void) initTwilioVoice;
- (void) configCallKit: (NSDictionary *)params;
@end
