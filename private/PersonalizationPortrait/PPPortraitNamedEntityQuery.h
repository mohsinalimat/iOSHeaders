//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>

@class NSDate, NSSet, NSString;

@interface PPPortraitNamedEntityQuery : NSObject <NSCopying>
{
    _Bool _overrideDecayRate;
    _Bool _matchCategory;
    unsigned long long _limit;
    NSDate *_fromDate;
    NSDate *_toDate;
    NSDate *_scoringDate;
    NSSet *_matchingSourceBundleIds;
    NSSet *_excludingSourceBundleIds;
    unsigned long long _deviceFilter;
    double _decayRate;
    NSString *_matchingName;
    unsigned long long _matchingCategory;
}

@property(nonatomic) unsigned long long matchingCategory; // @synthesize matchingCategory=_matchingCategory;
@property(nonatomic) _Bool matchCategory; // @synthesize matchCategory=_matchCategory;
@property(copy, nonatomic) NSString *matchingName; // @synthesize matchingName=_matchingName;
@property(nonatomic) double decayRate; // @synthesize decayRate=_decayRate;
@property(nonatomic) _Bool overrideDecayRate; // @synthesize overrideDecayRate=_overrideDecayRate;
@property(nonatomic) unsigned long long deviceFilter; // @synthesize deviceFilter=_deviceFilter;
@property(retain, nonatomic) NSSet *excludingSourceBundleIds; // @synthesize excludingSourceBundleIds=_excludingSourceBundleIds;
@property(retain, nonatomic) NSSet *matchingSourceBundleIds; // @synthesize matchingSourceBundleIds=_matchingSourceBundleIds;
@property(retain, nonatomic) NSDate *scoringDate; // @synthesize scoringDate=_scoringDate;
@property(retain, nonatomic) NSDate *toDate; // @synthesize toDate=_toDate;
@property(retain, nonatomic) NSDate *fromDate; // @synthesize fromDate=_fromDate;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToNamedEntityQuery:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

