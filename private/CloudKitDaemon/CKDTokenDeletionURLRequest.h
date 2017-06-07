//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDTokenDeletionURLRequest : CKDURLRequest
{
    NSData *_token;
    NSString *_bundleID;
}

@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (_Bool)requiresTokenRegistration;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithToken:(id)arg1 bundleID:(id)arg2;

@end

