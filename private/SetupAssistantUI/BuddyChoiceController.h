//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SetupAssistantUI/BFFSplashController.h>

#import <SetupAssistantUI/BFFFlowItem-Protocol.h>

@class NSArray, NSString;
@protocol BFFFlowItemDelegate;

__attribute__((visibility("hidden")))
@interface BuddyChoiceController : BFFSplashController <BFFFlowItem>
{
    id <BFFFlowItemDelegate> _delegate;
    NSArray *_choices;
}

+ (id)cloudConfigSkipKey;
@property(copy, nonatomic) NSArray *choices; // @synthesize choices=_choices;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didSelectChoice:(id)arg1;
- (void)_tappedChoice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

