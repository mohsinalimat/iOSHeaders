//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface VKTransitLineMarker : NSObject
{
    unsigned long long _featureID;
    NSString *_shieldText;
    NSString *_shieldLocale;
    long long _shieldType;
    CDStruct_87ab733e _shieldColor;
    NSString *_labelText;
    NSString *_labelLocale;
    void *_transitLinkID;
}

+ (id)markerWithFeature:(CDStruct_5be08681 *)arg1 transitLink:(const CDStruct_cb3d236a *)arg2;
@property(readonly, nonatomic) void *transitLinkID; // @synthesize transitLinkID=_transitLinkID;
@property(readonly, nonatomic) NSString *labelLocale; // @synthesize labelLocale=_labelLocale;
@property(readonly, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
@property(readonly, nonatomic) CDStruct_87ab733e shieldColor; // @synthesize shieldColor=_shieldColor;
@property(readonly, nonatomic) long long shieldType; // @synthesize shieldType=_shieldType;
@property(readonly, nonatomic) NSString *shieldLocale; // @synthesize shieldLocale=_shieldLocale;
@property(readonly, nonatomic) NSString *shieldText; // @synthesize shieldText=_shieldText;
@property(readonly, nonatomic) unsigned long long featureID; // @synthesize featureID=_featureID;
- (id).cxx_construct;
- (id)description;
- (void)dealloc;
- (id)initWithFeatureID:(unsigned long long)arg1;
- (id)initWithFeature:(CDStruct_5be08681 *)arg1 transitLink:(const CDStruct_cb3d236a *)arg2;

@end

