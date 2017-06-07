//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDInteractionAdvising-Protocol.h>

@class _CDInteractionStore, _CDQueryInteractionAdvisor, _CDSocialInteractionAdvisor, _CDTemporalInteractionAdvisor;

@interface _CDInteractionAdviceEngine : NSObject <_CDInteractionAdvising>
{
    _CDInteractionStore *_store;
    _CDTemporalInteractionAdvisor *_temporalAdvisor;
    _CDSocialInteractionAdvisor *_socialAdvisor;
    _CDQueryInteractionAdvisor *_queryAdvisor;
}

+ (id)interactionAdviceEngineWithStore:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _CDTemporalInteractionAdvisor *temporalAdvisor;
@property(readonly, nonatomic) _CDSocialInteractionAdvisor *socialAdvisor;
- (void)tuneSocialAdvisorUsingSettings:(id)arg1 heartBeatHandler:(id)arg2;
- (id)adviseSocialInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3;
- (id)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2;
- (id)adviseInteractionsForLocation:(id)arg1 usingSettings:(id)arg2;
- (id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2;
- (id)adviseInteractionsUsingSettings:(id)arg1;
- (id)rankCandidateContacts:(id)arg1 usingSettings:(id)arg2;
- (id)initWithStore:(id)arg1;

@end

