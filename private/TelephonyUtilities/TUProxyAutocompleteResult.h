//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/TUSearchResult-Protocol.h>

@class CNAutocompleteResult, CNContact, NSArray, NSString;

@interface TUProxyAutocompleteResult : NSObject <TUSearchResult>
{
    CNAutocompleteResult *_autocompleteResult;
}

@property(retain, nonatomic) CNAutocompleteResult *autocompleteResult; // @synthesize autocompleteResult=_autocompleteResult;
- (void).cxx_destruct;
@property(readonly) NSArray *idsCanonicalDestinations;
@property(readonly) NSString *idsCanonicalDestination;
@property(readonly) NSString *idsUniqueId;
@property(readonly) _Bool mostRecentCallWasMissed;
@property(readonly) long long mostRecentCallType;
@property(readonly) NSArray *handles;
@property(readonly) NSString *isoCountryCode;
@property(readonly) NSString *destinationId;
@property(readonly) NSString *backingContactId;
@property(readonly) CNContact *backingContact;
@property(readonly) NSString *callerId;
@property(readonly) NSString *displayName;
- (id)init;
- (id)initWithAutocompleteResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

