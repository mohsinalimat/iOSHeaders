//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewTableCell.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, UIImageView, UILabel, UILongPressGestureRecognizer, UIProgressView, UIView, _UIDocumentPickerContainerItem, _UIDocumentPickerDocumentCollectionViewController;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerCell : UICollectionViewTableCell
{
    _Bool _transitioningLayout;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_subtitle2Label;
    UILabel *_subtitleJoiner;
    UIImageView *_tagView;
    UIImageView *_thumbnailView;
    UIProgressView *_progressView;
    long long _cellStyle;
    NSArray *_actions;
    _UIDocumentPickerDocumentCollectionViewController *_collectionView;
    _UIDocumentPickerContainerItem *_item;
    NSLayoutConstraint *_thumbnailCenterWidthConstraint;
    NSLayoutConstraint *_thumbnailCenterHeightConstraint;
    NSArray *_gridConstraints;
    NSArray *_tableConstraints;
    NSArray *_indentedConstraints;
    NSArray *_activeConstraints;
    UIView *_indentationHelperView;
    NSLayoutConstraint *_indentationConstraint;
    UIImageView *_selectionView;
    UIView *_selectionViewsThumbnailView;
    NSMutableArray *_selectionViewConstraints;
    UILongPressGestureRecognizer *_pickableDiagnosticGestureRecognizer;
    UILongPressGestureRecognizer *_actionGestureRecognizer;
    NSArray *_availableActions;
    UIView *_cachedSelectedBackgroundView;
}

+ (struct CGSize)thumbnailSizeForTraits:(id)arg1 cellStyle:(long long)arg2;
+ (id)_subtitleFontForTable:(_Bool)arg1;
+ (id)_titleFontForTable:(_Bool)arg1;
+ (struct CGSize)defaultSizeForCellStyle:(long long)arg1 traitCollection:(id)arg2;
@property(retain, nonatomic) UIView *cachedSelectedBackgroundView; // @synthesize cachedSelectedBackgroundView=_cachedSelectedBackgroundView;
@property(retain, nonatomic) NSArray *availableActions; // @synthesize availableActions=_availableActions;
@property(retain, nonatomic) UILongPressGestureRecognizer *actionGestureRecognizer; // @synthesize actionGestureRecognizer=_actionGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *pickableDiagnosticGestureRecognizer; // @synthesize pickableDiagnosticGestureRecognizer=_pickableDiagnosticGestureRecognizer;
@property(retain, nonatomic) NSMutableArray *selectionViewConstraints; // @synthesize selectionViewConstraints=_selectionViewConstraints;
@property(retain, nonatomic) UIView *selectionViewsThumbnailView; // @synthesize selectionViewsThumbnailView=_selectionViewsThumbnailView;
@property(retain, nonatomic) UIImageView *selectionView; // @synthesize selectionView=_selectionView;
@property(retain, nonatomic) NSLayoutConstraint *indentationConstraint; // @synthesize indentationConstraint=_indentationConstraint;
@property(retain, nonatomic) UIView *indentationHelperView; // @synthesize indentationHelperView=_indentationHelperView;
@property(nonatomic, getter=isTransitioningLayout) _Bool transitioningLayout; // @synthesize transitioningLayout=_transitioningLayout;
@property(retain, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property(retain, nonatomic) NSArray *indentedConstraints; // @synthesize indentedConstraints=_indentedConstraints;
@property(retain, nonatomic) NSArray *tableConstraints; // @synthesize tableConstraints=_tableConstraints;
@property(retain, nonatomic) NSArray *gridConstraints; // @synthesize gridConstraints=_gridConstraints;
@property(retain, nonatomic) NSLayoutConstraint *thumbnailCenterHeightConstraint; // @synthesize thumbnailCenterHeightConstraint=_thumbnailCenterHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *thumbnailCenterWidthConstraint; // @synthesize thumbnailCenterWidthConstraint=_thumbnailCenterWidthConstraint;
@property(retain, nonatomic) _UIDocumentPickerContainerItem *item; // @synthesize item=_item;
@property(nonatomic) __weak _UIDocumentPickerDocumentCollectionViewController *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UIImageView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UILabel *subtitleJoiner; // @synthesize subtitleJoiner=_subtitleJoiner;
@property(retain, nonatomic) UILabel *subtitle2Label; // @synthesize subtitle2Label=_subtitle2Label;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)_showPickableDiagnostic;
- (_Bool)canBecomeFirstResponder;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_showActions:(id)arg1;
- (void)updateActionGestureRecognizer;
- (void)_moveAction:(id)arg1;
- (void)_activityAction:(id)arg1;
- (void)_renameAction:(id)arg1;
- (void)_moreAction:(id)arg1;
- (void)_infoAction:(id)arg1;
- (void)_deleteAction:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)_udpateLabelAlpha;
- (void)applyLayoutAttributes:(id)arg1;
- (void)updateForEditingState:(_Bool)arg1;
- (void)_updateConstraintsForCellStyle;
- (void)setEditing:(_Bool)arg1;
- (void)_updateSeparatorInset;
- (void)_updateAccessoryType;
- (void)_updateFonts;
- (void)_updateSelectionState:(_Bool)arg1;
- (void)_updateIconSize;
- (void)reloadItem:(_Bool)arg1;
- (void)dealloc;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)prepareForReuse;
- (void)_dynamicTypeSizeChanged:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

