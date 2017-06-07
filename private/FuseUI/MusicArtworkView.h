//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSMutableSet, UIView;
@protocol MusicArtworkViewDelegate;

@interface MusicArtworkView : UIImageView
{
    NSMutableSet *_activeTouches;
    long long _externalContentMode;
    UIView *_highlightView;
    unsigned long long _highlightTransactionCount;
    _Bool _overallHighlighted;
    _Bool _touchHighlighted;
    _Bool _shouldRespectHighlightProperty;
    id <MusicArtworkViewDelegate> _delegate;
    double _idealAspectRatio;
}

@property(nonatomic) _Bool shouldRespectHighlightProperty; // @synthesize shouldRespectHighlightProperty=_shouldRespectHighlightProperty;
@property(nonatomic) double idealAspectRatio; // @synthesize idealAspectRatio=_idealAspectRatio;
@property(nonatomic) __weak id <MusicArtworkViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateOverallHighlightedAnimated:(_Bool)arg1;
- (void)_updateArtworkViewContentMode;
- (void)_setTouchHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_musicArtworkViewCommonInitialization;
- (void)_finishTouches:(id)arg1 didCancel:(_Bool)arg2 withEvent:(id)arg3;
- (_Bool)isArtworkSizeCloseEnoughToIdealAspectRatio:(struct CGSize)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)setImage:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

