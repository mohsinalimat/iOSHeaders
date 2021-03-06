//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface TPBottomBar : UIView
{
    long long _orientation;
    long long _style;
}

+ (long long)overlayStyle;
+ (long long)fullscreenStyle;
+ (double)defaultHeight;
+ (double)defaultHeightForOrientation:(long long)arg1;
+ (double)defaultHeightForStyle:(long long)arg1;
+ (double)defaultHeightForStyle:(long long)arg1 orientation:(long long)arg2;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 updateFrame:(_Bool)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithDefaultSizeForOrientation:(long long)arg1;
- (id)initWithDefaultSize;

@end

