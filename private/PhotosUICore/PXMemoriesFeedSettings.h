//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXMemoriesFeedSettings : PXSettings
{
    _Bool _useSlowAnimations;
    _Bool _forceReloadAfterRefresh;
    _Bool _disableRoundedOverlays;
    _Bool _displayContentDuringGraphRebuild;
    _Bool _alwaysShowOnboarding;
    long long _dataSourceType;
    long long _memoryGroupingMethod;
    double _memoryGroupingInterval;
    double _additionalContentThreshold;
    unsigned long long _groupsPerBatch;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) unsigned long long groupsPerBatch; // @synthesize groupsPerBatch=_groupsPerBatch;
@property(nonatomic) double additionalContentThreshold; // @synthesize additionalContentThreshold=_additionalContentThreshold;
@property(nonatomic) double memoryGroupingInterval; // @synthesize memoryGroupingInterval=_memoryGroupingInterval;
@property(nonatomic) long long memoryGroupingMethod; // @synthesize memoryGroupingMethod=_memoryGroupingMethod;
@property(nonatomic) _Bool alwaysShowOnboarding; // @synthesize alwaysShowOnboarding=_alwaysShowOnboarding;
@property(nonatomic) _Bool displayContentDuringGraphRebuild; // @synthesize displayContentDuringGraphRebuild=_displayContentDuringGraphRebuild;
@property(nonatomic) _Bool disableRoundedOverlays; // @synthesize disableRoundedOverlays=_disableRoundedOverlays;
@property(nonatomic) _Bool forceReloadAfterRefresh; // @synthesize forceReloadAfterRefresh=_forceReloadAfterRefresh;
@property(nonatomic) _Bool useSlowAnimations; // @synthesize useSlowAnimations=_useSlowAnimations;
@property(nonatomic) long long dataSourceType; // @synthesize dataSourceType=_dataSourceType;
- (void)setDefaultValues;
- (long long)_defaultDataSourceType;

@end

