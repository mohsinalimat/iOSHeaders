//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaMiningKit/CLSRatingService.h>

@class NSArray;

@interface CLSRatingServicePerson : CLSRatingService
{
    float _contactsWeight;
    float _meWeight;
    float _othersWeight;
    float _relationshipsWeight;
    float _birthdayCountWeight;
    float _homeAddressCountWeight;
    float _workAddressCountWeight;
    float _facebookCountWeight;
    float _linkedInCountWeight;
    float _companyNameCountWeight;
    float _anniversaryCountWeight;
    float _fullNameWeight;
    float _firstNameWeight;
    float _lastNameWeight;
    float _middleNameWeight;
    float _nicknameWeight;
    float _birthdayWeight;
    float _anniversaryWeight;
    float _companyNameWeight;
    float _homeAddressesWeight;
    float _workAddressesWeight;
    float _emailAddressesWeight;
    float _relationshipWeight;
    float _genderWeight;
    float _socialProfilesWeight;
    float _facebookWeight;
    float _linkedInWeight;
    float _familyWeight;
    float _coworkerWeight;
    float _contactsLimit;
    float _relationshipsLimit;
    float _emailAddressesLimit;
    float _familyLimit;
    float _coworkerLimit;
    NSArray *_mePersons;
    NSArray *_allPersons;
}

- (void).cxx_destruct;
- (id)_socialService;
- (id)_allPersons;
- (id)_mePersons;
- (id)_countingRatesForPersons:(id)arg1 withProperties:(id)arg2 andLimit:(float)arg3;
- (id)_countingRelationshipsRatesForPersons:(id)arg1 withProperties:(id)arg2 andLimit:(float)arg3;
- (id)_rateForPerson:(id)arg1 forProperties:(id)arg2 withWeight:(float)arg3;
- (id)_missingPropertiesForPerson:(id)arg1;
- (id)absoluteRateWithWeight:(float)arg1 andOperation:(id)arg2;
- (id)rateForProperties:(id)arg1 withWeight:(float)arg2 andOperation:(id)arg3;
- (void)setWeightsAndLimits:(id)arg1;
- (void)_setThresholdsWithPlistDictionary:(id)arg1;
- (void)_setWeightsAndLimitsWithPlistDictionary:(id)arg1;
- (id)initWithPlist:(id)arg1;
- (id)init;

@end
