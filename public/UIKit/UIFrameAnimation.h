//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAnimation.h>

@interface UIFrameAnimation : UIAnimation
{
    struct CGRect _startFrame;
    struct CGRect _endFrame;
    int _fieldsToChange;
}

- (void)setProgress:(float)arg1;
- (void)setSignificantRectFields:(int)arg1;
- (struct CGRect)endFrame;
- (void)setEndFrame:(struct CGRect)arg1;
- (void)setStartFrame:(struct CGRect)arg1;
- (id)initWithTarget:(id)arg1;

@end

