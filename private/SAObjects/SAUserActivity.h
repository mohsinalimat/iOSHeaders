//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString;

@interface SAUserActivity : SADomainObject
{
}

+ (id)userActivityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)userActivity;
@property(nonatomic) _Bool isEligibleForSearch;
@property(nonatomic) _Bool isEligibleForReminders;
@property(nonatomic) _Bool isEligibleForPublicIndexing;
@property(nonatomic) _Bool isEligibleForHandoff;
@property(nonatomic) _Bool isEligibleForDirections;
@property(nonatomic) _Bool isEligibleForAppPunchout;
@property(copy, nonatomic) NSString *internalGUID;
@property(copy, nonatomic) NSArray *eligibileFunctions;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

