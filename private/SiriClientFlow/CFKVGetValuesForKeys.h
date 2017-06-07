//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

#import <SiriClientFlow/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface CFKVGetValuesForKeys : SADomainCommand <SAAceSerializable>
{
}

+ (id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getValuesForKeysWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getValuesForKeys;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *storeType;
@property(copy, nonatomic) NSArray *keys;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

