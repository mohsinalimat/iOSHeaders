//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionRanking-Protocol.h>

@class NSString;
@protocol CNUIInteractionAdvisor;

@interface CNUIUserActionRanking : NSObject <CNUIUserActionRanking>
{
    id <CNUIInteractionAdvisor> _interactionAdvisor;
}

+ (id)sortKeyWithUsername:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)constrainMechanismsForActionType:(id)arg1;
+ (id)advisorSettingsForIdentifyingMostRecentAction:(id)arg1 actionType:(id)arg2;
+ (id)advisorSettingsForSortingAddresses:(id)arg1 actionType:(id)arg2;
@property(readonly, nonatomic) id <CNUIInteractionAdvisor> interactionAdvisor; // @synthesize interactionAdvisor=_interactionAdvisor;
- (void).cxx_destruct;
- (id)selectMostRecentActionFromItems:(id)arg1;
- (id)selectRecentActionItems:(id)arg1 schedulerProvider:(id)arg2;
- (id)sortKeysByRankingAddresses:(id)arg1 actionType:(id)arg2 scheduler:(id)arg3;
- (id)sortActionItems:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithInteractionAdvisor:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

