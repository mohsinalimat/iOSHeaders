//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <DocumentManagerUICore/DOCItemInfoPresenter-Protocol.h>
#import <DocumentManagerUICore/DOCTagsCollectionViewDelegate-Protocol.h>
#import <DocumentManagerUICore/DOCThumbnailHolder-Protocol.h>
#import <DocumentManagerUICore/DOCThumbnailListener-Protocol.h>
#import <DocumentManagerUICore/FPItemCollectionDelegate-Protocol.h>

@class DOCDownloadButton, DOCTagsCollectionView, DOCVisualEffectLabel, FPItem, FPItemCollection, NSLayoutConstraint, NSProgress, NSString, UIImageView, UILabel, UIStackView, UIView, UIVisualEffectView;
@protocol DOCThumbnail;

@interface DOCItemInfoViewController : UIViewController <DOCTagsCollectionViewDelegate, DOCThumbnailListener, DOCThumbnailHolder, FPItemCollectionDelegate, DOCItemInfoPresenter>
{
    _Bool _isInfoInPopoverMode;
    _Bool _isFirstTimeAppear;
    _Bool _viewDidAppear;
    DOCDownloadButton *_downloadButton;
    FPItem *_item;
    id <DOCThumbnail> _thumbnail;
    UIStackView *_stackView;
    UIImageView *_imageView;
    UIVisualEffectView *_primaryVisualEffectView;
    UILabel *_primaryLabel;
    UIVisualEffectView *_secondaryVisualEffectView;
    UILabel *_secondaryLabel;
    UIView *_downloadButtonContainer;
    NSProgress *_observedProgress;
    NSLayoutConstraint *_firstSeparatorViewHeightConstraint;
    DOCVisualEffectLabel *_kindLabel;
    DOCVisualEffectLabel *_kindValue;
    DOCVisualEffectLabel *_sizeLabel;
    DOCVisualEffectLabel *_sizeValue;
    DOCVisualEffectLabel *_whereLabel;
    DOCVisualEffectLabel *_whereValue;
    DOCVisualEffectLabel *_createdLabel;
    DOCVisualEffectLabel *_createdValue;
    DOCVisualEffectLabel *_modifiedLabel;
    DOCVisualEffectLabel *_modifiedValue;
    NSLayoutConstraint *_secondSeparatorViewHeightConstraint;
    DOCVisualEffectLabel *_tagsLabel;
    DOCTagsCollectionView *_tagsCollectionView;
    FPItem *_observedItem;
    FPItemCollection *_observedCollection;
}

@property(retain, nonatomic) FPItemCollection *observedCollection; // @synthesize observedCollection=_observedCollection;
@property(nonatomic) _Bool viewDidAppear; // @synthesize viewDidAppear=_viewDidAppear;
@property(nonatomic) _Bool isFirstTimeAppear; // @synthesize isFirstTimeAppear=_isFirstTimeAppear;
@property(retain, nonatomic) FPItem *observedItem; // @synthesize observedItem=_observedItem;
@property(nonatomic) __weak DOCTagsCollectionView *tagsCollectionView; // @synthesize tagsCollectionView=_tagsCollectionView;
@property(nonatomic) __weak DOCVisualEffectLabel *tagsLabel; // @synthesize tagsLabel=_tagsLabel;
@property(nonatomic) __weak NSLayoutConstraint *secondSeparatorViewHeightConstraint; // @synthesize secondSeparatorViewHeightConstraint=_secondSeparatorViewHeightConstraint;
@property(nonatomic) __weak DOCVisualEffectLabel *modifiedValue; // @synthesize modifiedValue=_modifiedValue;
@property(nonatomic) __weak DOCVisualEffectLabel *modifiedLabel; // @synthesize modifiedLabel=_modifiedLabel;
@property(nonatomic) __weak DOCVisualEffectLabel *createdValue; // @synthesize createdValue=_createdValue;
@property(nonatomic) __weak DOCVisualEffectLabel *createdLabel; // @synthesize createdLabel=_createdLabel;
@property(nonatomic) __weak DOCVisualEffectLabel *whereValue; // @synthesize whereValue=_whereValue;
@property(nonatomic) __weak DOCVisualEffectLabel *whereLabel; // @synthesize whereLabel=_whereLabel;
@property(nonatomic) __weak DOCVisualEffectLabel *sizeValue; // @synthesize sizeValue=_sizeValue;
@property(nonatomic) __weak DOCVisualEffectLabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(nonatomic) __weak DOCVisualEffectLabel *kindValue; // @synthesize kindValue=_kindValue;
@property(nonatomic) __weak DOCVisualEffectLabel *kindLabel; // @synthesize kindLabel=_kindLabel;
@property(nonatomic) __weak NSLayoutConstraint *firstSeparatorViewHeightConstraint; // @synthesize firstSeparatorViewHeightConstraint=_firstSeparatorViewHeightConstraint;
@property(retain, nonatomic) NSProgress *observedProgress; // @synthesize observedProgress=_observedProgress;
@property(nonatomic) __weak UIView *downloadButtonContainer; // @synthesize downloadButtonContainer=_downloadButtonContainer;
@property(nonatomic) __weak UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(nonatomic) __weak UIVisualEffectView *secondaryVisualEffectView; // @synthesize secondaryVisualEffectView=_secondaryVisualEffectView;
@property(nonatomic) __weak UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(nonatomic) __weak UIVisualEffectView *primaryVisualEffectView; // @synthesize primaryVisualEffectView=_primaryVisualEffectView;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) _Bool isInfoInPopoverMode; // @synthesize isInfoInPopoverMode=_isInfoInPopoverMode;
@property(retain, nonatomic) id <DOCThumbnail> thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) FPItem *item; // @synthesize item=_item;
@property(nonatomic) __weak DOCDownloadButton *downloadButton; // @synthesize downloadButton=_downloadButton;
- (void).cxx_destruct;
- (void)collection:(id)arg1 didUpdateObservedItem:(id)arg2;
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(CDUnknownBlockType)arg2;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)tagView:(id)arg1 didDeleteTag:(id)arg2;
- (void)displayTagView;
- (void)tagsCollectionViewDidSelectAddTagButton:(id)arg1;
- (void)updateTagsWithItem:(id)arg1;
- (void)updateInfoViewWithItem:(id)arg1;
- (void)updateAttributesWithItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)registerObservedItem:(id)arg1;
- (void)updateDownloadButton;
- (void)userDidTapDownloadButton:(id)arg1;
- (void)updateSecondaryTitleWithItem:(id)arg1;
- (void)updatePrimaryTitleWithItem:(id)arg1;
- (void)thumbnailLoaded:(id)arg1;
- (void)updateThumbnailWithItem:(id)arg1;
- (void)_updateNavigationItem:(_Bool)arg1;
- (void)updatePreferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupValue:(id)arg1;
- (void)setupLabel:(id)arg1 text:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

