//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SAGKLinkedAnswerGroup : AceObject <SAAceSerializable>
{
}

+ (id)linkedAnswerGroupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)linkedAnswerGroup;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSNumber *numberOfResults;
@property(copy, nonatomic) NSArray *linkedAnswers;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

