//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSUColor;

@interface TSDPathStroker : NSObject
{
    TSUColor *mColor;
    double mWidth;
    TSDPathStroker *mPrecedingStroker;
}

@property(nonatomic) double width; // @synthesize width=mWidth;
- (void)strokePath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2 inColor:(id)arg3;
- (void)dealloc;
- (id)initWithProperties:(id)arg1 bundle:(id)arg2 dataManager:(void *)arg3 precedingStroker:(id)arg4;

@end

