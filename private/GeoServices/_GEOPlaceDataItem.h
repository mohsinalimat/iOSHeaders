//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMapItem-Protocol.h>

@class GEOAddress, GEOAddressObject, GEOAssociatedApp, GEOFeatureStyleAttributes, GEOMapItemClientAttributes, GEOMapItemContainedPlace, GEOMapItemDetourInfo, GEOMapItemIdentifier, GEOMapItemPhotosAttribution, GEOMapItemPlaceAttribution, GEOMapItemReviewsAttribution, GEOMapRegion, GEOMessageLink, GEOPDBusinessClaim, GEOPDFlyover, GEOPDMultiLocalizedString, GEOPDPlace, GEOPlace, GEOPriceDescription, GEORestaurantFeaturesLink, NSArray, NSData, NSDate, NSDictionary, NSMapTable, NSString, NSTimeZone, NSURL, _GEOEncyclopedicInfo;
@protocol GEOEncyclopedicInfo, GEOMapItemTransitInfo, GEOMapItemVenueInfo, GEOTransitAttribution;

__attribute__((visibility("hidden")))
@interface _GEOPlaceDataItem : NSObject <GEOMapItem>
{
    GEOMapItemIdentifier *_identifier;
    GEOPDPlace *_placeData;
    GEOPlace *_place;
    NSMapTable *_attributionMap;
    GEOPDMultiLocalizedString *_disambiguationLabel;
    GEOMapItemDetourInfo *_detourInfo;
    _GEOEncyclopedicInfo *_encyclopedicInfo;
    id <GEOMapItemVenueInfo> _venueInfo;
    GEOAddressObject *_addressObject;
    NSString *_name;
    NSData *_externalTransitStationCode;
    NSArray *_currentOperatingHours;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_isInLinkedPlaceRelationship) _Bool inLinkedPlaceRelationship;
@property(readonly, nonatomic, getter=_containedPlace) GEOMapItemContainedPlace *containedPlace;
- (id)_bestBrandIconURLForSize:(struct CGSize)arg1 allowSmaller:(_Bool)arg2;
@property(readonly, nonatomic, getter=_wifiFingerprintLabelStatusCode) int wifiFingerprintLabelStatusCode;
@property(readonly, nonatomic, getter=_hasWifiFingerprintLabelStatusCode) _Bool hasWifiFingerprintLabelStatusCode;
@property(readonly, nonatomic, getter=_wifiFingerprintLabelType) int wifiFingerprintLabelType;
@property(readonly, nonatomic, getter=_hasWifiFingerprintLabelType) _Bool hasWifiFingerprintLabelType;
@property(readonly, nonatomic, getter=_wifiFingerprintConfidence) unsigned int wifiFingerprintConfidence;
@property(readonly, nonatomic, getter=_hasWifiFingerprintConfidence) _Bool hasWifiFingerprintConfidence;
- (id)_wifiFingerprintComponent;
@property(readonly, nonatomic, getter=_browseCategories) NSArray *browseCategories;
@property(readonly, nonatomic, getter=_venueInfo) id <GEOMapItemVenueInfo> venueInfo;
@property(readonly, nonatomic, getter=_venueCategoryBrowseType) int venueCategoryBrowseType;
@property(readonly, nonatomic, getter=_venueFeatureType) int venueFeatureType;
@property(readonly, nonatomic, getter=_hasVenueFeatureType) _Bool hasVenueFeatureType;
@property(readonly, nonatomic) NSData *externalTransitStationCode;
- (id)weatherDisplayName;
- (id)shortAddress;
- (id)addressObject;
@property(readonly, nonatomic) _Bool hasExpiredComponents;
@property(readonly, nonatomic) GEOMapItemDetourInfo *detourInfo;
@property(readonly, nonatomic, getter=_quickLinks) NSArray *quickLinks;
@property(readonly, nonatomic, getter=_messageLink) GEOMessageLink *messageLink;
@property(readonly, nonatomic, getter=_isStandaloneBrand) _Bool isStandAloneBrand;
@property(readonly, nonatomic, getter=_parsecSectionType) int parsecSectionType;
@property(readonly, nonatomic, getter=_featureLink) GEORestaurantFeaturesLink *featureLink;
@property(readonly, nonatomic, getter=_hasFeatureLink) _Bool hasFeatureLink;
@property(readonly, nonatomic, getter=_businessClaim) GEOPDBusinessClaim *businessClaim;
@property(readonly, nonatomic, getter=_hasBusinessClaim) _Bool hasBusinessClaim;
- (id)_mapItemByStrippingOptionalData;
@property(readonly, nonatomic, getter=_photos) NSArray *photos;
@property(readonly, nonatomic, getter=_tips) NSArray *tips;
@property(readonly, nonatomic, getter=_reviews) NSArray *reviews;
- (id)_asPlaceInfo;
@property(readonly, nonatomic, getter=_additionalPlaceInfos) NSArray *additionalPlaceInfos;
@property(readonly, nonatomic, getter=_customIconID) unsigned long long customIconID;
@property(readonly, nonatomic, getter=_styleAttributes) GEOFeatureStyleAttributes *styleAttributes;
- (id)_placeDataStyleAttributes;
@property(readonly, nonatomic, getter=_reviewsAttribution) GEOMapItemReviewsAttribution *reviewsAttribution;
@property(readonly, nonatomic, getter=_photosAttribution) GEOMapItemPhotosAttribution *photosAttribution;
@property(readonly, nonatomic, getter=_attribution) GEOMapItemPlaceAttribution *attribution;
@property(readonly, nonatomic, getter=_poiPinpointURLString) NSString *poiPinpointURLString;
@property(readonly, nonatomic, getter=_poiSurveyURLString) NSString *poiSurveyURLString;
@property(readonly, copy, nonatomic, getter=_vendorID) NSString *vendorID;
@property(readonly, copy, nonatomic, getter=_providerURL) NSURL *providerURL;
@property(readonly, copy, nonatomic, getter=_webURL) NSURL *webURL;
@property(readonly, nonatomic, getter=_needsAttribution) _Bool needsAttribution;
- (id)_logoPathForAttribution:(id)arg1 requirement:(int)arg2 scale:(double)arg3;
- (id)_displayNameForAttribution:(id)arg1 requirement:(int)arg2;
- (_Bool)_showAddForAttribution:(id)arg1 requirement:(int)arg2;
- (_Bool)_hasMoreForAttribution:(id)arg1 requirement:(int)arg2;
- (_Bool)_showAttributionForAttribution:(id)arg1 requirement:(int)arg2;
@property(readonly, nonatomic, getter=_disambiguationName) NSString *disambiguationName;
@property(readonly, nonatomic, getter=_optsOutOfTelephoneAds) _Bool optsOutOfTelephoneAds;
@property(readonly, nonatomic, getter=_telephone) NSString *telephone;
@property(readonly, nonatomic, getter=_hasTelephone) _Bool hasTelephone;
- (id)_attributionInfoForAttribution:(id)arg1 requirement:(int)arg2;
@property(readonly, nonatomic, getter=_encyclopedicInfo) id <GEOEncyclopedicInfo> encyclopedicInfo;
@property(readonly, nonatomic, getter=_hasEncyclopedicInfo) _Bool hasEncyclopedicInfo;
@property(readonly, nonatomic, getter=_openingHoursOptions) unsigned long long openingHoursOptions;
@property(readonly, nonatomic, getter=_completeOperatingHours) NSArray *completeOperatingHours;
@property(readonly, nonatomic, getter=_operatingHours) NSArray *operatingHours;
@property(readonly, nonatomic, getter=_hasCurrentOperatingHours) _Bool hasCurrentOperatingHours;
@property(readonly, nonatomic, getter=_hasOperatingHours) _Bool hasOperatingHours;
@property(readonly, nonatomic, getter=_acceptsApplePay) _Bool acceptsApplePay;
@property(readonly, nonatomic, getter=_hasAcceptsApplePayAmenity) _Bool hasAcceptsApplePayAmenity;
@property(readonly, nonatomic, getter=_takesReservations) _Bool takesReservations;
@property(readonly, nonatomic, getter=_hasTakesReservationsAmenity) _Bool hasTakesReservationsAmenity;
@property(readonly, nonatomic, getter=_goodForKids) _Bool goodForKids;
@property(readonly, nonatomic, getter=_hasGoodForKidsAmenity) _Bool hasGoodForKidsAmenity;
@property(readonly, nonatomic, getter=_hasDelivery) _Bool hasDelivery;
@property(readonly, nonatomic, getter=_hasDeliveryAmenity) _Bool hasDeliveryAmenity;
@property(readonly, nonatomic, getter=_hasAnyAmenities) _Bool hasAnyAmenities;
- (_Bool)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
@property(readonly, nonatomic, getter=_childPlaces) NSArray *childPlaces;
@property(readonly, nonatomic, getter=_resultSnippetDistanceDisplayThreshold) unsigned int resultSnippetDistanceDisplayThreshold;
@property(readonly, nonatomic, getter=_resultSnippetLocationString) NSString *resultSnippetLocationString;
@property(readonly, nonatomic, getter=_priceRange) unsigned int priceRange;
@property(readonly, nonatomic, getter=_hasPriceRange) _Bool hasPriceRange;
@property(readonly, nonatomic, getter=_normalizedUserRatingScore) float normalizedUserRatingScore;
@property(readonly, nonatomic, getter=_sampleSizeForUserRatingScore) unsigned int sampleSizeForUserRatingScore;
@property(readonly, nonatomic, getter=_hasUserRatingScore) _Bool hasUserRatingScore;
@property(readonly, nonatomic, getter=_businessURL) NSString *businessURL;
@property(readonly, nonatomic, getter=_areaInMeters) double areaInMeters;
@property(readonly, nonatomic, getter=_hasAreaInMeters) _Bool hasAreaInMeters;
@property(readonly, nonatomic, getter=_identifier) GEOMapItemIdentifier *identifier;
@property(readonly, nonatomic, getter=_muid) unsigned long long muid;
@property(readonly, nonatomic, getter=_hasMUID) _Bool hasMUID;
@property(readonly, nonatomic, getter=_flyoverAnnouncementMessage) NSString *flyoverAnnouncementMessage;
@property(readonly, nonatomic, getter=_flyover) GEOPDFlyover *flyover;
@property(readonly, nonatomic, getter=_hasFlyover) _Bool hasFlyover;
@property(readonly, nonatomic, getter=_transitAttribution) id <GEOTransitAttribution> transitAttribution;
@property(readonly, nonatomic, getter=_transitInfo) id <GEOMapItemTransitInfo> transitInfo;
@property(readonly, nonatomic, getter=_hasTransit) _Bool hasTransit;
@property(readonly, nonatomic, getter=_resultProviderID) int resultProviderID;
@property(readonly, nonatomic, getter=_hasResultProviderID) _Bool hasResultProviderID;
@property(readonly, nonatomic, getter=_roadAccessPoints) NSArray *roadAccessPoints;
- (id)_arrivalMapRegionForTransportType:(int)arg1;
- (id)_spokenAddressForLocale:(id)arg1;
@property(readonly, nonatomic, getter=_addressGeocodeAccuracy) int addressGeocodeAccuracy;
@property(readonly, nonatomic) GEOAddress *geoAddress;
@property(readonly, nonatomic, getter=_placeDataAsData) NSData *placeDataAsData;
@property(readonly, nonatomic, getter=_clientAttributes) GEOMapItemClientAttributes *clientAttributes;
@property(readonly, nonatomic, getter=_place) GEOPlace *place;
@property(readonly, nonatomic, getter=_placeType) int placeType;
@property(readonly, nonatomic, getter=_responseStatusIsIncomplete) _Bool responseStatusIncomplete;
@property(readonly, nonatomic, getter=_hasResolvablePartialInformation) _Bool hasResolvablePartialInformation;
@property(readonly, nonatomic, getter=_placeData) GEOPDPlace *placeData;
@property(readonly, nonatomic) _Bool isEventAllDay;
@property(readonly, nonatomic) NSDate *eventDate;
@property(readonly, nonatomic) NSString *eventName;
@property(readonly, nonatomic) _Bool contactIsMe;
@property(readonly, nonatomic) NSString *contactSpokenName;
@property(readonly, nonatomic) NSString *contactName;
@property(readonly, nonatomic) int contactAddressType;
@property(readonly, nonatomic) NSTimeZone *timezone;
@property(readonly, nonatomic) NSArray *areasOfInterest;
@property(readonly, nonatomic) NSDictionary *addressDictionary;
@property(readonly, nonatomic) GEOMapRegion *geoFenceMapRegion;
@property(readonly, nonatomic) float displayMaxZoom;
@property(readonly, nonatomic) _Bool hasDisplayMaxZoom;
@property(readonly, nonatomic) float displayMinZoom;
@property(readonly, nonatomic) _Bool hasDisplayMinZoom;
@property(readonly, nonatomic) GEOMapRegion *displayMapRegionOrNil;
@property(readonly, nonatomic) GEOMapRegion *displayMapRegion;
@property(readonly, nonatomic) CDStruct_c3b9c2ee centerCoordinate;
@property(readonly, nonatomic) NSArray *spatialMappedCategories;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic) int referenceFrame;
@property(readonly, nonatomic, getter=isDisputed) _Bool disputed;
@property(readonly, nonatomic) NSData *encodedData;
- (id)spokenNameForLocale:(id)arg1;
@property(readonly, nonatomic, getter=_priceDescription) GEOPriceDescription *priceDescription;
@property(readonly, nonatomic, getter=_associatedApp) GEOAssociatedApp *associatedApp;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (_Bool)isEqualToMapItem:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithPlaceData:(id)arg1 detourInfo:(id)arg2;
- (id)initWithPlaceData:(id)arg1;
- (id)initWithPlaceData:(id)arg1 attributionMap:(id)arg2 disambiguationLabel:(id)arg3 detourInfo:(id)arg4 externalTransitStationCode:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

