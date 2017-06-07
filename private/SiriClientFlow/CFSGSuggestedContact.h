//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SiriClientFlow/SAAceSerializable-Protocol.h>

@class NSDate, NSNumber, NSString, SAPerson;

@interface CFSGSuggestedContact : AceObject <SAAceSerializable>
{
}

+ (id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)suggestedContactWithDictionary:(id)arg1 context:(id)arg2;
+ (id)suggestedContact;
@property(copy, nonatomic) NSString *suggestedOriginType;
@property(copy, nonatomic) NSDate *originDate;
@property(copy, nonatomic) NSNumber *isSignificant;
@property(copy, nonatomic) NSString *bundleId;
@property(retain, nonatomic) SAPerson *acePerson;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

