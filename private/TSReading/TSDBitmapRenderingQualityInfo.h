//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TSDBitmapRenderingQualityInfo : NSObject
{
    int mQuality;
    float mCanvasScale;
    NSMutableDictionary *mImageMap;
}

@property(readonly, nonatomic) int quality; // @synthesize quality=mQuality;
- (struct CGImage *)degradedImageRefForProvider:(id)arg1 ofSize:(struct CGSize)arg2;
- (void)cacheProvider:(id)arg1 ofSize:(struct CGSize)arg2;
- (void)dealloc;
- (id)initWithQuality:(int)arg1 canvasScale:(float)arg2;

@end

