//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface _HKStretchableImage : NSObject
{
    UIImage *_topImage;
    UIImage *_centerImage;
    UIImage *_bottomImage;
    UIImage *_singlePointImage;
}

@property(retain, nonatomic) UIImage *singlePointImage; // @synthesize singlePointImage=_singlePointImage;
@property(retain, nonatomic) UIImage *bottomImage; // @synthesize bottomImage=_bottomImage;
@property(retain, nonatomic) UIImage *centerImage; // @synthesize centerImage=_centerImage;
@property(retain, nonatomic) UIImage *topImage; // @synthesize topImage=_topImage;
- (void).cxx_destruct;
- (double)_desiredWidth;
- (void)renderInContext:(struct CGContext *)arg1 topCenter:(struct CGPoint)arg2 bottomCenter:(struct CGPoint)arg3 contextBounds:(struct CGRect)arg4 alpha:(double)arg5;
- (void)_renderSingleImageInContext:(struct CGContext *)arg1 point:(struct CGPoint)arg2 contextBounds:(struct CGRect)arg3 alpha:(double)arg4;
- (void)_renderStretchedInContext:(struct CGContext *)arg1 frame:(struct CGRect)arg2 contextBounds:(struct CGRect)arg3 alpha:(double)arg4;

@end

