//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface SKUIGiftDashView : UIView
{
    UIColor *_dashColor;
    struct CGSize _dashSize;
    double _dashSpacing;
}

@property(nonatomic) double dashSpacing; // @synthesize dashSpacing=_dashSpacing;
@property(nonatomic) struct CGSize dashSize; // @synthesize dashSize=_dashSize;
@property(copy, nonatomic) UIColor *dashColor; // @synthesize dashColor=_dashColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

