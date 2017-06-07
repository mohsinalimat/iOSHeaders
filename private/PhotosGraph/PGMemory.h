//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/NSCoding-Protocol.h>

@class CLLocation, NSDate, NSDictionary, NSSet, NSString, PGManager, PGMemoryDebug, PHAsset, PHAssetCollection;

@interface PGMemory : NSObject <NSCoding>
{
    PGManager *_manager;
    NSDate *_creationDate;
    PHAssetCollection *_assetCollection;
    PHAssetCollection *_curatedAssetCollection;
    PHAsset *_curatedKeyAsset;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    NSDate *_universalStartDate;
    NSDate *_universalEndDate;
    NSString *_title;
    NSString *_subtitle;
    long long _titleCategory;
    double _score;
    long long _sourceType;
    unsigned long long _duration;
    unsigned long long _category;
    long long _subcategory;
    unsigned long long _matchedTypes;
    NSDate *_matchedLocalDate;
    CLLocation *_matchedLocation;
    NSSet *_matchedPeople;
    NSString *_matchedEventName;
    unsigned long long _aggregatedVersions;
    NSString *_meUUID;
    PGMemoryDebug *_debug;
    NSSet *_momentIDs;
    NSDictionary *_numberOfAssetsByMomentIDs;
}

+ (long long)pgSubcategoryFromPHSubcategory:(long long)arg1;
+ (unsigned long long)pgCategoryFromPHCategory:(long long)arg1;
+ (long long)phCategoryFromPGCategory:(unsigned long long)arg1;
+ (id)stringForSubcategory:(long long)arg1;
+ (id)stringForCategory:(unsigned long long)arg1;
+ (id)stringForSourceType:(long long)arg1;
@property(retain, nonatomic) NSDictionary *numberOfAssetsByMomentIDs; // @synthesize numberOfAssetsByMomentIDs=_numberOfAssetsByMomentIDs;
@property(retain, nonatomic) NSSet *momentIDs; // @synthesize momentIDs=_momentIDs;
@property(retain, nonatomic) PGMemoryDebug *debug; // @synthesize debug=_debug;
@property(retain, nonatomic) NSString *meUUID; // @synthesize meUUID=_meUUID;
@property(readonly, nonatomic) unsigned long long aggregatedVersions; // @synthesize aggregatedVersions=_aggregatedVersions;
@property(retain, nonatomic) NSString *matchedEventName; // @synthesize matchedEventName=_matchedEventName;
@property(retain, nonatomic) NSSet *matchedPeople; // @synthesize matchedPeople=_matchedPeople;
@property(retain, nonatomic) CLLocation *matchedLocation; // @synthesize matchedLocation=_matchedLocation;
@property(retain, nonatomic) NSDate *matchedLocalDate; // @synthesize matchedLocalDate=_matchedLocalDate;
@property(nonatomic) unsigned long long matchedTypes; // @synthesize matchedTypes=_matchedTypes;
@property(nonatomic) long long subcategory; // @synthesize subcategory=_subcategory;
@property(nonatomic) unsigned long long category; // @synthesize category=_category;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) long long titleCategory; // @synthesize titleCategory=_titleCategory;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSDate *universalEndDate; // @synthesize universalEndDate=_universalEndDate;
@property(retain, nonatomic) NSDate *universalStartDate; // @synthesize universalStartDate=_universalStartDate;
@property(retain, nonatomic) NSDate *localEndDate; // @synthesize localEndDate=_localEndDate;
@property(retain, nonatomic) NSDate *localStartDate; // @synthesize localStartDate=_localStartDate;
@property(retain, nonatomic) PHAsset *curatedKeyAsset; // @synthesize curatedKeyAsset=_curatedKeyAsset;
@property(retain, nonatomic) PHAssetCollection *curatedAssetCollection; // @synthesize curatedAssetCollection=_curatedAssetCollection;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) __weak PGManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
@property(nonatomic) unsigned short memoriesAlgorithmsVersion;
@property(nonatomic) unsigned short relatedAlgorithmsVersion;
@property(nonatomic) unsigned short curationAlgorithmsVersion;
@property(nonatomic) unsigned short graphSchemaVersion;
- (id)_localIdentifiersInAssetCollection:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAssetCollection:(id)arg1;

@end

