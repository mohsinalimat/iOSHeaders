//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class EKDayOccurrenceView, UIColor;

@interface EKDayOccurrenceResizeHandleView : UIView
{
    EKDayOccurrenceView *_occurrenceView;
    UIColor *_baseColor;
    double _radius;
}

@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) __weak EKDayOccurrenceView *occurrenceView; // @synthesize occurrenceView=_occurrenceView;
@property(retain, nonatomic) UIColor *baseColor; // @synthesize baseColor=_baseColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 occurrenceView:(id)arg2;
- (struct CGRect)_circleRect;

@end
