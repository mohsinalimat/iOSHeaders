//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UISearchBar;

__attribute__((visibility("hidden")))
@interface _SFFindOnPageInputBarContainer : UIView
{
    UISearchBar *_inputBar;
    double _maximumWidth;
}

@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(readonly, nonatomic) UISearchBar *inputBar; // @synthesize inputBar=_inputBar;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;
- (float)contentHuggingPriorityForAxis:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

