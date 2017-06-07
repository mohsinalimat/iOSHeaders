//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSSecureCoding-Protocol.h>

@class NSString, NSUUID, UIImage, UISUIActivityImageConfiguration;

__attribute__((visibility("hidden")))
@interface UISUIActivityConfiguration : NSObject <NSSecureCoding>
{
    _Bool _activitySupportsPromiseURLs;
    NSUUID *_activityUUID;
    long long _activityCategory;
    NSString *_activityType;
    long long _defaultSortGroup;
    unsigned long long _indexInApplicationDefinedActivities;
    NSString *_overrideTitle;
    NSString *_defaultActivityTitle;
    NSString *_positionBeforeActivityType;
    NSString *_activityClassName;
    long long _encodingType;
    UISUIActivityImageConfiguration *_activityImageConfiguration;
    UISUIActivityImageConfiguration *_activitySettingsImageConfiguration;
    struct CGSize _preferredThumbnailSize;
}

+ (_Bool)supportsSecureCoding;
+ (id)configurationForActivity:(id)arg1;
@property(retain, nonatomic) UISUIActivityImageConfiguration *activitySettingsImageConfiguration; // @synthesize activitySettingsImageConfiguration=_activitySettingsImageConfiguration;
@property(retain, nonatomic) UISUIActivityImageConfiguration *activityImageConfiguration; // @synthesize activityImageConfiguration=_activityImageConfiguration;
@property(nonatomic) long long encodingType; // @synthesize encodingType=_encodingType;
@property(retain, nonatomic) NSString *activityClassName; // @synthesize activityClassName=_activityClassName;
@property(readonly, nonatomic) NSString *positionBeforeActivityType; // @synthesize positionBeforeActivityType=_positionBeforeActivityType;
@property(readonly, nonatomic) NSString *defaultActivityTitle; // @synthesize defaultActivityTitle=_defaultActivityTitle;
@property(retain, nonatomic) NSString *overrideTitle; // @synthesize overrideTitle=_overrideTitle;
@property(readonly, nonatomic) unsigned long long indexInApplicationDefinedActivities; // @synthesize indexInApplicationDefinedActivities=_indexInApplicationDefinedActivities;
@property(readonly, nonatomic) long long defaultSortGroup; // @synthesize defaultSortGroup=_defaultSortGroup;
@property(readonly, nonatomic) _Bool activitySupportsPromiseURLs; // @synthesize activitySupportsPromiseURLs=_activitySupportsPromiseURLs;
@property(readonly, nonatomic) struct CGSize preferredThumbnailSize; // @synthesize preferredThumbnailSize=_preferredThumbnailSize;
@property(readonly, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(readonly, nonatomic) long long activityCategory; // @synthesize activityCategory=_activityCategory;
@property(readonly, nonatomic) NSUUID *activityUUID; // @synthesize activityUUID=_activityUUID;
- (void).cxx_destruct;
- (void)_validateProperties;
@property(readonly, nonatomic) UIImage *activityImage; // @dynamic activityImage;
@property(readonly, nonatomic) UIImage *settingsImage;
- (void)_collectPropertiesFromAttributesOfUnderlyingActivity:(id)arg1;
- (void)_encodeByPropertiesWithCoder:(id)arg1;
- (void)_initByLoadingPropertiesWithCoder:(id)arg1;
- (void)_encodeByClassNameWithCoder:(id)arg1;
- (void)_initByLoadingClassNameWithCoder:(id)arg1;
- (void)_encodeOverridePropertiesWithCoder:(id)arg1;
- (void)_initByLoadingOverridePropertiesWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *activityTitle; // @dynamic activityTitle;
- (void)updateConfigurationWithOverrideTitle:(id)arg1;
- (id)initWithActivity:(id)arg1 encodingType:(long long)arg2;
- (id)_init;

@end
