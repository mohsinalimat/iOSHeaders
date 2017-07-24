//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NotesUI/ICAccessibilityChildReparentingTarget-Protocol.h>
#import <NotesUI/NotesTextureScrolling-Protocol.h>

@class NSLayoutConstraint, NSString, NotesTextureBackgroundView, NotesTextureView;
@protocol ICAccessibilityChildReparentingProvider;

@interface NotesBackgroundView : UIView <NotesTextureScrolling, ICAccessibilityChildReparentingTarget>
{
    _Bool _contentViewVisible;
    _Bool _topViewVisible;
    UIView *_contentView;
    NotesTextureBackgroundView *_textureView;
    NotesTextureBackgroundView *_topTextureView;
    NotesTextureBackgroundView *_bottomTextureView;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_bottomBarConstraint;
    id <ICAccessibilityChildReparentingProvider> _elementForAccessibilityReparenting;
}

@property(nonatomic) __weak id <ICAccessibilityChildReparentingProvider> elementForAccessibilityReparenting; // @synthesize elementForAccessibilityReparenting=_elementForAccessibilityReparenting;
@property(retain, nonatomic) NSLayoutConstraint *bottomBarConstraint; // @synthesize bottomBarConstraint=_bottomBarConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NotesTextureBackgroundView *bottomTextureView; // @synthesize bottomTextureView=_bottomTextureView;
@property(retain, nonatomic) NotesTextureBackgroundView *topTextureView; // @synthesize topTextureView=_topTextureView;
@property(retain, nonatomic) NotesTextureBackgroundView *textureView; // @synthesize textureView=_textureView;
@property(nonatomic, getter=isTopViewVisible) _Bool topViewVisible; // @synthesize topViewVisible=_topViewVisible;
@property(nonatomic, getter=isContentViewVisible) _Bool contentViewVisible; // @synthesize contentViewVisible=_contentViewVisible;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)reparentAccessibilityChildrenOfElement:(id)arg1;
- (id)accessibilityElements;
- (void)setAlphaForTopAndBottomBars:(double)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) NotesTextureView *backgroundView;
- (void)addSubviewAboveAllViews:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)setContentView:(id)arg1 useReadableLayoutGuide:(_Bool)arg2 topMargin:(double)arg3;
- (void)setContentView:(id)arg1 useReadableLayoutGuide:(_Bool)arg2;
- (void)snapshotContentIntoSnapshotView:(id)arg1;
- (id)scrollViewDescendantOfView:(id)arg1;
- (void)scrollView:(id)arg1 didChangeContentOffset:(struct CGPoint)arg2;
- (void)fadeInBottomToolbar:(id)arg1 duration:(double)arg2;
- (void)fadeOutBottomToolbar:(id)arg1 duration:(double)arg2;
- (void)updateConstraintsForBottomToolbar:(id)arg1;
- (void)addConstraintsForSafeAreaLayoutGuide:(id)arg1 bottomToolbar:(id)arg2 toContainer:(id)arg3;
- (void)addConstraintsForSafeAreaLayoutGuide:(id)arg1 toContainer:(id)arg2;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

