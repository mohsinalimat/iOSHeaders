//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FLPreferencesFollowUpItemListViewController, NSSet, PSListController;
@protocol FLViewModel;

@interface FLPreferencesController : NSObject
{
    id <FLViewModel> _topViewModel;
    FLPreferencesFollowUpItemListViewController *_controller;
    NSSet *_spyglassWhitelist;
    _Bool _activityIndicatorActive;
    PSListController *_listViewController;
    CDUnknownBlockType _itemChangeObserver;
}

@property(copy, nonatomic) CDUnknownBlockType itemChangeObserver; // @synthesize itemChangeObserver=_itemChangeObserver;
@property(nonatomic) __weak PSListController *listViewController; // @synthesize listViewController=_listViewController;
- (void).cxx_destruct;
- (void)stopSpinnerForSpecifier:(id)arg1;
- (void)startSpinnerForSpecifier:(id)arg1;
- (void)_presentSpecifier:(id)arg1;
- (void)_handleEmptyRefreshResult:(id)arg1;
- (void)_refreshItemsAndPresentDetailForSpecifier:(id)arg1;
- (void)loadSpecifier:(id)arg1;
- (id)spyglassSpecifiers;
- (void)_updateSpecifier:(id)arg1 withCommonPropertiesForGroup:(id)arg2;
- (id)_urlBasedSpecifierWithName:(id)arg1;
- (id)_extensionSupportingSpecifierWithName:(id)arg1;
- (id)_specifierForGroup:(id)arg1;
- (id)_specifierForItem:(id)arg1 group:(id)arg2;
- (id)topLevelSpecifiers;
- (id)initWithViewModel:(id)arg1;
- (id)init;

@end

