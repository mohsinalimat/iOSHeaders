//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsDonation/CNDCoreTelephonyServices-Protocol.h>

@class NSString;

@interface CNDCoreTelephonyServices : NSObject <CNDCoreTelephonyServices>
{
}

- (void)_CTServerConnectionUnregisterForNotification:(struct __CTServerConnection *)arg1:(struct __CFString *)arg2;
- (void)_CTServerConnectionRegisterBlockForNotification:(struct __CTServerConnection *)arg1:(struct __CFString *)arg2:(CDUnknownBlockType)arg3;
- (void)_CTServerConnectionCopyPhoneNumber:(struct __CTServerConnection *)arg1:(int)arg2:(id *)arg3:(id *)arg4:(id *)arg5:(id *)arg6;
- (struct __CTServerConnection *)_CTServerConnectionCreateOnTargetQueue:(struct __CFAllocator *)arg1:(struct __CFString *)arg2:(id)arg3:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

