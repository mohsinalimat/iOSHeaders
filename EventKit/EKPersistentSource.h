//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

@class CDBSourceConstraints, NSNumber, NSString;

@interface EKPersistentSource : EKPersistentObject
{
    CDBSourceConstraints *_constraints;
}

+ (long long)_calEventPrivacyLevelToEKPrivacyLevel:(int)arg1;
+ (int)_ekPrivacyLevelToCalEventPrivacyLevel:(long long)arg1;
+ (id)relations;
+ (id)defaultPropertiesToLoad;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDBSourceConstraints *constraints; // @synthesize constraints=_constraints;
- (void)reset;
- (_Bool)refresh;
- (id)description;
@property(nonatomic) _Bool onlyCreatorCanModify;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(copy, nonatomic) NSString *externalModificationTag;
@property(copy, nonatomic) NSString *externalID;
@property(retain, nonatomic) NSString *UUID;
@property(copy, nonatomic) NSNumber *defaultAlarmOffset;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) long long strictestEventPrivateValue;
@property(nonatomic) long long preferredEventPrivateValue;
@property(nonatomic) long long sourceType;
- (int)entityType;
- (id)init;

@end
