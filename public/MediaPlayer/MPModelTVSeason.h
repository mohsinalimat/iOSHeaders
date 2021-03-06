//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPModelTVEpisode, MPModelTVShow, NSDate, NSString;

@interface MPModelTVSeason : MPModelObject
{
    _Bool _hasCleanContent;
    _Bool _hasExplicitContent;
    _Bool _libraryAdded;
    _Bool _libraryAddEligible;
    long long _number;
    NSString *_descriptionText;
    long long _year;
    long long _episodesCount;
    NSDate *_libraryAddedDate;
    long long _sortType;
    MPModelTVShow *_show;
    MPModelTVEpisode *_representativeEpisode;
    CDUnknownBlockType _artworkCatalogBlock;
}

+ (id)__MPModelPropertyTVSeasonArtwork__PROPERTY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__MPModelRelationshipTVSeasonRepresentativeEpisode__PROPERTY;
+ (id)__representativeEpisode__KEY;
+ (id)__MPModelRelationshipTVSeasonShow__PROPERTY;
+ (id)__show__KEY;
+ (id)__MPModelPropertyTVSeasonSortType__PROPERTY;
+ (id)__sortType__KEY;
+ (id)__MPModelPropertyTVSeasonLibraryAddEligible__PROPERTY;
+ (id)__libraryAddEligible__KEY;
+ (id)__MPModelPropertyTVSeasonLibraryAdded__PROPERTY;
+ (id)__libraryAdded__KEY;
+ (id)__MPModelPropertyTVSeasonLibraryAddedDate__PROPERTY;
+ (id)__libraryAddedDate__KEY;
+ (id)__MPModelPropertyTVSeasonHasExplicitContent__PROPERTY;
+ (id)__hasExplicitContent__KEY;
+ (id)__MPModelPropertyTVSeasonHasCleanContent__PROPERTY;
+ (id)__hasCleanContent__KEY;
+ (id)__MPModelPropertyTVSeasonEpisodesCount__PROPERTY;
+ (id)__episodesCount__KEY;
+ (id)__MPModelPropertyTVSeasonYear__PROPERTY;
+ (id)__year__KEY;
+ (id)__MPModelPropertyTVSeasonDescriptionText__PROPERTY;
+ (id)__descriptionText__KEY;
+ (id)__MPModelPropertyTVSeasonNumber__PROPERTY;
+ (id)__number__KEY;
+ (id)kindWithEpisodeKind:(id)arg1;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (_Bool)supportsLibraryAddStatusObservation;
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @synthesize artworkCatalogBlock=_artworkCatalogBlock;
@property(retain, nonatomic) MPModelTVEpisode *representativeEpisode; // @synthesize representativeEpisode=_representativeEpisode;
@property(retain, nonatomic) MPModelTVShow *show; // @synthesize show=_show;
@property(nonatomic) long long sortType; // @synthesize sortType=_sortType;
@property(nonatomic, getter=isLibraryAddEligible) _Bool libraryAddEligible; // @synthesize libraryAddEligible=_libraryAddEligible;
@property(nonatomic, getter=isLibraryAdded) _Bool libraryAdded; // @synthesize libraryAdded=_libraryAdded;
@property(copy, nonatomic) NSDate *libraryAddedDate; // @synthesize libraryAddedDate=_libraryAddedDate;
@property(nonatomic) _Bool hasExplicitContent; // @synthesize hasExplicitContent=_hasExplicitContent;
@property(nonatomic) _Bool hasCleanContent; // @synthesize hasCleanContent=_hasCleanContent;
@property(nonatomic) long long episodesCount; // @synthesize episodesCount=_episodesCount;
@property(nonatomic) long long year; // @synthesize year=_year;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(nonatomic) long long number; // @synthesize number=_number;
- (void).cxx_destruct;
- (id)artworkCatalog;
- (struct MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;

@end

