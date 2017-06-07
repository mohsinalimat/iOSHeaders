//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/BSSimpleAssertion.h>

#import <SpringBoardUIServices/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface _SBUIBiometricMatchingAssertion : BSSimpleAssertion <BSDescriptionProviding>
{
    unsigned long long _matchMode;
}

@property(readonly, nonatomic) unsigned long long matchMode; // @synthesize matchMode=_matchMode;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)initWithMatchMode:(unsigned long long)arg1 reason:(id)arg2 invalidationBlock:(CDUnknownBlockType)arg3;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2 queue:(id)arg3 invalidationBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

