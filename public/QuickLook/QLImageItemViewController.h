//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLScrollableContentItemViewController.h>

#import <QuickLook/QLAnimationTimerObserver-Protocol.h>

@class NSString, QLAnimatedImage, UIImageView;

__attribute__((visibility("hidden")))
@interface QLImageItemViewController : QLScrollableContentItemViewController <QLAnimationTimerObserver>
{
    UIImageView *_imageView;
    QLAnimatedImage *_animatedImage;
    double _initialTimeStamp;
    double _currentPlaybackTime;
    struct CGSize _imageSize;
    _Bool _imageIsAnimated;
}

+ (_Bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;
- (void).cxx_destruct;
- (id)draggableView;
- (void)animationTimerFired:(double)arg1;
- (long long)preferredWhitePointAdaptivityStyle;
- (struct CGSize)imageSize;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

