//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDAssetTokenRequest, NSDictionary, NSMapTable;

__attribute__((visibility("hidden")))
@interface CKDGetContentAuthTokensForPutURLRequest : CKDURLRequest
{
    _Bool _useEncryption;
    CKDAssetTokenRequest *_assetTokenRequest;
    NSMapTable *_transactionStateByRequestIDs;
    NSDictionary *_headers;
}

@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) NSMapTable *transactionStateByRequestIDs; // @synthesize transactionStateByRequestIDs=_transactionStateByRequestIDs;
@property(retain, nonatomic) CKDAssetTokenRequest *assetTokenRequest; // @synthesize assetTokenRequest=_assetTokenRequest;
@property(nonatomic) _Bool useEncryption; // @synthesize useEncryption=_useEncryption;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithAssetTokenRequest:(id)arg1 headers:(id)arg2;

@end

