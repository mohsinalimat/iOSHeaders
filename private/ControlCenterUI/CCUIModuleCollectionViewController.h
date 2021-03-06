//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ControlCenterUI/CCUIContentModuleContainerViewControllerDelegate-Protocol.h>
#import <ControlCenterUI/CCUILayoutViewLayoutSource-Protocol.h>
#import <ControlCenterUI/CCUIModuleInstanceManagerObserver-Protocol.h>
#import <ControlCenterUI/CCUIModuleSettingsManagerObserver-Protocol.h>

@class CCUIControlCenterPositionProvider, CCUILayoutOptions, CCUIModuleCollectionView, CCUIModuleInstanceManager, CCUIModuleSettingsManager, NSDictionary, NSHashTable, NSObject, NSString;
@protocol CCUIModuleCollectionViewControllerDelegate, OS_dispatch_group;

@interface CCUIModuleCollectionViewController : UIViewController <CCUIModuleInstanceManagerObserver, CCUIModuleSettingsManagerObserver, CCUILayoutViewLayoutSource, CCUIContentModuleContainerViewControllerDelegate>
{
    CCUIModuleInstanceManager *_moduleManager;
    CCUIModuleSettingsManager *_settingsManager;
    CCUIControlCenterPositionProvider *_portraitPositionProvider;
    CCUIControlCenterPositionProvider *_landscapePositionProvider;
    CCUILayoutOptions *_layoutOptions;
    NSDictionary *_moduleViewControllerByIdentifier;
    NSHashTable *_currentModules;
    NSObject<OS_dispatch_group> *_moduleCloseDispatchGroup;
    id <CCUIModuleCollectionViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <CCUIModuleCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)_interfaceOrientation;
- (id)_currentLayoutOptions;
- (id)_positionProviderForInterfaceOrientation:(long long)arg1;
- (id)_activePositionProvider;
- (id)_sizesForModuleIdentifiers:(id)arg1 moduleInstanceByIdentifier:(id)arg2 interfaceOrientation:(long long)arg3;
- (void)_sizeAndSortModuleViews;
- (void)_removeAndTearDownModuleViewControllerFromHierarchy:(id)arg1;
- (void)_setupAndAddModuleViewControllerToHierarchy:(id)arg1;
- (void)_populateModuleViewControllers;
- (id)_moduleInstances;
- (void)_updateModuleControllers;
- (void)_updateEnabledModuleIdentifiers;
- (id)obscuringBackgroundViewForContentModuleContainerViewController:(id)arg1;
- (void)contentModuleContainerViewController:(id)arg1 didCloseExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willCloseExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didOpenExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willOpenExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2;
- (_Bool)contentModuleContainerViewController:(id)arg1 canBeginInteractionWithModule:(id)arg2;
- (struct CGRect)compactModeFrameForContentModuleContainerViewController:(id)arg1;
- (_Bool)contentModuleContainerViewController:(id)arg1 shouldForwardAppearanceCall:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)layoutView:(id)arg1 shouldIgnoreSubview:(id)arg2;
- (struct CCUILayoutRect)layoutView:(id)arg1 layoutRectForSubview:(id)arg2;
- (struct CCUILayoutSize)layoutSizeForLayoutView:(id)arg1;
- (void)orderedEnabledModuleIdentifiersChangedForSettingsManager:(id)arg1;
- (void)moduleInstancesChangedForModuleInstanceManager:(id)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (id)queryAllTopLevelBlockingGestureRecognizers;
- (id)relevantSnapHeightsForOrientation:(long long)arg1;
- (_Bool)isAtMaxHeight;
- (struct CGSize)preferredContentSize;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)isModuleExpandedForIdentifier:(id)arg1;
- (void)dismissPresentedContentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeCurrentModuleWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)expandModuleWithIdentifier:(id)arg1;
- (void)willResignActive;
- (void)willBecomeActive;
@property(retain, nonatomic) CCUIModuleCollectionView *moduleCollectionView; // @dynamic moduleCollectionView;
@property(readonly, nonatomic) unsigned long long expandedModuleCount; // @dynamic expandedModuleCount;
- (id)initWithModuleInstanceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

