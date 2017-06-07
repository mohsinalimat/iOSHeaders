//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKUIShader, CLKUITexture;

@interface CLKUIQuad : NSObject
{
    _Bool _opaque;
    float _alpha;
    float _sampleRadius;
    float _rotation;
    CLKUITexture *_primaryTexture;
    CLKUITexture *_secondaryTexture;
    CLKUIShader *_shader;
    struct CGPoint _sampleCenter;
}

+ (id)quadWithShader:(id)arg1;
@property(nonatomic, getter=isOpaque) _Bool opaque; // @synthesize opaque=_opaque;
@property(nonatomic) float rotation; // @synthesize rotation=_rotation;
@property(nonatomic) float sampleRadius; // @synthesize sampleRadius=_sampleRadius;
@property(nonatomic) struct CGPoint sampleCenter; // @synthesize sampleCenter=_sampleCenter;
@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) CLKUIShader *shader; // @synthesize shader=_shader;
@property(retain, nonatomic) CLKUITexture *secondaryTexture; // @synthesize secondaryTexture=_secondaryTexture;
@property(retain, nonatomic) CLKUITexture *primaryTexture; // @synthesize primaryTexture=_primaryTexture;
- (void).cxx_destruct;
- (id)initWithShader:(id)arg1;

@end
