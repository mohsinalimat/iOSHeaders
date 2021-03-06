//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSCH3DCamera, TSCH3DDataBufferResource;
@protocol TSCH3DShadowsRenderer;

__attribute__((visibility("hidden")))
@interface TSCH3DChartShadowsPropertiesInternal : NSObject
{
    _Bool mEnabled;
    TSCH3DCamera *mCamera;
    TSCH3DDataBufferResource *mQuad;
    TSCH3DDataBufferResource *mTexcoords;
    TSCH3DDataBufferResource *mFadecoords;
    NSObject<TSCH3DShadowsRenderer> *mRenderer;
    box_a3bd9649 mShadowPlanePadding;
}

@property(readonly, nonatomic) NSObject<TSCH3DShadowsRenderer> *renderer; // @synthesize renderer=mRenderer;
@property(retain, nonatomic) TSCH3DDataBufferResource *fadecoords; // @synthesize fadecoords=mFadecoords;
@property(retain, nonatomic) TSCH3DDataBufferResource *texcoords; // @synthesize texcoords=mTexcoords;
@property(retain, nonatomic) TSCH3DDataBufferResource *quad; // @synthesize quad=mQuad;
@property(retain, nonatomic) TSCH3DCamera *camera; // @synthesize camera=mCamera;
@property(nonatomic) _Bool enabled; // @synthesize enabled=mEnabled;
- (id).cxx_construct;
- (void)invalidate;
@property(readonly, nonatomic) _Bool shadowPlaneValid;
- (void)setupResources;
- (void)dealloc;
- (id)initWithCamera:(id)arg1 renderer:(id)arg2;

@end

