//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

#import <SiriClientFlow/CFLocalAceHandling-Protocol.h>
#import <SiriClientFlow/SAAceSerializable-Protocol.h>

@class CFCBNightShiftSchedule, NSNumber, NSString;

@interface CFCBSetNightShiftMode : SADomainCommand <CFLocalAceHandling, SAAceSerializable>
{
}

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setNightShiftModeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setNightShiftMode;
- (_Bool)requiresResponse;
@property(retain, nonatomic) CFCBNightShiftSchedule *schedule;
@property(copy, nonatomic) NSString *option;
@property(copy, nonatomic) NSString *mode;
@property(copy, nonatomic) NSNumber *enable;
@property(copy, nonatomic) NSNumber *active;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)handleWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

