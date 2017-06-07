//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKSimpleDataEntryItemDelegate-Protocol.h>
#import <HealthUI/NSCopying-Protocol.h>
#import <HealthUI/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSNumber, NSString;
@protocol HKOrganDonationRegistrantDelegate;

@interface HKOrganDonationRegistrant : NSObject <HKSimpleDataEntryItemDelegate, NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_dataEntryItems;
    _Bool _hasEdits;
    id <HKOrganDonationRegistrantDelegate> _delegate;
    NSString *_email;
    NSString *_firstname;
    NSString *_middlename;
    NSString *_lastname;
    NSString *_address1;
    NSString *_address2;
    NSString *_zip;
    NSString *_city;
    NSString *_state;
    NSString *_last4SSN;
    NSString *_sex;
    NSString *_dob;
}

+ (void)_loadStateInformationIfNeeded;
+ (id)convertLocalizedNumericStringToLatin:(id)arg1 withNumberFormatter:(id)arg2;
+ (_Bool)_isNumericStringValid:(id)arg1 withLength:(long long)arg2;
+ (id)_importNumberFormatter;
+ (id)ssnNumberFormatter;
+ (id)zipcodeNumberFormatter;
+ (id)exportDateFormatter;
+ (_Bool)supportsSecureCoding;
+ (id)organDonationRegistrantWithDemographicsInformation:(id)arg1;
+ (id)organDonationRegistrantWithJSONDictionary:(id)arg1;
@property(readonly, nonatomic) _Bool hasEdits; // @synthesize hasEdits=_hasEdits;
@property(retain, nonatomic) NSString *dob; // @synthesize dob=_dob;
@property(retain, nonatomic) NSString *sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSString *last4SSN; // @synthesize last4SSN=_last4SSN;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *zip; // @synthesize zip=_zip;
@property(retain, nonatomic) NSString *address2; // @synthesize address2=_address2;
@property(retain, nonatomic) NSString *address1; // @synthesize address1=_address1;
@property(retain, nonatomic) NSString *lastname; // @synthesize lastname=_lastname;
@property(retain, nonatomic) NSString *middlename; // @synthesize middlename=_middlename;
@property(retain, nonatomic) NSString *firstname; // @synthesize firstname=_firstname;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) __weak id <HKOrganDonationRegistrantDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataEntryItemDidUpdateValue:(id)arg1;
- (id)_stateChoiceValues;
- (id)_stateChoiceDisplayNames;
- (id)_createDateOfBirthEntryItem;
- (id)_todayBirthdayDateComponents;
@property(readonly, nonatomic) NSNumber *age;
- (_Bool)isRegistrantValid;
- (_Bool)isFieldValid:(long long)arg1;
- (unsigned long long)_placeHolderTypeForField:(long long)arg1;
- (id)dataEntryItemForRegistrantField:(long long)arg1;
- (void)_addDataEntryItemIntoArray:(id)arg1 validOnly:(_Bool)arg2 forField:(long long)arg3;
- (id)dataEntryItemsValidOnly:(_Bool)arg1;
- (id)jsonDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

