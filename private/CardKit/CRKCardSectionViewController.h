//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CardKit/INUIRemoteViewControllerDelegate-Protocol.h>
#import <CardKit/SFFeedbackListener-Protocol.h>
#import <CardKit/SearchUIFeedbackDelegate-Protocol.h>

@class CRKOverlayButton, INUIRemoteViewController, NSArray, NSString, UIView;
@protocol CRCardSection, CRKCardSectionView, CRKCardSectionViewControllerDataSource, CRKCardSectionViewControllerDelegate;

@interface CRKCardSectionViewController : UIViewController <INUIRemoteViewControllerDelegate, SearchUIFeedbackDelegate, SFFeedbackListener>
{
    CRKOverlayButton *_overlayButton;
    _Bool _loading;
    _Bool _active;
    _Bool _compressed;
    INUIRemoteViewController *_remoteViewController;
    id <CRKCardSectionViewControllerDelegate> _delegate;
    id <CRKCardSectionViewControllerDataSource> _dataSource;
    id <CRCardSection> _cardSection;
    NSArray *_extraCommands;
}

+ (void)registerCardSectionViewController;
+ (id)cardSectionClasses;
+ (id)cardSectionViewControllerForCardSection:(id)arg1 dataSource:(id)arg2;
@property(retain, nonatomic, getter=_extraCommands, setter=_setExtraCommands:) NSArray *extraCommands; // @synthesize extraCommands=_extraCommands;
@property(nonatomic, getter=isCompressed) _Bool compressed; // @synthesize compressed=_compressed;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) id <CRCardSection> cardSection; // @synthesize cardSection=_cardSection;
@property(nonatomic) __weak id <CRKCardSectionViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <CRKCardSectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) INUIRemoteViewController *_remoteViewController; // @synthesize _remoteViewController;
- (void).cxx_destruct;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (void)presentViewController:(id)arg1;
- (void)cardSectionViewDidInvalidateSize:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)remoteViewControllerServiceDidTerminate:(id)arg1;
- (void)remoteViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;
- (id)interfaceSectionsForRemoteViewController:(id)arg1;
- (id)maximumSizesBySystemVersionForRemoteViewController:(id)arg1;
- (id)minimumSizesBySystemVersionForRemoteViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)_setupCardSectionButtons;
- (void)_setViewExternally:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)_generateCardSectionViewAppearanceFeedback;
- (unsigned long long)crk_intrinsicInteractiveBehavior;
- (void)_createAndSetSearchUIView;
- (id)_parameters;
- (id)_interaction;
- (_Bool)_checkIfCardSectionIsNull:(id)arg1;
- (id)_backingCardSection;
- (_Bool)_shouldHideButtonOverlay;
- (_Bool)_isIndicatingActivity;
- (void)_attemptToConnectToRemoteViewControllerWithInteraction:(id)arg1 forParameters:(id)arg2;
- (_Bool)_shouldAttemptToConnectToRemoteViewController;
- (void)_buttonOverlayTouchWasCanceled:(id)arg1;
- (void)_buttonOverlayWasTouchedDown:(id)arg1;
- (void)_buttonOverlayWasTouchedUpOutside:(id)arg1;
- (void)_buttonOverlayWasTouchedUpInside:(id)arg1;
- (id)_preferredPunchoutCommand;
- (id)_destinationPunchout;
- (id)_commands;
- (_Bool)_shouldRenderButtonOverlay;
- (void)_resumeTouchesIfNecessary;
- (void)_cancelTouchesIfNecessary;
- (void)_finishLoadingViewIfNecessary;
- (void)_loadCardSectionView;
- (_Bool)_isLoadedWithIntentsUIView;
- (id)_unhandledParameters;
- (_Bool)_expectsSearchUIView;
- (_Bool)_hasCorrespondingSearchUIView;
- (void)_performCommand:(id)arg1;
- (_Bool)_setupWithDataSource:(id)arg1;
- (id)_initWithCardSection:(id)arg1 dataSource:(id)arg2;
- (void)eventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView<CRKCardSectionView> *view; // @dynamic view;

@end

