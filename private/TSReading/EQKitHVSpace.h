//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/EQKitBox.h>

@interface EQKitHVSpace : EQKitBox
{
    double mWidth;
    double mHeight;
    double mDepth;
}

@property(readonly, nonatomic) double depth; // @synthesize depth=mDepth;
@property(readonly, nonatomic) double height; // @synthesize height=mHeight;
@property(readonly, nonatomic) double width; // @synthesize width=mWidth;
- (_Bool)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
@property(readonly, nonatomic) double layoutDepth;
@property(readonly, nonatomic) double layoutHeight;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithWidth:(double)arg1 height:(double)arg2 depth:(double)arg3;
- (id)init;

@end

