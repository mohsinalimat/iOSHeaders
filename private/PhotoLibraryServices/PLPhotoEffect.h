//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PLPhotoEffect : NSObject
{
    NSString *_filterIdentifier;
    NSString *_displayName;
    NSString *_CIFilterName;
}

+ (id)effectWithCIFilterName:(id)arg1;
+ (id)effectWithIdentifier:(id)arg1;
+ (unsigned long long)indexOfEffectWithIdentifier:(id)arg1;
+ (_Bool)isEffectWithIdentifier:(id)arg1 equalToEffectWithIdentifier:(id)arg2;
+ (_Bool)isEffectNoneForIdentifier:(id)arg1;
+ (id)allEffects;
+ (id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3;
@property(readonly, copy, nonatomic) NSString *CIFilterName; // @synthesize CIFilterName=_CIFilterName;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *filterIdentifier; // @synthesize filterIdentifier=_filterIdentifier;
- (id)newEffectFilter;
@property(readonly, nonatomic) long long latestVersion;
- (id)description;

@end

