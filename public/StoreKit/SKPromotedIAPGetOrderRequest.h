//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKit/SKRequest.h>

@class NSString;

@interface SKPromotedIAPGetOrderRequest : SKRequest
{
    CDUnknownBlockType _completionHandler;
    NSString *_bundleId;
}

@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_sendXPCMessage;
- (void)_handleReply:(id)arg1;
- (id)initWithBundleId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
