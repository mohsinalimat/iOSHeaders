//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL, PKCurrencyAmount;

@interface PKPeerPaymentAccount : NSObject <NSSecureCoding>
{
    _Bool _identityVerificationRequired;
    _Bool _termsAcceptanceRequired;
    unsigned long long _state;
    unsigned long long _stage;
    NSString *_countryCode;
    PKCurrencyAmount *_currentBalance;
    NSString *_termsIdentifier;
    NSURL *_termsURL;
    NSURL *_associatedPassURL;
    NSArray *_supportedFeatureDescriptors;
    NSString *_associatedPassSerialNumber;
    NSString *_associatedPassTypeIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *associatedPassTypeIdentifier; // @synthesize associatedPassTypeIdentifier=_associatedPassTypeIdentifier;
@property(copy, nonatomic) NSString *associatedPassSerialNumber; // @synthesize associatedPassSerialNumber=_associatedPassSerialNumber;
@property(nonatomic) _Bool termsAcceptanceRequired; // @synthesize termsAcceptanceRequired=_termsAcceptanceRequired;
@property(nonatomic) _Bool identityVerificationRequired; // @synthesize identityVerificationRequired=_identityVerificationRequired;
@property(copy, nonatomic) NSArray *supportedFeatureDescriptors; // @synthesize supportedFeatureDescriptors=_supportedFeatureDescriptors;
@property(copy, nonatomic) NSURL *associatedPassURL; // @synthesize associatedPassURL=_associatedPassURL;
@property(copy, nonatomic) NSURL *termsURL; // @synthesize termsURL=_termsURL;
@property(copy, nonatomic) NSString *termsIdentifier; // @synthesize termsIdentifier=_termsIdentifier;
@property(copy, nonatomic) PKCurrencyAmount *currentBalance; // @synthesize currentBalance=_currentBalance;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) unsigned long long stage; // @synthesize stage=_stage;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)associatedPassUniqueID;
@property(readonly, copy, nonatomic) NSArray *defaultSuggestions;
- (id)initWithDictionary:(id)arg1;
- (id)_featureWithIdentifier:(id)arg1;
- (id)requestFromUserFeatureDescriptor;
- (_Bool)supportsRequestFromUser;
- (id)sendToUserFeatureDescriptor;
- (_Bool)supportsSendToUser;
- (id)transferToBankFeatureDescriptor;
- (_Bool)supportsTransferToBank;
- (id)loadFromCardFeatureDescriptor;
- (_Bool)supportsLoadFromCard;
@property(readonly, nonatomic) NSDictionary *maximumTransferAmounts;
@property(readonly, nonatomic) NSDictionary *minimumTransferAmounts;

@end

