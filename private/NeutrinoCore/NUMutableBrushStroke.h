//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUBrushStroke.h>

@interface NUMutableBrushStroke : NUBrushStroke
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applyTransform:(struct CGAffineTransform)arg1;
- (void)appendPoint:(CDStruct_869f9c67)arg1;
- (id)points;
- (id)initWithRadius:(float)arg1 softness:(float)arg2 opacity:(float)arg3 pressureMode:(long long)arg4;

// Remaining properties
@property(nonatomic) float opacity; // @dynamic opacity;
@property(nonatomic) long long pressureMode; // @dynamic pressureMode;
@property(nonatomic) float radius; // @dynamic radius;
@property(nonatomic) float softness; // @dynamic softness;

@end

