//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSDAnimationSession-Protocol.h>

@class KNAnimatedSlideView, KNAnimationContext, KNShow, KNSlideNode, NSMutableArray, NSString, TSDBitmapRenderingQualityInfo, TSULRUCache;
@protocol TSDCanvasDelegate, TSKAccessControllerReadTicket;

__attribute__((visibility("hidden")))
@interface KNPlaybackSession : NSObject <TSDAnimationSession>
{
    CDUnknownBlockType mEndShowHandler;
    _Bool mHasEndShowHandlerBeenCancelled;
    id <TSDCanvasDelegate> mCanvasDelegate;
    TSULRUCache *mASVCache;
    KNSlideNode *mCurrentSlideNode;
    KNSlideNode *mAlternateNextSlideNode;
    NSMutableArray *mBreadCrumbTrail;
    KNSlideNode *mLastVisitedSlideNode;
    KNShow *mShow;
    KNAnimationContext *mAnimationContext;
    int mPlayMode;
    id <TSKAccessControllerReadTicket> mOutgoingRenderingTicket;
    id <TSKAccessControllerReadTicket> mIncomingRenderingTicket;
    TSDBitmapRenderingQualityInfo *mBitmapRenderingQualityInfo;
    _Bool mSkipSlides;
    _Bool mShouldAnimateTransitionOnLastSlide;
    _Bool mShouldAnimateNullTransitions;
    _Bool mShouldUseContentlessLayers;
    _Bool mSkipBuilds;
    _Bool mShouldPreferCARenderer;
    _Bool mDisableAutoAnimationRemoval;
    _Bool mShouldAutomaticallyPlayMovies;
    _Bool mShouldShowVideoReflectionsAndMasks;
    _Bool mShouldForceTextureGeneration;
    _Bool mShouldDrawTexturesAsynchronously;
    _Bool mShouldRenderSlidesSynchronously;
    _Bool mShouldAlwaysSetCurrentGLContextWhenDrawing;
    _Bool mShouldUseSourceImage;
    _Bool mDisableTransitionTextureCaching;
    id <TSKAccessControllerReadTicket> mAccessControllerReadTicket;
    _Bool _isExitingShow;
    _Bool _shouldNotBakeActionTextures;
}

@property(nonatomic) _Bool shouldNotBakeActionTextures; // @synthesize shouldNotBakeActionTextures=_shouldNotBakeActionTextures;
@property(nonatomic) _Bool isExitingShow; // @synthesize isExitingShow=_isExitingShow;
@property(nonatomic) id <TSKAccessControllerReadTicket> accessControllerReadTicket; // @synthesize accessControllerReadTicket=mAccessControllerReadTicket;
@property(nonatomic) _Bool disableTransitionTextureCaching; // @synthesize disableTransitionTextureCaching=mDisableTransitionTextureCaching;
@property(nonatomic) _Bool shouldUseSourceImage; // @synthesize shouldUseSourceImage=mShouldUseSourceImage;
@property(nonatomic) _Bool shouldAlwaysSetCurrentGLContextWhenDrawing; // @synthesize shouldAlwaysSetCurrentGLContextWhenDrawing=mShouldAlwaysSetCurrentGLContextWhenDrawing;
@property(nonatomic) _Bool shouldRenderSlidesSynchronously; // @synthesize shouldRenderSlidesSynchronously=mShouldRenderSlidesSynchronously;
@property(nonatomic) _Bool shouldDrawTexturesAsynchronously; // @synthesize shouldDrawTexturesAsynchronously=mShouldDrawTexturesAsynchronously;
@property(nonatomic) _Bool shouldForceTextureGeneration; // @synthesize shouldForceTextureGeneration=mShouldForceTextureGeneration;
@property(nonatomic) _Bool shouldShowVideoReflectionsAndMasks; // @synthesize shouldShowVideoReflectionsAndMasks=mShouldShowVideoReflectionsAndMasks;
@property(nonatomic) _Bool shouldAutomaticallyPlayMovies; // @synthesize shouldAutomaticallyPlayMovies=mShouldAutomaticallyPlayMovies;
@property(nonatomic) _Bool disableAutoAnimationRemoval; // @synthesize disableAutoAnimationRemoval=mDisableAutoAnimationRemoval;
@property(nonatomic) _Bool shouldPreferCARenderer; // @synthesize shouldPreferCARenderer=mShouldPreferCARenderer;
@property(nonatomic) _Bool skipBuilds; // @synthesize skipBuilds=mSkipBuilds;
@property(nonatomic) _Bool skipSlides; // @synthesize skipSlides=mSkipSlides;
@property(nonatomic) _Bool shouldUseContentlessLayers; // @synthesize shouldUseContentlessLayers=mShouldUseContentlessLayers;
@property(nonatomic) _Bool shouldAnimateNullTransitions; // @synthesize shouldAnimateNullTransitions=mShouldAnimateNullTransitions;
@property(nonatomic) _Bool shouldAnimateTransitionOnLastSlide; // @synthesize shouldAnimateTransitionOnLastSlide=mShouldAnimateTransitionOnLastSlide;
@property(readonly, nonatomic) KNShow *show; // @synthesize show=mShow;
@property(nonatomic) int playMode; // @synthesize playMode=mPlayMode;
@property(copy, nonatomic) CDUnknownBlockType endShowHandler; // @synthesize endShowHandler=mEndShowHandler;
@property(nonatomic) id <TSDCanvasDelegate> canvasDelegate; // @synthesize canvasDelegate=mCanvasDelegate;
@property(retain, nonatomic) NSMutableArray *breadCrumbTrail; // @synthesize breadCrumbTrail=mBreadCrumbTrail;
@property(retain, nonatomic) TSDBitmapRenderingQualityInfo *bitmapRenderingQualityInfo; // @synthesize bitmapRenderingQualityInfo=mBitmapRenderingQualityInfo;
@property(readonly, nonatomic) KNAnimationContext *animationContext; // @synthesize animationContext=mAnimationContext;
@property(nonatomic) KNSlideNode *alternateNextSlideNode; // @synthesize alternateNextSlideNode=mAlternateNextSlideNode;
- (void)cancelEndShowHandler;
- (void)p_executeEndShowHandler;
- (void)executeEndShowHandlerAfterDelay:(double)arg1;
- (void)waitUntilSlideTextureRenderingIsCompleteForIdentifier:(id)arg1;
- (id)renderConcurrentlyOutgoingSlideTexture:(id)arg1 andIncomingSlideTexture:(id)arg2;
@property(readonly, nonatomic) KNAnimatedSlideView *nextAnimatedSlideViewAfterCurrent;
- (void)renderTextureSetContentsIfNeeded:(id)arg1;
- (void)renderTextureContentsIfNeeded:(id)arg1;
- (id)textureSetForRep:(id)arg1 context:(id)arg2 shouldRender:(_Bool)arg3;
- (id)textureSetForRep:(id)arg1 shouldRender:(_Bool)arg2;
- (void)invalidateSlideNumberLayoutsOnCanvas:(id)arg1;
- (id)repForInfo:(id)arg1 onCanvas:(id)arg2;
- (id)newCanvas;
- (double)showScale;
- (_Bool)isOffscreenPlayback;
@property(readonly, nonatomic) _Bool isPreview;
- (unsigned long long)slideNumberForSlideNode:(id)arg1;
- (id)newInitialTextureForIncomingSlide;
- (id)newFinalTextureForOutgoingSlide;
- (id)newTransitionTo:(id)arg1;
- (void)invalidateAnimatedSlideViewCache;
- (id)animatedSlideViewFor:(id)arg1 setupTransition:(_Bool)arg2;
@property(readonly, nonatomic) KNAnimatedSlideView *currentCachedAnimatedSlideView;
- (id)breadCrumb;
- (void)dropABreadCrumb;
- (id)gotoLastSlide;
- (id)lastSlideNode;
- (_Bool)atBegginingOfDeck;
- (id)gotoPreviousSlide;
- (id)previousSlideNodeBeforeCurrent;
- (id)gotoNextSlide;
- (id)nextSlideAfterCurrent;
- (id)nextSlideNodeAfterSlideNode:(id)arg1;
- (id)nextSlideNodeAfterCurrent;
- (id)currentSlideNode;
- (id)currentSlide;
- (id)gotoFirstSlide;
- (id)firstSlideNode;
- (void)gotoSlideNode:(id)arg1;
- (void)p_setCurrentSlideNode:(id)arg1;
- (void)dealloc;
- (id)initWithShow:(id)arg1 viewScale:(double)arg2 baseLayer:(id)arg3 isBaseLayerVisible:(_Bool)arg4 canvasDelegate:(id)arg5 endShowHandler:(CDUnknownBlockType)arg6;
@property(readonly, nonatomic) _Bool shouldShowInstructionalText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

