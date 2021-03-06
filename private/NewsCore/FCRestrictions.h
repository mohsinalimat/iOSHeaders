//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCRestrictions : NSObject
{
    _Bool _testing;
    long long _buildVersionNumber;
    long long _isExplicitContentAllowedOverride;
}

+ (long long)integerRepresentationOfShortVersionString:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) long long isExplicitContentAllowedOverride; // @synthesize isExplicitContentAllowedOverride=_isExplicitContentAllowedOverride;
@property(nonatomic) _Bool testing; // @synthesize testing=_testing;
@property(nonatomic) long long buildVersionNumber; // @synthesize buildVersionNumber=_buildVersionNumber;
- (_Bool)isContentBlockedInStorefrontID:(id)arg1 withAllowedStorefrontIDs:(id)arg2 blockedStorefrontIDs:(id)arg3;
- (_Bool)isNewsVersionAllowed:(long long)arg1;
- (void)t_stopForcingExplicitContentDisallowed;
- (void)t_startForcingExplicitContentDisallowed;
@property(readonly, nonatomic) _Bool isExplicitContentAllowed;
- (id)init;

@end

