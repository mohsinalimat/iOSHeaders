//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class CDPContext, NSDictionary;

@protocol CDPDAuthProviderInternal <NSObject>
- (void)cdpContext:(CDPContext *)arg1 persistMasterKeyVerifier:(NSDictionary *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

