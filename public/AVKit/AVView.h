//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface AVView : UIView
{
    _Bool _ignoresTouches;
    struct NSDirectionalEdgeInsets _hitRectInsets;
}

@property(nonatomic) _Bool ignoresTouches; // @synthesize ignoresTouches=_ignoresTouches;
@property(nonatomic) struct NSDirectionalEdgeInsets hitRectInsets; // @synthesize hitRectInsets=_hitRectInsets;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)hitRect;
- (id)initWithFrame:(struct CGRect)arg1;

@end

