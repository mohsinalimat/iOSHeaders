//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString, SAUIAppPunchOut, SAUIDecoratedText;
@protocol SAClientBoundCommand;

@interface SAGKAnswerProperty : AceObject <SAAceSerializable>
{
}

+ (id)answerPropertyWithDictionary:(id)arg1 context:(id)arg2;
+ (id)answerProperty;
@property(copy, nonatomic) NSString *valueAnnotation;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSNumber *selected;
@property(retain, nonatomic) SAUIAppPunchOut *punchOut;
@property(copy, nonatomic) NSString *name;
@property(retain, nonatomic) SAUIDecoratedText *decoratedValueAnnotation;
@property(retain, nonatomic) SAUIDecoratedText *decoratedValue;
@property(retain, nonatomic) id <SAClientBoundCommand> command;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

