//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UITextFieldRoundedRectBackgroundViewNeue.h>

__attribute__((visibility("hidden")))
@interface _UISearchBarSearchFieldBackgroundView : _UITextFieldRoundedRectBackgroundViewNeue
{
    _Bool _showingTouch;
    _Bool _backgroundContainer;
    long long _barStyle;
    unsigned long long _searchBarStyle;
}

@property(nonatomic) _Bool backgroundContainer; // @synthesize backgroundContainer=_backgroundContainer;
@property(nonatomic) _Bool showingTouch; // @synthesize showingTouch=_showingTouch;
@property(nonatomic) unsigned long long searchBarStyle; // @synthesize searchBarStyle=_searchBarStyle;
@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
- (void)updateView;
- (id)_ultralightFillColorForOverlayFilter:(_Bool)arg1 active:(_Bool)arg2;
- (id)_fillColor:(_Bool)arg1;
- (id)_strokeColor:(_Bool)arg1;
- (void)setCornerRadius:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2 updateView:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2;

@end

