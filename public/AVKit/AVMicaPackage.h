//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/CAMLParserDelegate-Protocol.h>
#import <AVKit/CAStateControllerDelegate-Protocol.h>

@class CALayer, CAStateController, NSString;

@interface AVMicaPackage : NSObject <CAMLParserDelegate, CAStateControllerDelegate>
{
    NSString *_state;
    NSString *_packageName;
    CAStateController *_stateController;
    long long _layoutDirection;
    CALayer *_rootLayer;
    struct CGSize _targetSize;
    struct CGSize _unscaledSize;
}

+ (id)classSubstitions;
@property(retain, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(readonly, nonatomic) CAStateController *stateController; // @synthesize stateController=_stateController;
@property(readonly, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(nonatomic) struct CGSize unscaledSize; // @synthesize unscaledSize=_unscaledSize;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)sublayerWithName:(id)arg1;
- (id)availableStatesOnLayer:(id)arg1;
- (id)availableStates;
- (void)transitionToStateWithName:(id)arg1 onLayer:(id)arg2;
- (void)transitionToStateWithName:(id)arg1;
- (void)_recursivelySetFillColor:(id)arg1 rootLayer:(id)arg2;
- (id)_recursivelyFindSublayerWithName:(id)arg1 rootLayer:(id)arg2;
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
- (void)setFillColor:(id)arg1;
- (id)initWithPackageName:(id)arg1 layoutDirection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

