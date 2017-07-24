//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <Silex/STAXCustomRotorItemProvider-Protocol.h>
#import <Silex/SXAnimatedImageDelegate-Protocol.h>
#import <Silex/SXDragable-Protocol.h>
#import <Silex/SXReachabilityObserver-Protocol.h>

@class NSMapTable, NSString, NSTimer, SXAnimatedImage, SXImageResource, UIActivityIndicatorView, UIImage, UILongPressGestureRecognizer, UIView;
@protocol SXImageViewDelegate, SXResourceDataSource, UIItemProviderWriting;

@interface SXImageView : UIImageView <STAXCustomRotorItemProvider, SXAnimatedImageDelegate, SXReachabilityObserver, SXDragable>
{
    _Bool _shouldShowLoadingIndicator;
    _Bool _scrubbingEnabled;
    _Bool _isScrubbing;
    _Bool _autoPlayEnabled;
    _Bool _shouldResume;
    _Bool _shouldResumeAfterLoad;
    id <SXImageViewDelegate> _delegate;
    SXImageResource *_imageResource;
    id <SXResourceDataSource> _resourceDataSource;
    SXAnimatedImage *_animatedImage;
    unsigned long long _frameIndex;
    CDUnknownBlockType _frameChangeBlock;
    CDUnknownBlockType _preferredQualityImageRequestCancelHandler;
    CDUnknownBlockType _highQualityImageRequestCancelHandler;
    UIImage *_preferredQualityImage;
    UIImage *_highQualityImage;
    unsigned long long _preferredQualityInterest;
    unsigned long long _highQualityInterest;
    NSMapTable *_interestTable;
    UIActivityIndicatorView *_activityIndicatorView;
    unsigned long long _playCount;
    NSTimer *_activeTimer;
    unsigned long long _intendedFrameIndex;
    UILongPressGestureRecognizer *_scrubGesture;
    struct CGSize _preferredImageSize;
    struct CGSize _preferredQualityLoadingImageSize;
    struct CGPoint _previousPoint;
}

@property(nonatomic) struct CGPoint previousPoint; // @synthesize previousPoint=_previousPoint;
@property(retain, nonatomic) UILongPressGestureRecognizer *scrubGesture; // @synthesize scrubGesture=_scrubGesture;
@property(nonatomic) unsigned long long intendedFrameIndex; // @synthesize intendedFrameIndex=_intendedFrameIndex;
@property(retain, nonatomic) NSTimer *activeTimer; // @synthesize activeTimer=_activeTimer;
@property(nonatomic) unsigned long long playCount; // @synthesize playCount=_playCount;
@property(nonatomic) _Bool shouldResumeAfterLoad; // @synthesize shouldResumeAfterLoad=_shouldResumeAfterLoad;
@property(nonatomic) _Bool shouldResume; // @synthesize shouldResume=_shouldResume;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) NSMapTable *interestTable; // @synthesize interestTable=_interestTable;
@property(nonatomic) unsigned long long highQualityInterest; // @synthesize highQualityInterest=_highQualityInterest;
@property(nonatomic) unsigned long long preferredQualityInterest; // @synthesize preferredQualityInterest=_preferredQualityInterest;
@property(retain, nonatomic) UIImage *highQualityImage; // @synthesize highQualityImage=_highQualityImage;
@property(retain, nonatomic) UIImage *preferredQualityImage; // @synthesize preferredQualityImage=_preferredQualityImage;
@property(nonatomic) struct CGSize preferredQualityLoadingImageSize; // @synthesize preferredQualityLoadingImageSize=_preferredQualityLoadingImageSize;
@property(copy, nonatomic) CDUnknownBlockType highQualityImageRequestCancelHandler; // @synthesize highQualityImageRequestCancelHandler=_highQualityImageRequestCancelHandler;
@property(copy, nonatomic) CDUnknownBlockType preferredQualityImageRequestCancelHandler; // @synthesize preferredQualityImageRequestCancelHandler=_preferredQualityImageRequestCancelHandler;
@property(nonatomic) _Bool autoPlayEnabled; // @synthesize autoPlayEnabled=_autoPlayEnabled;
@property(copy, nonatomic) CDUnknownBlockType frameChangeBlock; // @synthesize frameChangeBlock=_frameChangeBlock;
@property(nonatomic) unsigned long long frameIndex; // @synthesize frameIndex=_frameIndex;
@property(readonly, nonatomic) SXAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
@property(nonatomic) _Bool isScrubbing; // @synthesize isScrubbing=_isScrubbing;
@property(readonly, nonatomic) __weak id <SXResourceDataSource> resourceDataSource; // @synthesize resourceDataSource=_resourceDataSource;
@property(readonly, nonatomic) SXImageResource *imageResource; // @synthesize imageResource=_imageResource;
@property(nonatomic) __weak id <SXImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize preferredImageSize; // @synthesize preferredImageSize=_preferredImageSize;
@property(nonatomic) _Bool scrubbingEnabled; // @synthesize scrubbingEnabled=_scrubbingEnabled;
@property(nonatomic) _Bool shouldShowLoadingIndicator; // @synthesize shouldShowLoadingIndicator=_shouldShowLoadingIndicator;
- (void).cxx_destruct;
- (_Bool)accessibilityIgnoresInvertColors;
- (void)didEndDragging;
- (void)didStartDragging;
@property(readonly, nonatomic) NSString *dragIdentifier;
@property(readonly, nonatomic) UIView *dragPreviewView;
@property(readonly, nonatomic) id <UIItemProviderWriting> dragObject;
- (id)itemsForCustomRotor:(id)arg1;
- (id)supportedCustomRotors;
- (void)animatedImage:(id)arg1 madeImageAvailableForFrameAtIndex:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)resume;
- (void)pause;
@property(readonly, nonatomic) _Bool paused;
- (void)setFrameIndex:(unsigned long long)arg1 allowNearest:(_Bool)arg2;
- (void)showNextFrame;
- (void)setAnimatedImage:(id)arg1;
@property(readonly, nonatomic) _Bool containsAnimatedImage;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)handleScrubGesture:(id)arg1;
- (void)reachabilityChanged:(_Bool)arg1;
- (_Bool)isVisible;
- (void)fadeInImageWhenVisible:(id)arg1;
- (void)crossfadeToImage:(id)arg1;
- (struct CGSize)loadedImageSize;
@property(readonly, nonatomic) _Bool hasLoadedImage;
- (void)didReceiveMemoryWarning;
- (void)didLoadAnimatedImage:(id)arg1;
- (void)loadHighQualityImage;
- (void)loadPreferredQualityImage;
- (void)validateLoadedImage;
- (_Bool)objectHasQualityInterest:(id)arg1 quality:(int *)arg2;
@property(readonly, nonatomic) _Bool prefersHighQuality;
@property(readonly, nonatomic) _Bool hasInterest;
- (void)giveUpInterestForObject:(id)arg1;
- (void)addInterestInImageQuality:(int)arg1 forObject:(id)arg2;
- (void)layoutActivityIndicator;
@property(nonatomic) long long loadingIndicatorStyle;
- (void)dealloc;
- (id)initWithImageResource:(id)arg1 resourceDataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

