//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreCDP/NSObject-Protocol.h>

@class CDPContext;

@protocol CDPAuthProviderInternal <NSObject>
- (void)cdpContext:(CDPContext *)arg1 performSilentRecoveryTokenRenewal:(void (^)(CDPContext *, NSError *))arg2;
@end

