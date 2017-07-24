//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class KNAnimatedSlideView, KNPlaybackSession;

__attribute__((visibility("hidden")))
@interface KNOffscreenController : NSObject
{
    _Bool _isImageGenerationCancelled;
    KNAnimatedSlideView *_animatedSlideView;
    KNPlaybackSession *_session;
    struct CGSize _outputSize;
}

@property(readonly, nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(readonly, nonatomic) KNPlaybackSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) __weak KNAnimatedSlideView *animatedSlideView; // @synthesize animatedSlideView=_animatedSlideView;
- (void).cxx_destruct;
- (void)cancelImageGeneration;
- (void)drawCurrentEventIntoContext:(struct CGContext *)arg1 intoRect:(struct CGRect)arg2 ignoreBuildVisibility:(_Bool)arg3;
- (void)generateImageOfCurrentEventWithCompletonHandler:(CDUnknownBlockType)arg1;
- (struct CGImage *)copyImageOfCurrentEventIgnoringBuildVisilibity:(_Bool)arg1;
- (_Bool)gotoSlideNode:(id)arg1 andEvent:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithShow:(id)arg1 canvasDelegate:(id)arg2 outputSize:(struct CGSize)arg3;
- (id)initWithShow:(id)arg1 canvasDelegate:(id)arg2;

@end

