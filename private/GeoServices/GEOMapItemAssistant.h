//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOBaseMapItem.h>

@class GEOAddressObject, GEOLocation, GEOPlace, NSDictionary, NSString, NSURL;

@interface GEOMapItemAssistant : GEOBaseMapItem
{
    GEOLocation *_location;
    NSDictionary *_addressDictionary;
    NSString *_name;
    NSURL *_businessURL;
    NSString *_phoneNumber;
    unsigned long long _muid;
    NSString *_attributionID;
    unsigned int _sampleSizeForUserRatingScore;
    float _normalizedUserRatingScore;
    GEOPlace *_place;
    GEOAddressObject *_addressObject;
}

- (void).cxx_destruct;
- (id)weatherDisplayName;
- (id)addressObject;
- (float)_normalizedUserRatingScore;
- (unsigned int)_sampleSizeForUserRatingScore;
- (_Bool)_hasUserRatingScore;
- (id)_businessURL;
- (unsigned long long)_muid;
- (_Bool)_hasMUID;
- (id)geoAddress;
- (id)_place;
- (_Bool)_responseStatusIsIncomplete;
- (_Bool)_hasResolvablePartialInformation;
- (id)addressDictionary;
- (CDStruct_c3b9c2ee)coordinate;
- (id)name;
- (_Bool)isValid;
- (id)description;
- (id)initWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned int)arg9 normalizedUserRatingScore:(float)arg10;

@end

