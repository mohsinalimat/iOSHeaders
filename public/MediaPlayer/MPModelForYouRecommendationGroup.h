//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPSectionedCollection, NSArray, NSDate, NSString, NSURL;

@interface MPModelForYouRecommendationGroup : MPModelObject
{
    NSURL *_refreshURL;
    unsigned long long _groupType;
    NSDate *_lastUpdatedDate;
    NSString *_title;
    NSURL *_loadAdditionalContentURL;
    MPSectionedCollection *_sectionedItems;
    long long _sectionIndex;
    NSArray *_subgroups;
}

+ (id)__MPModelForYouRecommendationGroupPropertyRefreshURL__PROPERTY;
+ (id)__refreshURL__KEY;
+ (id)__MPModelForYouRecommendationGroupPropertyLoadAdditionalContentURL__PROPERTY;
+ (id)__loadAdditionalContentURL__KEY;
+ (id)__MPModelForYouRecommendationGroupPropertyTitle__PROPERTY;
+ (id)__title__KEY;
+ (id)__MPModelForYouRecommendationGroupPropertySubgroups__PROPERTY;
+ (id)__subgroups__KEY;
+ (id)__MPModelForYouRecommendationGroupPropertySectionIndex__PROPERTY;
+ (id)__sectionIndex__KEY;
+ (id)__MPModelForYouRecommendationGroupPropertySectionedItems__PROPERTY;
+ (id)__sectionedItems__KEY;
+ (id)__MPModelForYouRecommendationGroupPropertyLastUpdatedDate__PROPERTY;
+ (id)__lastUpdatedDate__KEY;
+ (id)__MPModelForYouRecommendationGroupPropertyGroupType__PROPERTY;
+ (id)__groupType__KEY;
@property(copy, nonatomic) NSArray *subgroups; // @synthesize subgroups=_subgroups;
@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(retain, nonatomic) MPSectionedCollection *sectionedItems; // @synthesize sectionedItems=_sectionedItems;
@property(copy, nonatomic) NSURL *loadAdditionalContentURL; // @synthesize loadAdditionalContentURL=_loadAdditionalContentURL;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property(nonatomic) unsigned long long groupType; // @synthesize groupType=_groupType;
- (void).cxx_destruct;
- (id)itemAtIndex:(long long)arg1;
- (long long)numberOfItems;
@property(copy, nonatomic) NSURL *refreshURL;
- (id)descriptionWithType:(long long)arg1;

@end

