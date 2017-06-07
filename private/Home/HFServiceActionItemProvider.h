//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HFActionSetValueSource, HFItemBuilder, HMActionSet, NSMutableSet;
@protocol HFActionSetBuilderProtocol, HFActionSetValueSourceDelegate;

@interface HFServiceActionItemProvider : HFItemProvider
{
    HMActionSet *_actionSet;
    HFItemBuilder<HFActionSetBuilderProtocol> *_actionSetBuilder;
    NSMutableSet *_actionItems;
    HFActionSetValueSource *_valueSource;
}

@property(retain, nonatomic) HFActionSetValueSource *valueSource; // @synthesize valueSource=_valueSource;
@property(retain, nonatomic) NSMutableSet *actionItems; // @synthesize actionItems=_actionItems;
@property(retain, nonatomic) HFItemBuilder<HFActionSetBuilderProtocol> *actionSetBuilder; // @synthesize actionSetBuilder=_actionSetBuilder;
@property(retain, nonatomic) HMActionSet *actionSet; // @synthesize actionSet=_actionSet;
- (void).cxx_destruct;
- (id)_addOrUpdateActionItemWithAction:(id)arg1 actionBuilder:(id)arg2 addedActionItems:(id)arg3 home:(id)arg4;
- (id)_createActionItemForCharacteristic:(id)arg1 home:(id)arg2;
- (id)_actionItemForCharacteristic:(id)arg1 addedActionItems:(id)arg2 home:(id)arg3;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
@property(nonatomic) __weak id <HFActionSetValueSourceDelegate> actionSetValueSourceDelegate;
- (id)initWithHome:(id)arg1 actionSetBuilder:(id)arg2;
- (id)initWithHome:(id)arg1 actionSet:(id)arg2;
- (id)initWithHome:(id)arg1;

@end

