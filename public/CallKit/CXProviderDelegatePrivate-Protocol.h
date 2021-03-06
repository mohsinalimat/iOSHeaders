//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallKit/CXProviderDelegate-Protocol.h>

@class CXProvider, CXPullCallAction, CXSendMMIOrUSSDCodeAction, CXSetRelayingCallAction, CXSetSendingVideoCallAction, CXSetTTYTypeCallAction, CXSetVideoPresentationSizeCallAction, CXSetVideoPresentationStateCallAction;

@protocol CXProviderDelegatePrivate <CXProviderDelegate>

@optional
- (void)provider:(CXProvider *)arg1 performSetVideoPresentationStateCallAction:(CXSetVideoPresentationStateCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performSetVideoPresentationSizeCallAction:(CXSetVideoPresentationSizeCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performPullCallAction:(CXPullCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performSetRelayingCallAction:(CXSetRelayingCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performSetSendingVideoCallAction:(CXSetSendingVideoCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performSetTTYTypeCallAction:(CXSetTTYTypeCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performSendMMIOrUSSDCodeAction:(CXSendMMIOrUSSDCodeAction *)arg2;
@end

