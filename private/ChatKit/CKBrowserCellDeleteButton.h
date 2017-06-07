//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UIView;

@interface CKBrowserCellDeleteButton : UIButton
{
    UIView *_backgroundView;
    UIView *_whiteTintView;
    UIImageView *_xColorBurnView;
    UIImageView *_xPlusDView;
}

@property(retain, nonatomic) UIImageView *xPlusDView; // @synthesize xPlusDView=_xPlusDView;
@property(retain, nonatomic) UIImageView *xColorBurnView; // @synthesize xColorBurnView=_xColorBurnView;
@property(retain, nonatomic) UIView *whiteTintView; // @synthesize whiteTintView=_whiteTintView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

