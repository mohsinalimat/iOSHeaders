//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, SKXPCConnection;

@interface SKPurchaseIntent : NSObject
{
    NSString *_bundleId;
    NSString *_productIdentifer;
    SKXPCConnection *_connection;
    CDUnknownBlockType __completion;
}

@property(copy, nonatomic) CDUnknownBlockType _completion; // @synthesize _completion=__completion;
- (void).cxx_destruct;
- (void)_send;
- (void)send:(CDUnknownBlockType)arg1;
- (id)initWithBundleId:(id)arg1 productIdentifier:(id)arg2;

@end

