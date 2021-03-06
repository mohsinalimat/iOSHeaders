//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <SafariServices/UIDragInteractionDelegate-Protocol.h>
#import <SafariServices/UIDragInteractionDelegate_Private-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIStackView, UIView, _SFQuickLookDocumentInfoView;
@protocol _SFQuickLookDocumentViewDelegate;

@interface _SFQuickLookDocumentView : UIScrollView <UIDragInteractionDelegate, UIDragInteractionDelegate_Private>
{
    UIView *_wrapperView;
    UIView *_contentView;
    _SFQuickLookDocumentInfoView *_documentInfoView;
    NSArray *_actionButtons;
    UIStackView *_actionButtonsView;
    NSLayoutConstraint *_topContentInsetConstraint;
    NSLayoutConstraint *_documentInfoViewBottomAnchorConstraint;
    id <_SFQuickLookDocumentViewDelegate> _quickLookDocumentViewDelegate;
}

@property(nonatomic) __weak id <_SFQuickLookDocumentViewDelegate> quickLookDocumentViewDelegate; // @synthesize quickLookDocumentViewDelegate=_quickLookDocumentViewDelegate;
- (void).cxx_destruct;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (id)_api_dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (void)_actionButtonTapped:(id)arg1;
- (void)_updatePropertiesDefinedByContentSizeCategory;
- (void)_configureOrientationBasedConstraints:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_setUpLayoutConstraints;
- (struct CGRect)frameForButtonAtIndex:(unsigned long long)arg1;
- (void)updateTopContentInset:(double)arg1;
- (void)updateDocumentIcon:(id)arg1;
- (void)updateDocumentFileType:(id)arg1;
- (void)updateDocumentFileSize:(id)arg1;
- (void)updateDocumentFileName:(id)arg1;
- (void)updateActionTitles:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

