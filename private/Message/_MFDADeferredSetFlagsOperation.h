//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFOfflineCacheOperation.h>

#import <Message/MFDAOfflineCacheOperation-Protocol.h>

@class NSString;

@interface _MFDADeferredSetFlagsOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation>
{
    unsigned long long _onFlags;
    unsigned long long _offFlags;
    NSString *_messageID;
}

- (id)description;
- (_Bool)performWithAccount:(id)arg1 offlineCache:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSetFlagsRequest:(id)arg1;

@end

