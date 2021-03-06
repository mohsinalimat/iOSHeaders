//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <CacheDelete/CacheDeleteServiceProtocol-Protocol.h>

@interface CacheDeleteRemoteExtensionContext : NSExtensionContext <CacheDeleteServiceProtocol>
{
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
- (void)servicePing:(CDUnknownBlockType)arg1;
- (void)serviceNotify:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)serviceCallback:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)serviceCancelPurge:(CDUnknownBlockType)arg1;
- (void)servicePurge:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

