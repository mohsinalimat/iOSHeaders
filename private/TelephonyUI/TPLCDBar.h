//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface TPLCDBar : UIView
{
    UIImageView *_shadowView;
}

+ (id)backgroundImage;
+ (double)defaultHeightForOrientation:(long long)arg1;
+ (double)defaultHeight;
@property(readonly) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
- (void).cxx_destruct;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 updateFrame:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithDefaultSize;
- (id)initWithDefaultSizeForOrientation:(long long)arg1;

@end

