//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICStoreRequestContext, NSString;

@interface ICMusicSubscriptionAccountlessPlaybackRequest : NSObject
{
    NSString *_assetSourceStorefrontID;
    NSString *_householdID;
    ICStoreRequestContext *_requestContext;
    long long _qualityOfService;
    long long _storeSubscriptionAdamID;
}

@property(readonly, nonatomic) long long storeSubscriptionAdamID; // @synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(copy, nonatomic) NSString *householdID; // @synthesize householdID=_householdID;
@property(copy, nonatomic) NSString *assetSourceStorefrontID; // @synthesize assetSourceStorefrontID=_assetSourceStorefrontID;
- (void).cxx_destruct;
- (id)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequestContext:(id)arg1 storeSubscriptionAdamID:(long long)arg2;

@end

