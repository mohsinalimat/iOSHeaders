//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSDMagicMoveAnimationMatch, TSDTextureSet;

__attribute__((visibility("hidden")))
@interface TSDMagicMoveTextureZOrdererMatch : NSObject
{
    _Bool _isOutgoingZIndexUnmatched;
    _Bool _isIncomingZIndexUnmatched;
    TSDTextureSet *_outgoingTexture;
    TSDTextureSet *_incomingTexture;
    long long _outgoingZIndex;
    long long _incomingZIndex;
    TSDMagicMoveAnimationMatch *_animationMatch;
}

@property(readonly, nonatomic) TSDMagicMoveAnimationMatch *animationMatch; // @synthesize animationMatch=_animationMatch;
@property(readonly, nonatomic) _Bool isIncomingZIndexUnmatched; // @synthesize isIncomingZIndexUnmatched=_isIncomingZIndexUnmatched;
@property(readonly, nonatomic) _Bool isOutgoingZIndexUnmatched; // @synthesize isOutgoingZIndexUnmatched=_isOutgoingZIndexUnmatched;
@property(nonatomic) long long incomingZIndex; // @synthesize incomingZIndex=_incomingZIndex;
@property(nonatomic) long long outgoingZIndex; // @synthesize outgoingZIndex=_outgoingZIndex;
@property(readonly, nonatomic) TSDTextureSet *incomingTexture; // @synthesize incomingTexture=_incomingTexture;
@property(readonly, nonatomic) TSDTextureSet *outgoingTexture; // @synthesize outgoingTexture=_outgoingTexture;
- (id)description;
- (double)interpolatedZIndexAtPercent:(double)arg1;
- (double)intersectionPercentWithZOrdererMatch:(id)arg1;
- (_Bool)intersectsZOrdererMatch:(id)arg1;
- (_Bool)intersectsZOrdererMatch:(id)arg1 withAttemptedZIndex:(long long)arg2;
- (void)dealloc;
- (id)initWithAnimationMatch:(id)arg1;
- (id)init;

@end

