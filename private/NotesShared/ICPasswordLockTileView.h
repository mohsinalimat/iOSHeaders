//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NotesShared/CAAnimationDelegate-Protocol.h>

@class CALayer, NSString, UILabel;

@interface ICPasswordLockTileView : UIView <CAAnimationDelegate>
{
    _Bool _isLocked;
    CALayer *_lockHandle;
    CALayer *_lockBase;
    CALayer *_lockGroupLayer;
    CALayer *_backdropLayer;
    UILabel *_label;
    UIView *_containerView;
    CDUnknownBlockType _fadeInCompletionHandler;
    CDUnknownBlockType _fadeOutCompletionHandler;
}

+ (id)lockTileView;
@property(copy, nonatomic) CDUnknownBlockType fadeOutCompletionHandler; // @synthesize fadeOutCompletionHandler=_fadeOutCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType fadeInCompletionHandler; // @synthesize fadeInCompletionHandler=_fadeInCompletionHandler;
@property(nonatomic) _Bool isLocked; // @synthesize isLocked=_isLocked;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) CALayer *backdropLayer; // @synthesize backdropLayer=_backdropLayer;
@property(retain, nonatomic) CALayer *lockGroupLayer; // @synthesize lockGroupLayer=_lockGroupLayer;
@property(retain, nonatomic) CALayer *lockBase; // @synthesize lockBase=_lockBase;
@property(retain, nonatomic) CALayer *lockHandle; // @synthesize lockHandle=_lockHandle;
- (void).cxx_destruct;
- (id)lockAnimationWithBeginTime:(double)arg1;
- (id)unLockAnimationWithBeginTime:(double)arg1;
- (id)fadeAnimationWithStartAlpha:(double)arg1 endAlpha:(double)arg2 beginTime:(double)arg3 duration:(double)arg4;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)showFadeOutAnimationForActivityType:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showFadeInAnimationForActivityType:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)awakeFromNib;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

