//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _TVStarHistogram : UIView
{
    UIImage *_starImage;
    NSArray *_starBars;
    UIColor *_barEmptyColor;
    UIColor *_barFillColor;
    double _lineSpacing;
}

+ (id)_histogramViewWithElement:(id)arg1 existingView:(id)arg2;
+ (id)histogramViewWithElement:(id)arg1 existingView:(id)arg2;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(retain, nonatomic) UIColor *barFillColor; // @synthesize barFillColor=_barFillColor;
@property(retain, nonatomic) UIColor *barEmptyColor; // @synthesize barEmptyColor=_barEmptyColor;
@property(retain, nonatomic) UIImage *starImage; // @synthesize starImage=_starImage;
@property(copy, nonatomic) NSArray *starBars; // @synthesize starBars=_starBars;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)canBecomeFocused;

@end

