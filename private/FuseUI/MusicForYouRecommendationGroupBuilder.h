//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMutableSectionedCollection, MPPropertySet, MusicForYouRecommendationItemBuilder, NSDateFormatter, NSDictionary;

@interface MusicForYouRecommendationGroupBuilder : NSObject
{
    struct {
        unsigned int initialized:1;
        unsigned int groupType:1;
        unsigned int lastUpdatedDate:1;
        unsigned int title:1;
        unsigned int subgroups:1;
        unsigned int loadAdditionalContentURL:1;
        unsigned int refreshURL:1;
    } _requestedGroupProperties;
    MusicForYouRecommendationItemBuilder *_itemBuilder;
    NSDateFormatter *_lastUpdatedDateFormatter;
    MPPropertySet *_requestedGroupPropertySet;
    MPPropertySet *_requestedItemPropertySet;
    NSDictionary *_storeItemMetadataResults;
    MPMutableSectionedCollection *_flatSectionedItems;
}

+ (id)allSupportedItemProperties;
+ (id)allSupportedGroupProperties;
@property(readonly, nonatomic) MPMutableSectionedCollection *flatSectionedItems; // @synthesize flatSectionedItems=_flatSectionedItems;
@property(readonly, nonatomic) NSDictionary *storeItemMetadataResults; // @synthesize storeItemMetadataResults=_storeItemMetadataResults;
@property(readonly, nonatomic) MPPropertySet *requestedItemPropertySet; // @synthesize requestedItemPropertySet=_requestedItemPropertySet;
@property(readonly, nonatomic) MPPropertySet *requestedGroupPropertySet; // @synthesize requestedGroupPropertySet=_requestedGroupPropertySet;
- (void).cxx_destruct;
- (id)modelObjectForRecommendationDictionary:(id)arg1;
- (id)initWithRequestedGroupPropertySet:(id)arg1 requestedItemPropertySet:(id)arg2 storeItemMetadataResults:(id)arg3 flatSectionedItems:(id)arg4;

@end

