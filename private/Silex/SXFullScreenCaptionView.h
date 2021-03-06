//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Silex/STStandaloneTextLayoutDelegate-Protocol.h>
#import <Silex/SXAutoSizedCanvasControllerDelegate-Protocol.h>
#import <Silex/UIGestureRecognizerDelegate-Protocol.h>
#import <Silex/UIScrollViewDelegate-Protocol.h>

@class NSString, STStandaloneTextInfo, STStandaloneTextLayout, STTextTangierDocumentRoot, STTextTangierStorage, SXAutoSizedCanvasController, SXFullScreenCaption, SXTextSource, UIScrollView, UISwipeGestureRecognizer, UITapGestureRecognizer, UIVisualEffectView;
@protocol SXFullScreenCaptionViewDelegate;

@interface SXFullScreenCaptionView : UIView <SXAutoSizedCanvasControllerDelegate, STStandaloneTextLayoutDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    int _expansionMode;
    id <SXFullScreenCaptionViewDelegate> _delegate;
    SXFullScreenCaption *_caption;
    unsigned long long _viewIndex;
    UITapGestureRecognizer *_tapGestureRecognizer;
    SXAutoSizedCanvasController *_autoSizeCanvasController;
    STTextTangierDocumentRoot *_documentRoot;
    STStandaloneTextInfo *_captionInfo;
    STStandaloneTextLayout *_captionLayout;
    UIVisualEffectView *_backgroundView;
    UIScrollView *_scrollView;
    UISwipeGestureRecognizer *_swipeGestureRecognizer;
    SXTextSource *_textSource;
    STTextTangierStorage *_textStorage;
    struct CGSize _fullSize;
    struct CGRect _temporaryLayoutRect;
    struct UIEdgeInsets _fullInsets;
}

+ (void)_applyStyle:(id)arg1 toStorage:(id)arg2;
+ (id)_overridePropertiesWithComponentStyle:(id)arg1 storage:(id)arg2;
@property(retain, nonatomic) STTextTangierStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(retain, nonatomic) SXTextSource *textSource; // @synthesize textSource=_textSource;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeGestureRecognizer; // @synthesize swipeGestureRecognizer=_swipeGestureRecognizer;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) struct UIEdgeInsets fullInsets; // @synthesize fullInsets=_fullInsets;
@property(nonatomic) struct CGSize fullSize; // @synthesize fullSize=_fullSize;
@property(nonatomic) struct CGRect temporaryLayoutRect; // @synthesize temporaryLayoutRect=_temporaryLayoutRect;
@property(retain, nonatomic) STStandaloneTextLayout *captionLayout; // @synthesize captionLayout=_captionLayout;
@property(retain, nonatomic) STStandaloneTextInfo *captionInfo; // @synthesize captionInfo=_captionInfo;
@property(retain, nonatomic) STTextTangierDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
@property(retain, nonatomic) SXAutoSizedCanvasController *autoSizeCanvasController; // @synthesize autoSizeCanvasController=_autoSizeCanvasController;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(readonly, nonatomic) int expansionMode; // @synthesize expansionMode=_expansionMode;
@property(readonly, nonatomic) unsigned long long viewIndex; // @synthesize viewIndex=_viewIndex;
@property(readonly, nonatomic) SXFullScreenCaption *caption; // @synthesize caption=_caption;
@property(nonatomic) __weak id <SXFullScreenCaptionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)forceFullExpandsionMode;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleSwipeGestureRecognizer:(id)arg1;
- (void)handleTapGestureRecognizer:(id)arg1;
- (void)setupGestureRecognizers;
@property(readonly, nonatomic) _Bool expanded;
- (void)setExpansionMode:(int)arg1 animated:(_Bool)arg2;
- (struct CGPoint)positionForTextLayout:(id)arg1;
- (double)widthForTextLayout:(id)arg1;
- (double)marginForTextLayout:(id)arg1;
- (void)renderCaptionInTangier;
- (void)initializeTangier;
- (void)createScrollView;
- (void)updateFrameAnimated:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)frameWithSuperview:(id)arg1 size:(struct CGSize)arg2 forExpansionMode:(int)arg3;
- (struct CGRect)determineFrameInSuperview:(id)arg1;
- (void)createBackgroundView;
- (void)updateWithCaption:(id)arg1 forViewIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

