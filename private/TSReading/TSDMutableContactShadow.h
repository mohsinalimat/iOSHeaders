//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDContactShadow.h>

@class TSUColor;

@interface TSDMutableContactShadow : TSDContactShadow
{
}

@property(nonatomic) TSUColor *TSUColor; // @dynamic TSUColor;
@property(nonatomic) struct CGColor *color; // @dynamic color;
- (void)setOpacity:(double)arg1;
@property(nonatomic) double offset; // @dynamic offset;
@property(nonatomic) double radius; // @dynamic radius;
@property(nonatomic) double perspective; // @dynamic perspective;
@property(nonatomic) double height; // @dynamic height;

// Remaining properties
@property(nonatomic, getter=isEnabled) _Bool enabled; // @dynamic enabled;

@end

