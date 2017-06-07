//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKSimpleAcknowledgementGlyphView.h>

@class CALayer;

@interface CKThumbsDownAcknowledgmentGlyphView : CKSimpleAcknowledgementGlyphView
{
    CALayer *_animationLayer;
    CALayer *_contentLayer;
}

@property(retain, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(retain, nonatomic) CALayer *animationLayer; // @synthesize animationLayer=_animationLayer;
- (void).cxx_destruct;
- (void)setGlyphColor:(id)arg1;
- (double)animationDuration;
- (void)animateWithDelay:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)acknowledgmentType;

@end

