//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, NSString, SKUIClientContext, SKUIRedeemConfiguration;
@protocol OS_dispatch_queue;

@interface SKUIRedeemPreflightOperation : NSOperation
{
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _loadsRedeemCodeMetadata;
    CDUnknownBlockType _outputBlock;
    NSString *_redeemCode;
    SKUIRedeemConfiguration *_redeemConfiguration;
    _Bool _forcesAuthentication;
}

@property(nonatomic) _Bool forcesAuthentication; // @synthesize forcesAuthentication=_forcesAuthentication;
- (void).cxx_destruct;
- (id)_redeemCodeMetadataWithClientContext:(id)arg1;
- (id)_authenticationContext;
- (void)main;
@property(retain) SKUIRedeemConfiguration *redeemConfiguration;
@property(copy) CDUnknownBlockType outputBlock;
@property _Bool loadsRedeemCodeMetadata;
- (id)initWithClientContext:(id)arg1 redeemCode:(id)arg2 forcesAuthentication:(_Bool)arg3;
- (id)init;
- (id)_initSKUIRedeemPreflightOperation;

@end

