//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, TSDTextureSet;

@interface TSDMagicMoveAnimationMatch : NSObject
{
    TSDTextureSet *_morphTexture;
    TSDTextureSet *_morphQueuedTexture;
    TSDTextureSet *_morphQueuedForDeletionTexture;
    NSLock *_morphTextureUpdateLock;
    _Bool _isUsingMorphTexture;
    _Bool _didUseMorphTexture;
    _Bool _hasBeenTornDown;
    _Bool _isMorphMatch;
    _Bool _isTextStyleIdenticalExceptSize;
    _Bool _shouldDisableTextMorphing;
    TSDTextureSet *_outgoingTexture;
    TSDTextureSet *_incomingTexture;
}

+ (id)animationMatch;
+ (unsigned long long)magicMoveMorphTexturesPerSecond;
@property(nonatomic) _Bool shouldDisableTextMorphing; // @synthesize shouldDisableTextMorphing=_shouldDisableTextMorphing;
@property(nonatomic) _Bool isTextStyleIdenticalExceptSize; // @synthesize isTextStyleIdenticalExceptSize=_isTextStyleIdenticalExceptSize;
@property(nonatomic) _Bool isMorphMatch; // @synthesize isMorphMatch=_isMorphMatch;
@property(retain, nonatomic) TSDTextureSet *incomingTexture; // @synthesize incomingTexture=_incomingTexture;
@property(retain, nonatomic) TSDTextureSet *outgoingTexture; // @synthesize outgoingTexture=_outgoingTexture;
- (void)unlockCurrentMorphTexture;
- (id)lockCurrentMorphTexture;
- (void)addMorphTexture:(id)arg1;
@property(readonly, nonatomic) _Bool isMatched;
- (id)description;
- (void)teardown;
- (void)dealloc;
- (id)init;

@end

